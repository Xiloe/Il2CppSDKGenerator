using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using dnlib.DotNet;
using dnlib.IO;
using dnlib.Utils;
using System.Text.RegularExpressions;
using Newtonsoft.Json.Serialization;
using Newtonsoft.Json;
using System.Diagnostics;
using System.Windows.Forms;

namespace Il2CppSDK
{
    class Program
    {
        static Dictionary<string, int> m_DuplicateMethodTable = new Dictionary<string, int>();
        static string OUTPUT_DIR = "SDK";
        static ModuleDefMD currentModule = null;
        static StreamWriter currentFile = null;
        static Script script = null;
        static ulong totalClasses = 0;

        static string Il2CppTypeToCppType(TypeSig type)
        {
            if (type.IsGenericInstanceType)
            {
                return FormatIl2CppGeneric(type);
            }

            string result = "void*";

            if (type.FullName.Equals("System.Int8"))
                result = "int8_t";

            if (type.FullName.Equals("System.UInt8"))
                result = "uint8_t";

            if (type.FullName.Equals("System.Int16"))
                result = "int16_t";

            if (type.FullName.Equals("System.UInt16"))
                result = "uint16_t";

            if (type.FullName.Equals("System.Int32"))
                result = "int32_t";

            if (type.FullName.Equals("System.UInt32"))
                result = "uint32_t";

            if (type.FullName.Equals("System.Int64"))
                result = "int64_t";

            if (type.FullName.Equals("System.UInt64"))
                result = "uint64_t";

            if (type.FullName.Equals("System.Single"))
                result = "float";

            if (type.FullName.Equals("System.Double"))
                result = "double";

            if (type.FullName.Equals("System.Boolean"))
                result = "bool";

            if (type.FullName.Equals("System.Char"))
                result = "char";

            if (type.FullName.Equals("System.Byte"))
                result = "unsigned char";

            if (type.FullName.Equals("System.SByte"))
                result = "signed char";

            if (type.FullName.Equals("System.String"))
                result = "Il2CppString*";

            if (type.FullName.Equals("UnityEngine.Vector2"))
                result = "Il2CppVector2";

            if (type.FullName.Equals("UnityEngine.Vector3"))
                result = "Il2CppVector3";

            if (type.FullName.Equals("UnityEngine.Quaternion"))
                result = "Il2CppQuaternion";

            if (type.FullName.Equals("UnityEngine.Rect"))
                result = "Il2CppRect";

            if (type.FullName.Equals("UnityEngine.Color"))
                result = "Il2CppColor";

            if (type.FullName.Equals("System.Void"))
                result = "void";

            if (type.FullName.Contains("[]"))
                result = "Il2CppArray<" + result + ">*";

            return result;
        }
        static string GetFieldOffset(FieldDef field)
        {
            foreach (var attr in field.CustomAttributes)
            {
                if (attr.AttributeType.Name.Equals("FieldOffsetAttribute"))
                {
                    var Offset = attr.GetField("Offset");
                    if (Offset != null && Offset.Value != null)
                    {
                        return Offset.Value.ToString();
                    }
                }
            }
            return "0x0";
        }
        static string GetMethodOffset(MethodDef method)
        {
            foreach (var attr in method.CustomAttributes)
            {
                if (attr.AttributeType.Name.Equals("AddressAttribute"))
                {
                    var Offset = attr.GetField("Offset");
                    if (Offset != null && Offset.Value != null)
                    {
                        return Offset.Value.ToString();
                    }
                }
            }
            return "0x0";
        }
        static string FormatIl2CppGeneric(TypeSig type)
        {
            string result = "";
            if (type.GetName().StartsWith("List"))
            {
                result = "Il2CppList<";
            }
            else
            if (type.GetName().StartsWith("Dictionary"))
            {
                result = "Il2CppDictionary<";
            }
            else
            {
                return "void*";
            }
            List<string> args = new List<string>();
            foreach (var arg in type.ToGenericInstSig().GenericArguments)
            {
                if (arg.IsGenericInstanceType)
                {
                    args.Add(FormatIl2CppGeneric(arg));
                }
                else args.Add(Il2CppTypeToCppType(arg));
            }
            result += string.Join(", ", args.ToArray());
            result += ">*";
            return result;
        }
        static string FormatToValidClassname(string className)
        {
            Regex rgx = new Regex("[^a-zA-Z0-9]");
            return rgx.Replace(className, "");
        }

        static void ParseFields(TypeDef clazz, bool useNamespace = true, int totalNamespace = 1)
        {
            foreach(var rid in currentModule.Metadata.GetFieldRidList(clazz.Rid))
            {
                var field = currentModule.ResolveField(rid);

                if(field == null || field.HasConstant)
                {
                    continue;
                }

                var fieldName = field.Name.Replace("::", "_").Replace("<", "").Replace(">", "").Replace("k__BackingField", "").Replace(".", "_").Replace("`", "_").Replace("-", "_"); ;
                if (Char.IsNumber(fieldName.ToString()[0]))
                {
                    fieldName = "_" + fieldName;
                }

                if (fieldName.Equals("auto") || fieldName.Equals("register") || fieldName.Equals("this") || fieldName.Equals("T") || fieldName.Equals("friend"))
                    fieldName += "_";

                var fieldType = Il2CppTypeToCppType(field.FieldType);
                var fieldOffset = GetFieldOffset(field);

                currentFile.Write((useNamespace ? RepeatText("\t", totalNamespace) : "") + string.Format("\ttemplate <typename T = {0}>", fieldType));
                currentFile.WriteLine(string.Format(" {0}{1}& {2}() {{", (field.IsStatic ? "static " : ""), "T", fieldName));
                if(field.IsStatic)
                {
                    currentFile.WriteLine((useNamespace ? RepeatText("\t", totalNamespace) : "") + string.Format("\t\treturn *({0}*)((uintptr_t)StaticClass()->static_fields + {1});", "T", fieldOffset));
                } 
                else
                {
                    currentFile.WriteLine((useNamespace ? RepeatText("\t", totalNamespace) : "") + string.Format("\t\treturn *({0}*)((uintptr_t)this + {1});", "T", fieldOffset));
                }
                currentFile.WriteLine((useNamespace ? RepeatText("\t", totalNamespace) : "") + "\t}");
            }
        }
        static void ParseMethods(TypeDef clazz, bool useNamespace=true, int totalNamespace=1)
        {
            foreach (var rid in currentModule.Metadata.GetMethodRidList(clazz.Rid))
            {
                var method = currentModule.ResolveMethod(rid);

                if (method == null)
                {
                    continue;
                }

                var methodName = method.Name.Replace("::", "_").Replace("<", "").Replace(">", "").Replace(".", "_").Replace("`", "_").Replace("-", "_");
                if(Char.IsNumber(methodName.ToString()[0]))
                {
                    methodName = "_" + methodName;
                }

                if (methodName.Equals("auto") || methodName.Equals("register"))
                    methodName += "_";

                var methodType = Il2CppTypeToCppType(method.ReturnType);
                var methodOffset = GetMethodOffset(method);

                string methodKey = clazz.Namespace + clazz.FullName + method.Name;
                if (m_DuplicateMethodTable.ContainsKey(methodKey))
                {
                    methodName += "_" + m_DuplicateMethodTable[methodKey]++;
                } else
                {
                    m_DuplicateMethodTable.Add(methodKey, 1);
                }

                List<string> methodParams = new List<string>();
                List<string> paramTypes = new List<string>();
                List<string> paramNames = new List<string>();

                foreach (var param in method.Parameters)
                {
                    if (param.IsNormalMethodParameter)
                    {
                        var paramType = Il2CppTypeToCppType(param.Type);

                        if (param.HasParamDef)
                        {
                            if (param.ParamDef.IsOut)
                            {
                                paramType += "*";
                            }
                        }

                        if (param.Name.Equals("auto") || param.Name.Equals("register") || param.Name.Equals("this") || param.Name.Equals("T") || param.Name.Equals("friend"))
                            param.Name += "_";

                        paramTypes.Add(paramType);
                        paramNames.Add(param.Name);

                        methodParams.Add(paramType + " " + param.Name);
                    }
                }
                currentFile.Write((useNamespace ? RepeatText("\t", totalNamespace) : "") + string.Format("\ttemplate <typename T = {0}>", methodType));
                currentFile.WriteLine(string.Format(" {0}{1} {2}({3}) {{", (method.IsStatic ? "static " : ""), "T", methodName, string.Join(", ", methodParams)));
                if (!method.IsStatic)
                {
                    if (methodParams.Count > 0)
                    {
                        currentFile.WriteLine((useNamespace ? RepeatText("\t", totalNamespace) : "") + "\t\treturn (({0} (*)({1}*, {2}))(Il2CppBase() + {3}))(this, {4});", "T", FormatToValidClassname(clazz.Name), string.Join(", ", paramTypes), methodOffset, string.Join(", ", paramNames));
                    } else currentFile.WriteLine((useNamespace ? RepeatText("\t", totalNamespace) : "") + "\t\treturn (({0} (*)({1}*))(Il2CppBase() + {3}))(this);", "T", FormatToValidClassname(clazz.Name), string.Join(", ", paramTypes), methodOffset);
                }
                else
                {
                    if (methodParams.Count > 0)
                    {
                        currentFile.WriteLine((useNamespace ? RepeatText("\t", totalNamespace) : "") + "\t\treturn (({0} (*)(void *, {1}))(Il2CppBase() + {2}))(0, {3});", "T", string.Join(", ", paramTypes), methodOffset, string.Join(", ", paramNames));
                    }
                    else
                    {
                        currentFile.WriteLine((useNamespace ? RepeatText("\t", totalNamespace) : "") + "\t\treturn (({0} (*)(void *))(Il2CppBase() + {2}))(0);", "T", string.Join(", ", paramTypes), methodOffset, string.Join(", ", paramNames));
                    }
                }
                currentFile.WriteLine((useNamespace ? RepeatText("\t", totalNamespace) : "") + "\t}");
            }
        }
        static void ParseClass(TypeDef clazz)
        {
            var module = clazz.Module;
            var namespaze = clazz.Namespace;
            var className = (string)clazz.Name;
            var classFilename = string.Concat(className.Split(Path.GetInvalidFileNameChars()));
            var validClassname = FormatToValidClassname(className);

            Console.ResetColor();
            Console.Write("[");
            Console.ForegroundColor = ConsoleColor.Cyan;
            Console.Write(module.Name);
            Console.ResetColor();
            Console.Write("]");
            Console.ForegroundColor = ConsoleColor.Magenta;
            Console.Write(" Generating");
            Console.ResetColor();
            Console.Write(": ");
            Console.ForegroundColor = ConsoleColor.Green;
            Console.WriteLine("{0}", clazz.FullName);
            Console.ResetColor();

            currentFile.WriteLine("#pragma once");
            currentFile.WriteLine("#include <Il2Cpp/Il2Cpp.h>");
            currentFile.WriteLine();

                
            bool useNamespace = namespaze.Length > 0;
            int totalNamespace = 0;
            if (useNamespace)
            {
                string[] namespaces = namespaze.ToString().Split('.');
                totalNamespace = namespaces.Length;
                for (int i = 0; i < totalNamespace; i++)
                {
                    currentFile.WriteLine(RepeatText("\t", i) + "namespace " + namespaces[i] + " { ");
                }
            }


            currentFile.WriteLine((useNamespace ? RepeatText("\t", totalNamespace) : "") + "class " + validClassname);
            currentFile.WriteLine((useNamespace ? RepeatText("\t", totalNamespace) : "") + "{");
            currentFile.WriteLine((useNamespace ? RepeatText("\t", totalNamespace) : "") + "public: ");

            ulong mClassAddr = 0;
            if(script != null)
            {
                string name = "Class$" + clazz.FullName;
                var result = script.ScriptMetadata.Find(x => x.Name.Equals(name));
                if (result != null)
                {
                    mClassAddr = result.Address;
                }
            }

            currentFile.WriteLine((useNamespace ? RepeatText("\t", totalNamespace) : "") + "\tstatic Il2CppClass *StaticClass() {");
            currentFile.WriteLine((useNamespace ? RepeatText("\t", totalNamespace) : "") + string.Format("\t\treturn *(Il2CppClass **)(Il2CppBase() + 0x{0:X});", mClassAddr));
            currentFile.WriteLine((useNamespace ? RepeatText("\t", totalNamespace) : "") + "\t}");


            if (currentModule.Metadata.GetFieldRidList(clazz.Rid).Count > 0)
            {
                currentFile.WriteLine((useNamespace ? RepeatText("\t", totalNamespace) : "") + "\t// Fields");
            }
            ParseFields(clazz, useNamespace, totalNamespace);


            if (currentModule.Metadata.GetMethodRidList(clazz.Rid).Count > 0)
            {
                currentFile.WriteLine((useNamespace ? RepeatText("\t", totalNamespace) : "") + "\t// Methods");
            }
            ParseMethods(clazz, useNamespace, totalNamespace);


            currentFile.WriteLine((useNamespace ? RepeatText("\t", totalNamespace) : "") + "};");
            for (int i = totalNamespace; i > 0; i--)
            {
                currentFile.WriteLine((useNamespace ? RepeatText("\t", i-1) : "") + "}");
            }
            totalClasses++;

        }
        static Dictionary<String, bool> bAddedToHeaders = new Dictionary<string, bool>();
        static void ParseClasses()
        {
            if (currentModule == null)
                return;

            foreach(var rid in currentModule.Metadata.GetTypeDefRidList())
            {
                var type = currentModule.ResolveTypeDef(rid);

                if (type == null)
                    continue;

                var module = type.Module;
                var namespaze = type.Namespace.Replace("<", "").Replace(">", "");
                var className = (string)type.Name.Replace("<", "").Replace(">", "");
                var classFilename = string.Concat(className.Split(Path.GetInvalidFileNameChars()));
                var validClassname = FormatToValidClassname(className);

                if (className.Equals("AndroidJNIHelper"))
                    continue;

                string outputPath = OUTPUT_DIR;
                outputPath += "\\" + module.Name;

                if (!Directory.Exists(outputPath))
                    Directory.CreateDirectory(outputPath);

                if (namespaze.Length > 0)
                {
                    File.AppendAllText(outputPath + "\\" + namespaze + ".h", string.Format("#include \"Includes/{0}/{1}.h\"\r\n", namespaze, classFilename));
                    if (!bAddedToHeaders.ContainsKey(module.Name + namespaze))
                    {
                        File.AppendAllText(OUTPUT_DIR + "\\" + module.Name + ".h", string.Format("#include \"{0}/{1}.h\"\r\n", module.Name, namespaze));
                        bAddedToHeaders.Add(module.Name + namespaze, true);
                    }
                }
                else
                {
                    File.AppendAllText(outputPath + "\\-.h", string.Format("#include \"Includes/{0}.h\"\r\n", classFilename));

                    if (!bAddedToHeaders.ContainsKey(module.Name + "-"))
                    {
                        File.AppendAllText(OUTPUT_DIR + "\\" + module.Name + ".h", string.Format("#include \"{0}/-.h\"\r\n", module.Name));
                        bAddedToHeaders.Add(module.Name + "-", true);
                    }
                }

                

                outputPath += "\\Includes";

                if(namespaze.Length > 0)
                {
                    outputPath += "\\" + namespaze;
                }

                if (!Directory.Exists(outputPath))
                    Directory.CreateDirectory(outputPath);

                outputPath += "\\" + classFilename + ".h";

                currentFile = new StreamWriter(outputPath);

                ParseClass(type);
                currentFile.Close();
            }
        }
        static void ParseModule(string moduleFile)
        {
            ModuleContext modCtx = ModuleDef.CreateModuleContext();
            currentModule = ModuleDefMD.Load(moduleFile, modCtx);

            string moduleOutput = OUTPUT_DIR + "\\" + currentModule.Name;

            if (!Directory.Exists(moduleOutput))
                Directory.CreateDirectory(moduleOutput);

            ParseClasses();
        }
        [STAThread]
        static void Main(string[] args)
        {
            string[] path1 = args.Length >= 1 ? args[0].Split(',') : null;
            string path2 = args.Length >= 2 ? args[1] : "";

            if (path1 == null)
            {
                OpenFileDialog openFileMain = new OpenFileDialog();

                openFileMain.Filter = ".NET Assembly (*.dll)|*.dll";
                openFileMain.FilterIndex = 0;
                openFileMain.RestoreDirectory = true;
                openFileMain.Multiselect = true;
                if (openFileMain.ShowDialog() == DialogResult.OK)
                {
                    path1 = openFileMain.FileNames;
                }
                else
                {
                    Console.WriteLine("Please select atleast one Assembly!");
                    Console.WriteLine();
                    return;
                }
            }
            if (path2.Length == 0)
            {
                OpenFileDialog openFileScript = new OpenFileDialog();

                openFileScript.Filter = "script.json|script.json";
                openFileScript.FilterIndex = 0;
                openFileScript.RestoreDirectory = true;
                openFileScript.Multiselect = false;

                if (openFileScript.ShowDialog() == DialogResult.OK)
                {
                    path2 = openFileScript.FileName;
                }
                else
                {
                    Console.WriteLine("Please select script.json!");
                    Console.WriteLine();
                    return;
                }
            }
            

            Stopwatch stopWatch = new Stopwatch();
            stopWatch.Start();

            if (Directory.Exists(OUTPUT_DIR))
                Directory.Delete(OUTPUT_DIR, true);

            Console.ForegroundColor = ConsoleColor.White;
            Console.WriteLine("Parsing script.json...");

            script = JsonConvert.DeserializeObject<Script>(File.ReadAllText(path2));

            Console.WriteLine("Total Assemblies: {0}\r\n", path1.Length);
            foreach (var file in path1)
            {
                ParseModule(file);
            }
            stopWatch.Stop();
            TimeSpan ts = stopWatch.Elapsed;

            string elapsedTime = String.Format("{0:0} hour(s) {1:0} minute(s) {2:0} second(s)", ts.Hours, ts.Minutes, ts.Seconds);

            Console.WriteLine();
            Console.ForegroundColor = ConsoleColor.Green;
            Console.WriteLine("Success! {0} classes has been generated!", totalClasses);
            Console.WriteLine("SDK Generated in " + elapsedTime);
            Console.ReadLine();
        }

        private static string RepeatText(string txt, int count)
        {
            string res = "";
            for (int i = 0; i < count; i++)
                res += txt;
            return res;
        }

        public class ScriptMethod
        {
            [JsonProperty("Address")]
            public ulong Address { get; set; }
            [JsonProperty("Name")]
            public string Name { get; set; }
            [JsonProperty("Signature")]
            public string Signature { get; set; }
        }
        public class ScriptString
        {
            [JsonProperty("Address")]
            public ulong Address { get; set; }
            [JsonProperty("Value")]
            public string Value { get; set; }
        }
        public class ScriptMetadata
        {
            [JsonProperty("Address")]
            public ulong Address { get; set; }
            [JsonProperty("Name")]
            public string Name { get; set; }
            [JsonProperty("Signature")]
            public string Signature { get; set; }
        }
        public class ScriptMetadataMethod
        {
            [JsonProperty("Address")]
            public ulong Address { get; set; }
            [JsonProperty("Name")]
            public string Name { get; set; }
            [JsonProperty("MethodAddress")]
            public ulong MethodAddress { get; set; }
        }
        public class Script
        {
            [JsonProperty("ScriptMethod")]
            public List<ScriptMethod> ScriptMethod { get; set; }
            [JsonProperty("ScriptString")]
            public List<ScriptString> ScriptString { get; set; }
            [JsonProperty("ScriptMetadata")]
            public List<ScriptMetadata> ScriptMetadata { get; set; }
            [JsonProperty("ScriptMetadataMethod")]
            public List<ScriptMetadataMethod> ScriptMetadataMethod { get; set; }
            [JsonProperty("Addresses")]
            public List<ulong> Addresses { get; set; }
        }
    }
};