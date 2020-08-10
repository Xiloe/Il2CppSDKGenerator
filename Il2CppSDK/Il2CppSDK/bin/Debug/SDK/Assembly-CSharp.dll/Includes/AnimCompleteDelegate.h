#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimCompleteDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(AnimCompleteDelegate*, void*, void*))(Il2CppBase() + 0x25A008))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(AnimCompleteDelegate*))(Il2CppBase() + 0x2596DC))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(AnimCompleteDelegate*, void*, void*))(Il2CppBase() + 0x25A028))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(AnimCompleteDelegate*, void*))(Il2CppBase() + 0x25A054))(this, result);
	}
};
