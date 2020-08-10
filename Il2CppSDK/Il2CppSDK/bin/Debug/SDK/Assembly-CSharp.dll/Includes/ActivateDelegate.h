#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActivateDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(ActivateDelegate*, void*, void*))(Il2CppBase() + 0x31423C))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(ActivateDelegate*))(Il2CppBase() + 0x3141AC))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(ActivateDelegate*, void*, void*))(Il2CppBase() + 0x31425C))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(ActivateDelegate*, void*))(Il2CppBase() + 0x314288))(this, result);
	}
};
