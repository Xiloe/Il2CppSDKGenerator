#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkinChangedDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(SkinChangedDelegate*, void*, void*))(Il2CppBase() + 0x914B48))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(SkinChangedDelegate*))(Il2CppBase() + 0x9149B8))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(SkinChangedDelegate*, void*, void*))(Il2CppBase() + 0x914B68))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(SkinChangedDelegate*, void*))(Il2CppBase() + 0x914B94))(this, result);
	}
};
