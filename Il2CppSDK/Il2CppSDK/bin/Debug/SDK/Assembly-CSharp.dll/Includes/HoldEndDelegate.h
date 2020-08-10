#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HoldEndDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(HoldEndDelegate*, void*, void*))(Il2CppBase() + 0x435F34))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(HoldEndDelegate*))(Il2CppBase() + 0x435F48))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(HoldEndDelegate*, void*, void*))(Il2CppBase() + 0x435FD8))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(HoldEndDelegate*, void*))(Il2CppBase() + 0x436004))(this, result);
	}
};
