#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace UnityEngine { 
	class AndroidJNI
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0x0);
		}
		// Methods
		template <typename T = void> T _ctor() {
			return ((T (*)(AndroidJNI*))(Il2CppBase() + 0x8E29B0))(this);
		}
		template <typename T = int32_t> static T AttachCurrentThread() {
			return ((T (*)(void *))(Il2CppBase() + 0x8E29B8))(0);
		}
		template <typename T = int32_t> static T DetachCurrentThread() {
			return ((T (*)(void *))(Il2CppBase() + 0x8E2A48))(0);
		}
		template <typename T = int32_t> static T GetVersion() {
			return ((T (*)(void *))(Il2CppBase() + 0x8E2AD8))(0);
		}
		template <typename T = void*> static T FindClass(Il2CppString* name) {
			return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x8E2B68))(0, name);
		}
		template <typename T = void*> static T FromReflectedMethod(void* refMethod) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E2C00))(0, refMethod);
		}
		template <typename T = void*> static T FromReflectedField(void* refField) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E2C98))(0, refField);
		}
		template <typename T = void*> static T ToReflectedMethod(void* clazz, void* methodID, bool isStatic) {
			return ((T (*)(void *, void*, void*, bool))(Il2CppBase() + 0x8E2D30))(0, clazz, methodID, isStatic);
		}
		template <typename T = void*> static T ToReflectedField(void* clazz, void* fieldID, bool isStatic) {
			return ((T (*)(void *, void*, void*, bool))(Il2CppBase() + 0x8E2DD8))(0, clazz, fieldID, isStatic);
		}
		template <typename T = void*> static T GetSuperclass(void* clazz) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E2E80))(0, clazz);
		}
		template <typename T = bool> static T IsAssignableFrom(void* clazz1, void* clazz2) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E2F18))(0, clazz1, clazz2);
		}
		template <typename T = int32_t> static T Throw(void* obj) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E2FB8))(0, obj);
		}
		template <typename T = int32_t> static T ThrowNew(void* clazz, Il2CppString* message) {
			return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x8E3050))(0, clazz, message);
		}
		template <typename T = void*> static T ExceptionOccurred() {
			return ((T (*)(void *))(Il2CppBase() + 0x8E30F0))(0);
		}
		template <typename T = void> static T ExceptionDescribe() {
			return ((T (*)(void *))(Il2CppBase() + 0x8E3180))(0);
		}
		template <typename T = void> static T ExceptionClear() {
			return ((T (*)(void *))(Il2CppBase() + 0x8E3210))(0);
		}
		template <typename T = void> static T FatalError(Il2CppString* message) {
			return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x8E32A0))(0, message);
		}
		template <typename T = int32_t> static T PushLocalFrame(int32_t capacity) {
			return ((T (*)(void *, int32_t))(Il2CppBase() + 0x8E3338))(0, capacity);
		}
		template <typename T = void*> static T PopLocalFrame(void* result) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E33D0))(0, result);
		}
		template <typename T = void*> static T NewGlobalRef(void* obj) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E061C))(0, obj);
		}
		template <typename T = void> static T DeleteGlobalRef(void* obj) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E3468))(0, obj);
		}
		template <typename T = void*> static T NewLocalRef(void* obj) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8D7CB4))(0, obj);
		}
		template <typename T = void> static T DeleteLocalRef(void* obj) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E3500))(0, obj);
		}
		template <typename T = bool> static T IsSameObject(void* obj1, void* obj2) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E3598))(0, obj1, obj2);
		}
		template <typename T = int32_t> static T EnsureLocalCapacity(int32_t capacity) {
			return ((T (*)(void *, int32_t))(Il2CppBase() + 0x8E3638))(0, capacity);
		}
		template <typename T = void*> static T AllocObject(void* clazz) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E36D0))(0, clazz);
		}
		template <typename T = void*> static T NewObject(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E3768))(0, clazz, methodID, args);
		}
		template <typename T = void*> static T GetObjectClass(void* obj) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E3810))(0, obj);
		}
		template <typename T = bool> static T IsInstanceOf(void* obj, void* clazz) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E38A8))(0, obj, clazz);
		}
		template <typename T = void*> static T GetMethodID(void* clazz, Il2CppString* name, Il2CppString* sig) {
			return ((T (*)(void *, void*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x8E3948))(0, clazz, name, sig);
		}
		template <typename T = void*> static T GetFieldID(void* clazz, Il2CppString* name, Il2CppString* sig) {
			return ((T (*)(void *, void*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x8E39F0))(0, clazz, name, sig);
		}
		template <typename T = void*> static T GetStaticMethodID(void* clazz, Il2CppString* name, Il2CppString* sig) {
			return ((T (*)(void *, void*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x8E3A98))(0, clazz, name, sig);
		}
		template <typename T = void*> static T GetStaticFieldID(void* clazz, Il2CppString* name, Il2CppString* sig) {
			return ((T (*)(void *, void*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x8E3B40))(0, clazz, name, sig);
		}
		template <typename T = void*> static T NewStringUTF(Il2CppString* bytes) {
			return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x8E3BE8))(0, bytes);
		}
		template <typename T = int32_t> static T GetStringUTFLength(void* str) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E3C80))(0, str);
		}
		template <typename T = Il2CppString*> static T GetStringUTFChars(void* str) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8D7C14))(0, str);
		}
		template <typename T = Il2CppString*> static T CallStringMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E3D18))(0, obj, methodID, args);
		}
		template <typename T = void*> static T CallObjectMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E3DC0))(0, obj, methodID, args);
		}
		template <typename T = int32_t> static T CallIntMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E3E68))(0, obj, methodID, args);
		}
		template <typename T = bool> static T CallBooleanMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E3F10))(0, obj, methodID, args);
		}
		template <typename T = int16_t> static T CallShortMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E3FB8))(0, obj, methodID, args);
		}
		template <typename T = unsigned char> static T CallByteMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E4060))(0, obj, methodID, args);
		}
		template <typename T = char> static T CallCharMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E4108))(0, obj, methodID, args);
		}
		template <typename T = float> static T CallFloatMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E41B0))(0, obj, methodID, args);
		}
		template <typename T = double> static T CallDoubleMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E4258))(0, obj, methodID, args);
		}
		template <typename T = int64_t> static T CallLongMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E4300))(0, obj, methodID, args);
		}
		template <typename T = void> static T CallVoidMethod(void* obj, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E43A8))(0, obj, methodID, args);
		}
		template <typename T = Il2CppString*> static T GetStringField(void* obj, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E4450))(0, obj, fieldID);
		}
		template <typename T = void*> static T GetObjectField(void* obj, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E44F0))(0, obj, fieldID);
		}
		template <typename T = bool> static T GetBooleanField(void* obj, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E4590))(0, obj, fieldID);
		}
		template <typename T = unsigned char> static T GetByteField(void* obj, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E4630))(0, obj, fieldID);
		}
		template <typename T = char> static T GetCharField(void* obj, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E46D0))(0, obj, fieldID);
		}
		template <typename T = int16_t> static T GetShortField(void* obj, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E4770))(0, obj, fieldID);
		}
		template <typename T = int32_t> static T GetIntField(void* obj, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E4810))(0, obj, fieldID);
		}
		template <typename T = int64_t> static T GetLongField(void* obj, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E48B0))(0, obj, fieldID);
		}
		template <typename T = float> static T GetFloatField(void* obj, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E4950))(0, obj, fieldID);
		}
		template <typename T = double> static T GetDoubleField(void* obj, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E49F0))(0, obj, fieldID);
		}
		template <typename T = void> static T SetStringField(void* obj, void* fieldID, Il2CppString* val) {
			return ((T (*)(void *, void*, void*, Il2CppString*))(Il2CppBase() + 0x8E4A90))(0, obj, fieldID, val);
		}
		template <typename T = void> static T SetObjectField(void* obj, void* fieldID, void* val) {
			return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x8E4B38))(0, obj, fieldID, val);
		}
		template <typename T = void> static T SetBooleanField(void* obj, void* fieldID, bool val) {
			return ((T (*)(void *, void*, void*, bool))(Il2CppBase() + 0x8E4BE0))(0, obj, fieldID, val);
		}
		template <typename T = void> static T SetByteField(void* obj, void* fieldID, unsigned char val) {
			return ((T (*)(void *, void*, void*, unsigned char))(Il2CppBase() + 0x8E4C88))(0, obj, fieldID, val);
		}
		template <typename T = void> static T SetCharField(void* obj, void* fieldID, char val) {
			return ((T (*)(void *, void*, void*, char))(Il2CppBase() + 0x8E4D30))(0, obj, fieldID, val);
		}
		template <typename T = void> static T SetShortField(void* obj, void* fieldID, int16_t val) {
			return ((T (*)(void *, void*, void*, int16_t))(Il2CppBase() + 0x8E4DD8))(0, obj, fieldID, val);
		}
		template <typename T = void> static T SetIntField(void* obj, void* fieldID, int32_t val) {
			return ((T (*)(void *, void*, void*, int32_t))(Il2CppBase() + 0x8E4E80))(0, obj, fieldID, val);
		}
		template <typename T = void> static T SetLongField(void* obj, void* fieldID, int64_t val) {
			return ((T (*)(void *, void*, void*, int64_t))(Il2CppBase() + 0x8E4F28))(0, obj, fieldID, val);
		}
		template <typename T = void> static T SetFloatField(void* obj, void* fieldID, float val) {
			return ((T (*)(void *, void*, void*, float))(Il2CppBase() + 0x8E4FD8))(0, obj, fieldID, val);
		}
		template <typename T = void> static T SetDoubleField(void* obj, void* fieldID, double val) {
			return ((T (*)(void *, void*, void*, double))(Il2CppBase() + 0x8E5080))(0, obj, fieldID, val);
		}
		template <typename T = Il2CppString*> static T CallStaticStringMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E5130))(0, clazz, methodID, args);
		}
		template <typename T = void*> static T CallStaticObjectMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E51D8))(0, clazz, methodID, args);
		}
		template <typename T = int32_t> static T CallStaticIntMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E5280))(0, clazz, methodID, args);
		}
		template <typename T = bool> static T CallStaticBooleanMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E5328))(0, clazz, methodID, args);
		}
		template <typename T = int16_t> static T CallStaticShortMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E53D0))(0, clazz, methodID, args);
		}
		template <typename T = unsigned char> static T CallStaticByteMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E5478))(0, clazz, methodID, args);
		}
		template <typename T = char> static T CallStaticCharMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E5520))(0, clazz, methodID, args);
		}
		template <typename T = float> static T CallStaticFloatMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E55C8))(0, clazz, methodID, args);
		}
		template <typename T = double> static T CallStaticDoubleMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E5670))(0, clazz, methodID, args);
		}
		template <typename T = int64_t> static T CallStaticLongMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E5718))(0, clazz, methodID, args);
		}
		template <typename T = void> static T CallStaticVoidMethod(void* clazz, void* methodID, Il2CppArray<void*>* args) {
			return ((T (*)(void *, void*, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E57C0))(0, clazz, methodID, args);
		}
		template <typename T = Il2CppString*> static T GetStaticStringField(void* clazz, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E5868))(0, clazz, fieldID);
		}
		template <typename T = void*> static T GetStaticObjectField(void* clazz, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E5908))(0, clazz, fieldID);
		}
		template <typename T = bool> static T GetStaticBooleanField(void* clazz, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E59A8))(0, clazz, fieldID);
		}
		template <typename T = unsigned char> static T GetStaticByteField(void* clazz, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E5A48))(0, clazz, fieldID);
		}
		template <typename T = char> static T GetStaticCharField(void* clazz, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E5AE8))(0, clazz, fieldID);
		}
		template <typename T = int16_t> static T GetStaticShortField(void* clazz, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E5B88))(0, clazz, fieldID);
		}
		template <typename T = int32_t> static T GetStaticIntField(void* clazz, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E5C28))(0, clazz, fieldID);
		}
		template <typename T = int64_t> static T GetStaticLongField(void* clazz, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E5CC8))(0, clazz, fieldID);
		}
		template <typename T = float> static T GetStaticFloatField(void* clazz, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E5D68))(0, clazz, fieldID);
		}
		template <typename T = double> static T GetStaticDoubleField(void* clazz, void* fieldID) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8E5E08))(0, clazz, fieldID);
		}
		template <typename T = void> static T SetStaticStringField(void* clazz, void* fieldID, Il2CppString* val) {
			return ((T (*)(void *, void*, void*, Il2CppString*))(Il2CppBase() + 0x8E5EA8))(0, clazz, fieldID, val);
		}
		template <typename T = void> static T SetStaticObjectField(void* clazz, void* fieldID, void* val) {
			return ((T (*)(void *, void*, void*, void*))(Il2CppBase() + 0x8E5F50))(0, clazz, fieldID, val);
		}
		template <typename T = void> static T SetStaticBooleanField(void* clazz, void* fieldID, bool val) {
			return ((T (*)(void *, void*, void*, bool))(Il2CppBase() + 0x8E5FF8))(0, clazz, fieldID, val);
		}
		template <typename T = void> static T SetStaticByteField(void* clazz, void* fieldID, unsigned char val) {
			return ((T (*)(void *, void*, void*, unsigned char))(Il2CppBase() + 0x8E60A0))(0, clazz, fieldID, val);
		}
		template <typename T = void> static T SetStaticCharField(void* clazz, void* fieldID, char val) {
			return ((T (*)(void *, void*, void*, char))(Il2CppBase() + 0x8E6148))(0, clazz, fieldID, val);
		}
		template <typename T = void> static T SetStaticShortField(void* clazz, void* fieldID, int16_t val) {
			return ((T (*)(void *, void*, void*, int16_t))(Il2CppBase() + 0x8E61F0))(0, clazz, fieldID, val);
		}
		template <typename T = void> static T SetStaticIntField(void* clazz, void* fieldID, int32_t val) {
			return ((T (*)(void *, void*, void*, int32_t))(Il2CppBase() + 0x8E6298))(0, clazz, fieldID, val);
		}
		template <typename T = void> static T SetStaticLongField(void* clazz, void* fieldID, int64_t val) {
			return ((T (*)(void *, void*, void*, int64_t))(Il2CppBase() + 0x8E6340))(0, clazz, fieldID, val);
		}
		template <typename T = void> static T SetStaticFloatField(void* clazz, void* fieldID, float val) {
			return ((T (*)(void *, void*, void*, float))(Il2CppBase() + 0x8E63F0))(0, clazz, fieldID, val);
		}
		template <typename T = void> static T SetStaticDoubleField(void* clazz, void* fieldID, double val) {
			return ((T (*)(void *, void*, void*, double))(Il2CppBase() + 0x8E6498))(0, clazz, fieldID, val);
		}
		template <typename T = void*> static T ToBooleanArray(Il2CppArray<void*>* array) {
			return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x8E6548))(0, array);
		}
		template <typename T = void*> static T ToByteArray(Il2CppArray<void*>* array) {
			return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x8E65E0))(0, array);
		}
		template <typename T = void*> static T ToCharArray(Il2CppArray<void*>* array) {
			return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x8E6678))(0, array);
		}
		template <typename T = void*> static T ToShortArray(Il2CppArray<void*>* array) {
			return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x8E6710))(0, array);
		}
		template <typename T = void*> static T ToIntArray(Il2CppArray<void*>* array) {
			return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x8E67A8))(0, array);
		}
		template <typename T = void*> static T ToLongArray(Il2CppArray<void*>* array) {
			return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x8E6840))(0, array);
		}
		template <typename T = void*> static T ToFloatArray(Il2CppArray<void*>* array) {
			return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x8E68D8))(0, array);
		}
		template <typename T = void*> static T ToDoubleArray(Il2CppArray<void*>* array) {
			return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x8E6970))(0, array);
		}
		template <typename T = void*> static T ToObjectArray(Il2CppArray<void*>* array, void* arrayClass) {
			return ((T (*)(void *, Il2CppArray<void*>*, void*))(Il2CppBase() + 0x8E6A08))(0, array, arrayClass);
		}
		template <typename T = void*> static T ToObjectArray_1(Il2CppArray<void*>* array) {
			return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x8E6AA8))(0, array);
		}
		template <typename T = Il2CppArray<void*>*> static T FromBooleanArray(void* array) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E6B34))(0, array);
		}
		template <typename T = Il2CppArray<void*>*> static T FromByteArray(void* array) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E6BCC))(0, array);
		}
		template <typename T = Il2CppArray<void*>*> static T FromCharArray(void* array) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E6C64))(0, array);
		}
		template <typename T = Il2CppArray<void*>*> static T FromShortArray(void* array) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E6CFC))(0, array);
		}
		template <typename T = Il2CppArray<void*>*> static T FromIntArray(void* array) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E6D94))(0, array);
		}
		template <typename T = Il2CppArray<void*>*> static T FromLongArray(void* array) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E6E2C))(0, array);
		}
		template <typename T = Il2CppArray<void*>*> static T FromFloatArray(void* array) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E6EC4))(0, array);
		}
		template <typename T = Il2CppArray<void*>*> static T FromDoubleArray(void* array) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E6F5C))(0, array);
		}
		template <typename T = Il2CppArray<void*>*> static T FromObjectArray(void* array) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E6FF4))(0, array);
		}
		template <typename T = int32_t> static T GetArrayLength(void* array) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E708C))(0, array);
		}
		template <typename T = void*> static T NewBooleanArray(int32_t size) {
			return ((T (*)(void *, int32_t))(Il2CppBase() + 0x8E7124))(0, size);
		}
		template <typename T = void*> static T NewByteArray(int32_t size) {
			return ((T (*)(void *, int32_t))(Il2CppBase() + 0x8E71BC))(0, size);
		}
		template <typename T = void*> static T NewCharArray(int32_t size) {
			return ((T (*)(void *, int32_t))(Il2CppBase() + 0x8E7254))(0, size);
		}
		template <typename T = void*> static T NewShortArray(int32_t size) {
			return ((T (*)(void *, int32_t))(Il2CppBase() + 0x8E72EC))(0, size);
		}
		template <typename T = void*> static T NewIntArray(int32_t size) {
			return ((T (*)(void *, int32_t))(Il2CppBase() + 0x8E7384))(0, size);
		}
		template <typename T = void*> static T NewLongArray(int32_t size) {
			return ((T (*)(void *, int32_t))(Il2CppBase() + 0x8E741C))(0, size);
		}
		template <typename T = void*> static T NewFloatArray(int32_t size) {
			return ((T (*)(void *, int32_t))(Il2CppBase() + 0x8E74B4))(0, size);
		}
		template <typename T = void*> static T NewDoubleArray(int32_t size) {
			return ((T (*)(void *, int32_t))(Il2CppBase() + 0x8E754C))(0, size);
		}
		template <typename T = void*> static T NewObjectArray(int32_t size, void* clazz, void* obj) {
			return ((T (*)(void *, int32_t, void*, void*))(Il2CppBase() + 0x8DBE08))(0, size, clazz, obj);
		}
		template <typename T = bool> static T GetBooleanArrayElement(void* array, int32_t index) {
			return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x8E75E4))(0, array, index);
		}
		template <typename T = unsigned char> static T GetByteArrayElement(void* array, int32_t index) {
			return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x8E7684))(0, array, index);
		}
		template <typename T = char> static T GetCharArrayElement(void* array, int32_t index) {
			return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x8E7724))(0, array, index);
		}
		template <typename T = int16_t> static T GetShortArrayElement(void* array, int32_t index) {
			return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x8E77C4))(0, array, index);
		}
		template <typename T = int32_t> static T GetIntArrayElement(void* array, int32_t index) {
			return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x8E7864))(0, array, index);
		}
		template <typename T = int64_t> static T GetLongArrayElement(void* array, int32_t index) {
			return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x8E7904))(0, array, index);
		}
		template <typename T = float> static T GetFloatArrayElement(void* array, int32_t index) {
			return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x8E79A4))(0, array, index);
		}
		template <typename T = double> static T GetDoubleArrayElement(void* array, int32_t index) {
			return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x8E7A44))(0, array, index);
		}
		template <typename T = void*> static T GetObjectArrayElement(void* array, int32_t index) {
			return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x8E7AE4))(0, array, index);
		}
		template <typename T = void> static T SetBooleanArrayElement(void* array, int32_t index, unsigned char val) {
			return ((T (*)(void *, void*, int32_t, unsigned char))(Il2CppBase() + 0x8E7B84))(0, array, index, val);
		}
		template <typename T = void> static T SetByteArrayElement(void* array, int32_t index, signed char val) {
			return ((T (*)(void *, void*, int32_t, signed char))(Il2CppBase() + 0x8E7C2C))(0, array, index, val);
		}
		template <typename T = void> static T SetCharArrayElement(void* array, int32_t index, char val) {
			return ((T (*)(void *, void*, int32_t, char))(Il2CppBase() + 0x8E7CD4))(0, array, index, val);
		}
		template <typename T = void> static T SetShortArrayElement(void* array, int32_t index, int16_t val) {
			return ((T (*)(void *, void*, int32_t, int16_t))(Il2CppBase() + 0x8E7D7C))(0, array, index, val);
		}
		template <typename T = void> static T SetIntArrayElement(void* array, int32_t index, int32_t val) {
			return ((T (*)(void *, void*, int32_t, int32_t))(Il2CppBase() + 0x8E7E24))(0, array, index, val);
		}
		template <typename T = void> static T SetLongArrayElement(void* array, int32_t index, int64_t val) {
			return ((T (*)(void *, void*, int32_t, int64_t))(Il2CppBase() + 0x8E7ECC))(0, array, index, val);
		}
		template <typename T = void> static T SetFloatArrayElement(void* array, int32_t index, float val) {
			return ((T (*)(void *, void*, int32_t, float))(Il2CppBase() + 0x8E7F7C))(0, array, index, val);
		}
		template <typename T = void> static T SetDoubleArrayElement(void* array, int32_t index, double val) {
			return ((T (*)(void *, void*, int32_t, double))(Il2CppBase() + 0x8E8024))(0, array, index, val);
		}
		template <typename T = void> static T SetObjectArrayElement(void* array, int32_t index, void* obj) {
			return ((T (*)(void *, void*, int32_t, void*))(Il2CppBase() + 0x8DBEB0))(0, array, index, obj);
		}
	};
}
