#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace UnityEngine { 
	class AndroidReflection
	{
	public: 
		static Il2CppClass *StaticClass() {
			return *(Il2CppClass **)(Il2CppBase() + 0xD77D74);
		}
		// Fields
		template <typename T = void*> static T& s_ReflectionHelperClass() {
			return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
		}
		template <typename T = void*> static T& s_ReflectionHelperGetConstructorID() {
			return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
		}
		template <typename T = void*> static T& s_ReflectionHelperGetMethodID() {
			return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
		}
		template <typename T = void*> static T& s_ReflectionHelperGetFieldID() {
			return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
		}
		template <typename T = void*> static T& s_ReflectionHelperNewProxyInstance() {
			return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
		}
		// Methods
		template <typename T = void> static T _cctor() {
			return ((T (*)(void *))(Il2CppBase() + 0x8E9EB0))(0);
		}
		template <typename T = bool> static T IsPrimitive(void* t) {
			return ((T (*)(void *, void*))(Il2CppBase() + 0x8D8894))(0, t);
		}
		template <typename T = bool> static T IsAssignableFrom(void* t, void* from) {
			return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x8DE288))(0, t, from);
		}
		template <typename T = void*> static T GetStaticMethodID(Il2CppString* clazz, Il2CppString* methodName, Il2CppString* signature) {
			return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x8EA024))(0, clazz, methodName, signature);
		}
		template <typename T = void*> static T GetConstructorMember(void* jclass, Il2CppString* signature) {
			return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x8DC3BC))(0, jclass, signature);
		}
		template <typename T = void*> static T GetMethodMember(void* jclass, Il2CppString* methodName, Il2CppString* signature, bool isStatic) {
			return ((T (*)(void *, void*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x8DC88C))(0, jclass, methodName, signature, isStatic);
		}
		template <typename T = void*> static T GetFieldMember(void* jclass, Il2CppString* fieldName, Il2CppString* signature, bool isStatic) {
			return ((T (*)(void *, void*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x8DCEE8))(0, jclass, fieldName, signature, isStatic);
		}
		template <typename T = void*> static T NewProxyInstance(int32_t delegateHandle, void* interfaze) {
			return ((T (*)(void *, int32_t, void*))(Il2CppBase() + 0x8D741C))(0, delegateHandle, interfaze);
		}
	};
}
