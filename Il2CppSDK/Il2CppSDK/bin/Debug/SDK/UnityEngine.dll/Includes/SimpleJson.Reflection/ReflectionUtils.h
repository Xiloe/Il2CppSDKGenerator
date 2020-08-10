#pragma once
#include <Il2Cpp/Il2Cpp.h>

namespace SimpleJson { 
	namespace Reflection { 
		class ReflectionUtils
		{
		public: 
			static Il2CppClass *StaticClass() {
				return *(Il2CppClass **)(Il2CppBase() + 0xD77D04);
			}
			// Fields
			template <typename T = Il2CppArray<void*>*> static T& EmptyObjects() {
				return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
			}
			// Methods
			template <typename T = void> static T _cctor() {
				return ((T (*)(void *))(Il2CppBase() + 0x8D33F8))(0);
			}
			template <typename T = void*> static T GetConstructors(void* type) {
				return ((T (*)(void *, void*))(Il2CppBase() + 0x8D349C))(0, type);
			}
			template <typename T = void*> static T GetConstructorInfo(void* type, Il2CppArray<void*>* argsType) {
				return ((T (*)(void *, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8D34C8))(0, type, argsType);
			}
			template <typename T = void*> static T GetProperties(void* type) {
				return ((T (*)(void *, void*))(Il2CppBase() + 0x8D1790))(0, type);
			}
			template <typename T = void*> static T GetFields(void* type) {
				return ((T (*)(void *, void*))(Il2CppBase() + 0x8D18E8))(0, type);
			}
			template <typename T = void*> static T GetGetterMethodInfo(void* propertyInfo) {
				return ((T (*)(void *, void*))(Il2CppBase() + 0x8D17EC))(0, propertyInfo);
			}
			template <typename T = void*> static T GetSetterMethodInfo(void* propertyInfo) {
				return ((T (*)(void *, void*))(Il2CppBase() + 0x8D2558))(0, propertyInfo);
			}
			template <typename T = void*> static T GetContructor(void* type, Il2CppArray<void*>* argsType) {
				return ((T (*)(void *, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8D0CA0))(0, type, argsType);
			}
			template <typename T = void*> static T GetConstructorByReflection(void* constructorInfo) {
				return ((T (*)(void *, void*))(Il2CppBase() + 0x8D3AA4))(0, constructorInfo);
			}
			template <typename T = void*> static T GetConstructorByReflection_1(void* type, Il2CppArray<void*>* argsType) {
				return ((T (*)(void *, void*, Il2CppArray<void*>*))(Il2CppBase() + 0x8D39B0))(0, type, argsType);
			}
			template <typename T = void*> static T GetGetMethod(void* propertyInfo) {
				return ((T (*)(void *, void*))(Il2CppBase() + 0x8D1848))(0, propertyInfo);
			}
			template <typename T = void*> static T GetGetMethod_1(void* fieldInfo) {
				return ((T (*)(void *, void*))(Il2CppBase() + 0x8D1944))(0, fieldInfo);
			}
			template <typename T = void*> static T GetGetMethodByReflection(void* propertyInfo) {
				return ((T (*)(void *, void*))(Il2CppBase() + 0x8D3BA4))(0, propertyInfo);
			}
			template <typename T = void*> static T GetGetMethodByReflection_1(void* fieldInfo) {
				return ((T (*)(void *, void*))(Il2CppBase() + 0x8D3CBC))(0, fieldInfo);
			}
			template <typename T = void*> static T GetSetMethod(void* propertyInfo) {
				return ((T (*)(void *, void*))(Il2CppBase() + 0x8D25B4))(0, propertyInfo);
			}
			template <typename T = void*> static T GetSetMethod_1(void* fieldInfo) {
				return ((T (*)(void *, void*))(Il2CppBase() + 0x8D2654))(0, fieldInfo);
			}
			template <typename T = void*> static T GetSetMethodByReflection(void* propertyInfo) {
				return ((T (*)(void *, void*))(Il2CppBase() + 0x8D3DC4))(0, propertyInfo);
			}
			template <typename T = void*> static T GetSetMethodByReflection_1(void* fieldInfo) {
				return ((T (*)(void *, void*))(Il2CppBase() + 0x8D3EDC))(0, fieldInfo);
			}
		};
	}
}
