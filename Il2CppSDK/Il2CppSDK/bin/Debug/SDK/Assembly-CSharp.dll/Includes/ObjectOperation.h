#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ObjectOperation
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(ObjectOperation*, void*, void*))(Il2CppBase() + 0x28BE28))(this, object, method);
	}
	template <typename T = void> T Invoke(void* obj) {
		return ((T (*)(ObjectOperation*, void*))(Il2CppBase() + 0x28BC7C))(this, obj);
	}
	template <typename T = void*> T BeginInvoke(void* obj, void* callback, void* object) {
		return ((T (*)(ObjectOperation*, void*, void*, void*))(Il2CppBase() + 0x28BE3C))(this, obj, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(ObjectOperation*, void*))(Il2CppBase() + 0x28BE68))(this, result);
	}
};
