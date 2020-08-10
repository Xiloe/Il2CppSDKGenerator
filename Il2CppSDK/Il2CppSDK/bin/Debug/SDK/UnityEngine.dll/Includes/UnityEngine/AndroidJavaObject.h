#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace UnityEngine { 
	class AndroidJavaObject
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0xD77D80);
		}
		// Fields
		template <typename T = bool> static T& enableDebugPrints() {
			return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
		}
		template <typename T = bool> T& m_disposed() {
			return *(T*)((uintptr_t)this + 0x8);
		}
		template <typename T = void*> T& m_jobject() {
			return *(T*)((uintptr_t)this + 0xC);
		}
		template <typename T = void*> T& m_jclass() {
			return *(T*)((uintptr_t)this + 0x10);
		}
		template <typename T = void*> static T& s_JavaLangClass() {
			return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
		}
		// Methods
		template <typename T = void> T _ctor(Il2CppString* className, Il2CppArray<void*>* args) {
			return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppArray<void*>*))(Il2CppBase() + 0x8DB7D0))(this, className, args);
		}
		template <typename T = void> T _ctor_1(void* jobject) {
			return ((T (*)(AndroidJavaObject*, void*))(Il2CppBase() + 0x8D7AEC))(this, jobject);
		}
		template <typename T = void> T _ctor_2() {
			return ((T (*)(AndroidJavaObject*))(Il2CppBase() + 0x8E03F4))(this);
		}
		template <typename T = void> static T _cctor() {
			return ((T (*)(void *))(Il2CppBase() + 0x8E0D60))(0);
		}
		template <typename T = void> T Dispose() {
			return ((T (*)(AndroidJavaObject*))(Il2CppBase() + 0x8E0D64))(this);
		}
		template <typename T = void> T Call(Il2CppString* methodName, Il2CppArray<void*>* args) {
			return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E0DB8))(this, methodName, args);
		}
		template <typename T = void> T CallStatic(Il2CppString* methodName, Il2CppArray<void*>* args) {
			return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E0EFC))(this, methodName, args);
		}
		template <typename T = void*> T Get(Il2CppString* fieldName) {
			return ((T (*)(AndroidJavaObject*, Il2CppString*))(Il2CppBase() + 0x94F2A0))(this, fieldName);
		}
		template <typename T = void> T Set(Il2CppString* fieldName, void* val) {
			return ((T (*)(AndroidJavaObject*, Il2CppString*, void*))(Il2CppBase() + 0xA074C4))(this, fieldName, val);
		}
		template <typename T = void*> T GetStatic(Il2CppString* fieldName) {
			return ((T (*)(AndroidJavaObject*, Il2CppString*))(Il2CppBase() + 0x94F300))(this, fieldName);
		}
		template <typename T = void> T SetStatic(Il2CppString* fieldName, void* val) {
			return ((T (*)(AndroidJavaObject*, Il2CppString*, void*))(Il2CppBase() + 0xA074F4))(this, fieldName, val);
		}
		template <typename T = void*> T GetRawObject() {
			return ((T (*)(AndroidJavaObject*))(Il2CppBase() + 0x8D7CAC))(this);
		}
		template <typename T = void*> T GetRawClass() {
			return ((T (*)(AndroidJavaObject*))(Il2CppBase() + 0x8D7414))(this);
		}
		template <typename T = void*> T Call_1(Il2CppString* methodName, Il2CppArray<void*>* args) {
			return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppArray<void*>*))(Il2CppBase() + 0x95B0A8))(this, methodName, args);
		}
		template <typename T = void*> T CallStatic_1(Il2CppString* methodName, Il2CppArray<void*>* args) {
			return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppArray<void*>*))(Il2CppBase() + 0x95B168))(this, methodName, args);
		}
		template <typename T = void> T DebugPrint(Il2CppString* msg) {
			return ((T (*)(AndroidJavaObject*, Il2CppString*))(Il2CppBase() + 0x8E06B4))(this, msg);
		}
		template <typename T = void> T DebugPrint_1(Il2CppString* call, Il2CppString* methodName, Il2CppString* signature, Il2CppArray<void*>* args) {
			return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E1198))(this, call, methodName, signature, args);
		}
		template <typename T = void> T _AndroidJavaObject(Il2CppString* className, Il2CppArray<void*>* args) {
			return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E0A18))(this, className, args);
		}
		template <typename T = void> T Finalize() {
			return ((T (*)(AndroidJavaObject*))(Il2CppBase() + 0x8E1760))(this);
		}
		template <typename T = void> T Dispose_1(bool disposing) {
			return ((T (*)(AndroidJavaObject*, bool))(Il2CppBase() + 0x8E17F0))(this, disposing);
		}
		template <typename T = void> T _Dispose() {
			return ((T (*)(AndroidJavaObject*))(Il2CppBase() + 0x8E0D68))(this);
		}
		template <typename T = void> T _Call(Il2CppString* methodName, Il2CppArray<void*>* args) {
			return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E0DBC))(this, methodName, args);
		}
		template <typename T = void*> T _Call_1(Il2CppString* methodName, Il2CppArray<void*>* args) {
			return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppArray<void*>*))(Il2CppBase() + 0x955890))(this, methodName, args);
		}
		template <typename T = void*> T _Get(Il2CppString* fieldName) {
			return ((T (*)(AndroidJavaObject*, Il2CppString*))(Il2CppBase() + 0x94CFA8))(this, fieldName);
		}
		template <typename T = void> T _Set(Il2CppString* fieldName, void* val) {
			return ((T (*)(AndroidJavaObject*, Il2CppString*, void*))(Il2CppBase() + 0xA05D54))(this, fieldName, val);
		}
		template <typename T = void> T _CallStatic(Il2CppString* methodName, Il2CppArray<void*>* args) {
			return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppArray<void*>*))(Il2CppBase() + 0x8E0F00))(this, methodName, args);
		}
		template <typename T = void*> T _CallStatic_1(Il2CppString* methodName, Il2CppArray<void*>* args) {
			return ((T (*)(AndroidJavaObject*, Il2CppString*, Il2CppArray<void*>*))(Il2CppBase() + 0x95926C))(this, methodName, args);
		}
		template <typename T = void*> T _GetStatic(Il2CppString* fieldName) {
			return ((T (*)(AndroidJavaObject*, Il2CppString*))(Il2CppBase() + 0x94E6D8))(this, fieldName);
		}
		template <typename T = void> T _SetStatic(Il2CppString* fieldName, void* val) {
			return ((T (*)(AndroidJavaObject*, Il2CppString*, void*))(Il2CppBase() + 0xA0690C))(this, fieldName, val);
		}
		template <typename T = void*> static T AndroidJavaObjectDeleteLocalRef(void* jobject) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8DB800))(0, jobject);
		}
		template <typename T = void*> static T AndroidJavaClassDeleteLocalRef(void* jclass) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8E19AC))(0, jclass);
		}
		template <typename T = void*> T _GetRawObject() {
			return ((T (*)(AndroidJavaObject*))(Il2CppBase() + 0x8E1040))(this);
		}
		template <typename T = void*> T _GetRawClass() {
			return ((T (*)(AndroidJavaObject*))(Il2CppBase() + 0x8E1048))(this);
		}
		template <typename T = void*> static T FindClass(Il2CppString* name) {
			return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x8E07B0))(0, name);
		}
		template <typename T = void*> static T get_JavaLangClass() {
			return ((T (*)(void *))(Il2CppBase() + 0x8E1A80))(0);
		}
	};
}
