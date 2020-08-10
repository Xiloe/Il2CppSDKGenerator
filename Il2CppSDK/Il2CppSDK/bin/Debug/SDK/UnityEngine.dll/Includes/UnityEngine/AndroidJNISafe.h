#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace UnityEngine { 
	class AndroidJNISafe
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0x0);
		}
		// Methods
		template <typename T = void> static T CheckException() {
			return ((T (*)(void *))(Il2CppBase() + 0x8E84D4))(0);
		}
		template <typename T = void> static T DeleteGlobalRef(void* globalref) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E1824))(0, globalref);
		}
		template <typename T = void> static T DeleteLocalRef(void* localref) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8DBA94))(0, localref);
		}
		template <typename T = void*> static T NewStringUTF(Il2CppString* bytes) {
			return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x8D88C0))(0, bytes);
		}
		template <typename T = Il2CppString*> static T GetStringUTFChars(void* str) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E8768))(0, str);
		}
		template <typename T = void*> static T GetObjectClass(void* ptr) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E0D10))(0, ptr);
		}
		template <typename T = void*> static T GetStaticMethodID(void* clazz, Il2CppString* name, Il2CppString* sig) {
			return ((T (*)(void *, void*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x8DCC10))(0, clazz, name, sig);
		}
		template <typename T = void*> static T GetMethodID(void* obj, Il2CppString* name, Il2CppString* sig) {
			return ((T (*)(void *, void*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x8DC5D0))(0, obj, name, sig);
		}
		template <typename T = void*> static T GetFieldID(void* clazz, Il2CppString* name, Il2CppString* sig) {
			return ((T (*)(void *, void*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x8DD1B4))(0, clazz, name, sig);
		}
		template <typename T = void*> static T GetStaticFieldID(void* clazz, Il2CppString* name, Il2CppString* sig) {
			return ((T (*)(void *, void*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x8DD15C))(0, clazz, name, sig);
		}
		template <typename T = void*> static T FromReflectedMethod(void* refMethod) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8DC580))(0, refMethod);
		}
		template <typename T = void*> static T FromReflectedField(void* refField) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8DD10C))(0, refField);
		}
		template <typename T = void*> static T FindClass(Il2CppString* name) {
			return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x8DBDB8))(0, name);
		}
		template <typename T = void*> static T NewObject(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E1704))(0, clazz, methodID, args);
		}
		template <typename T = void> static T SetStaticObjectField(void* clazz, void* fieldID, void* val) {
			return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x8E87B8))(0, clazz, fieldID, val);
		}
		template <typename T = void> static T SetStaticStringField(void* clazz, void* fieldID, Il2CppString* val) {
			return ((T (*)(void *, void*, void*, Il2CppString*))(Il2CppBase() + 0x8E880C))(0, clazz, fieldID, val);
		}
		template <typename T = void> static T SetStaticCharField(void* clazz, void* fieldID, char val) {
			return ((T (*)(void *, void*, void*, char))(Il2CppBase() + 0x8E8860))(0, clazz, fieldID, val);
		}
		template <typename T = void> static T SetStaticDoubleField(void* clazz, void* fieldID, double val) {
			return ((T (*)(void *, void*, void*, double))(Il2CppBase() + 0x8E88B4))(0, clazz, fieldID, val);
		}
		template <typename T = void> static T SetStaticFloatField(void* clazz, void* fieldID, float val) {
			return ((T (*)(void *, void*, void*, float))(Il2CppBase() + 0x8E8910))(0, clazz, fieldID, val);
		}
		template <typename T = void> static T SetStaticLongField(void* clazz, void* fieldID, int64_t val) {
			return ((T (*)(void *, void*, void*, int64_t))(Il2CppBase() + 0x8E8964))(0, clazz, fieldID, val);
		}
		template <typename T = void> static T SetStaticShortField(void* clazz, void* fieldID, int16_t val) {
			return ((T (*)(void *, void*, void*, int16_t))(Il2CppBase() + 0x8E89C4))(0, clazz, fieldID, val);
		}
		template <typename T = void> static T SetStaticByteField(void* clazz, void* fieldID, unsigned char val) {
			return ((T (*)(void *, void*, void*, unsigned char))(Il2CppBase() + 0x8E8A18))(0, clazz, fieldID, val);
		}
		template <typename T = void> static T SetStaticBooleanField(void* clazz, void* fieldID, bool val) {
			return ((T (*)(void *, void*, void*, bool))(Il2CppBase() + 0x8E8A6C))(0, clazz, fieldID, val);
		}
		template <typename T = void> static T SetStaticIntField(void* clazz, void* fieldID, int32_t val) {
			return ((T (*)(void *, void*, void*, int32_t))(Il2CppBase() + 0x8E8AC0))(0, clazz, fieldID, val);
		}
		template <typename T = void*> static T GetStaticObjectField(void* clazz, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E8B14))(0, clazz, fieldID);
		}
		template <typename T = Il2CppString*> static T GetStaticStringField(void* clazz, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E8B64))(0, clazz, fieldID);
		}
		template <typename T = char> static T GetStaticCharField(void* clazz, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E8BB4))(0, clazz, fieldID);
		}
		template <typename T = double> static T GetStaticDoubleField(void* clazz, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E8C04))(0, clazz, fieldID);
		}
		template <typename T = float> static T GetStaticFloatField(void* clazz, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E8C5C))(0, clazz, fieldID);
		}
		template <typename T = int64_t> static T GetStaticLongField(void* clazz, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E8CB8))(0, clazz, fieldID);
		}
		template <typename T = int16_t> static T GetStaticShortField(void* clazz, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E8D1C))(0, clazz, fieldID);
		}
		template <typename T = unsigned char> static T GetStaticByteField(void* clazz, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E8D6C))(0, clazz, fieldID);
		}
		template <typename T = bool> static T GetStaticBooleanField(void* clazz, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E8DBC))(0, clazz, fieldID);
		}
		template <typename T = int32_t> static T GetStaticIntField(void* clazz, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E8E0C))(0, clazz, fieldID);
		}
		template <typename T = void> static T CallStaticVoidMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E1958))(0, clazz, methodID, args);
		}
		template <typename T = void*> static T CallStaticObjectMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E8E5C))(0, clazz, methodID, args);
		}
		template <typename T = Il2CppString*> static T CallStaticStringMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E8EB4))(0, clazz, methodID, args);
		}
		template <typename T = char> static T CallStaticCharMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E8F0C))(0, clazz, methodID, args);
		}
		template <typename T = double> static T CallStaticDoubleMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E8F64))(0, clazz, methodID, args);
		}
		template <typename T = float> static T CallStaticFloatMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E8FC4))(0, clazz, methodID, args);
		}
		template <typename T = int64_t> static T CallStaticLongMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E9028))(0, clazz, methodID, args);
		}
		template <typename T = int16_t> static T CallStaticShortMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E9094))(0, clazz, methodID, args);
		}
		template <typename T = unsigned char> static T CallStaticByteMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E90EC))(0, clazz, methodID, args);
		}
		template <typename T = bool> static T CallStaticBooleanMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E9144))(0, clazz, methodID, args);
		}
		template <typename T = int32_t> static T CallStaticIntMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E919C))(0, clazz, methodID, args);
		}
		template <typename T = void> static T SetObjectField(void* obj, void* fieldID, void* val) {
			return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x8E91F4))(0, obj, fieldID, val);
		}
		template <typename T = void> static T SetStringField(void* obj, void* fieldID, Il2CppString* val) {
			return ((T (*)(void *, void*, void*, Il2CppString*))(Il2CppBase() + 0x8E9248))(0, obj, fieldID, val);
		}
		template <typename T = void> static T SetCharField(void* obj, void* fieldID, char val) {
			return ((T (*)(void *, void*, void*, char))(Il2CppBase() + 0x8E929C))(0, obj, fieldID, val);
		}
		template <typename T = void> static T SetDoubleField(void* obj, void* fieldID, double val) {
			return ((T (*)(void *, void*, void*, double))(Il2CppBase() + 0x8E92F0))(0, obj, fieldID, val);
		}
		template <typename T = void> static T SetFloatField(void* obj, void* fieldID, float val) {
			return ((T (*)(void *, void*, void*, float))(Il2CppBase() + 0x8E934C))(0, obj, fieldID, val);
		}
		template <typename T = void> static T SetLongField(void* obj, void* fieldID, int64_t val) {
			return ((T (*)(void *, void*, void*, int64_t))(Il2CppBase() + 0x8E93A0))(0, obj, fieldID, val);
		}
		template <typename T = void> static T SetShortField(void* obj, void* fieldID, int16_t val) {
			return ((T (*)(void *, void*, void*, int16_t))(Il2CppBase() + 0x8E9400))(0, obj, fieldID, val);
		}
		template <typename T = void> static T SetByteField(void* obj, void* fieldID, unsigned char val) {
			return ((T (*)(void *, void*, void*, unsigned char))(Il2CppBase() + 0x8E9454))(0, obj, fieldID, val);
		}
		template <typename T = void> static T SetBooleanField(void* obj, void* fieldID, bool val) {
			return ((T (*)(void *, void*, void*, bool))(Il2CppBase() + 0x8E94A8))(0, obj, fieldID, val);
		}
		template <typename T = void> static T SetIntField(void* obj, void* fieldID, int32_t val) {
			return ((T (*)(void *, void*, void*, int32_t))(Il2CppBase() + 0x8E94FC))(0, obj, fieldID, val);
		}
		template <typename T = void*> static T GetObjectField(void* obj, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E9550))(0, obj, fieldID);
		}
		template <typename T = Il2CppString*> static T GetStringField(void* obj, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E95A0))(0, obj, fieldID);
		}
		template <typename T = char> static T GetCharField(void* obj, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E95F0))(0, obj, fieldID);
		}
		template <typename T = double> static T GetDoubleField(void* obj, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E9640))(0, obj, fieldID);
		}
		template <typename T = float> static T GetFloatField(void* obj, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E9698))(0, obj, fieldID);
		}
		template <typename T = int64_t> static T GetLongField(void* obj, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E96F4))(0, obj, fieldID);
		}
		template <typename T = int16_t> static T GetShortField(void* obj, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E9758))(0, obj, fieldID);
		}
		template <typename T = unsigned char> static T GetByteField(void* obj, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E97A8))(0, obj, fieldID);
		}
		template <typename T = bool> static T GetBooleanField(void* obj, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E97F8))(0, obj, fieldID);
		}
		template <typename T = int32_t> static T GetIntField(void* obj, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E9848))(0, obj, fieldID);
		}
		template <typename T = void> static T CallVoidMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E1904))(0, obj, methodID, args);
		}
		template <typename T = void*> static T CallObjectMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E9898))(0, obj, methodID, args);
		}
		template <typename T = Il2CppString*> static T CallStringMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E98F0))(0, obj, methodID, args);
		}
		template <typename T = char> static T CallCharMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E9948))(0, obj, methodID, args);
		}
		template <typename T = double> static T CallDoubleMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E99A0))(0, obj, methodID, args);
		}
		template <typename T = float> static T CallFloatMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E9A00))(0, obj, methodID, args);
		}
		template <typename T = int64_t> static T CallLongMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E9A64))(0, obj, methodID, args);
		}
		template <typename T = int16_t> static T CallShortMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E9AD0))(0, obj, methodID, args);
		}
		template <typename T = unsigned char> static T CallByteMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E9B28))(0, obj, methodID, args);
		}
		template <typename T = bool> static T CallBooleanMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E9B80))(0, obj, methodID, args);
		}
		template <typename T = int32_t> static T CallIntMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E9BD8))(0, obj, methodID, args);
		}
		template <typename T = Il2CppArray<void*>*> static T FromCharArray(void* array) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E9C30))(0, array);
		}
		template <typename T = Il2CppArray<void*>*> static T FromDoubleArray(void* array) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E9C80))(0, array);
		}
		template <typename T = Il2CppArray<void*>*> static T FromFloatArray(void* array) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E9CD0))(0, array);
		}
		template <typename T = Il2CppArray<void*>*> static T FromLongArray(void* array) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E9D20))(0, array);
		}
		template <typename T = Il2CppArray<void*>*> static T FromShortArray(void* array) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E9D70))(0, array);
		}
		template <typename T = Il2CppArray<void*>*> static T FromByteArray(void* array) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E9DC0))(0, array);
		}
		template <typename T = Il2CppArray<void*>*> static T FromBooleanArray(void* array) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E9E10))(0, array);
		}
		template <typename T = Il2CppArray<void*>*> static T FromIntArray(void* array) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E9E60))(0, array);
		}
		template <typename T = void*> static T ToObjectArray(Il2CppArray<void*>* array, void* type) {
			return ((T (*)(void *, Il2CppArray<void*>*, void*))(Il2CppBase() + 0x8DBF58))(0, array, type);
		}
		template <typename T = void*> static T ToCharArray(Il2CppArray<void*>* array) {
			return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x8DBD68))(0, array);
		}
		template <typename T = void*> static T ToDoubleArray(Il2CppArray<void*>* array) {
			return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x8DBD18))(0, array);
		}
		template <typename T = void*> static T ToFloatArray(Il2CppArray<void*>* array) {
			return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x8DBCC8))(0, array);
		}
		template <typename T = void*> static T ToLongArray(Il2CppArray<void*>* array) {
			return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x8DBC78))(0, array);
		}
		template <typename T = void*> static T ToShortArray(Il2CppArray<void*>* array) {
			return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x8DBC28))(0, array);
		}
		template <typename T = void*> static T ToByteArray(Il2CppArray<void*>* array) {
			return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x8DBBD8))(0, array);
		}
		template <typename T = void*> static T ToBooleanArray(Il2CppArray<void*>* array) {
			return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x8DBB88))(0, array);
		}
		template <typename T = void*> static T ToIntArray(Il2CppArray<void*>* array) {
			return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x8DBB38))(0, array);
		}
		template <typename T = void*> static T GetObjectArrayElement(void* array, int32_t index) {
			return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x8D7A9C))(0, array, index);
		}
		template <typename T = int32_t> static T GetArrayLength(void* array) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8D7A4C))(0, array);
		}
	};
}
