#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LayoutTouchDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(LayoutTouchDelegate*, void*, void*))(Il2CppBase() + 0x361D08))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(LayoutTouchDelegate*))(Il2CppBase() + 0x3608DC))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(LayoutTouchDelegate*, void*, void*))(Il2CppBase() + 0x361D28))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(LayoutTouchDelegate*, void*))(Il2CppBase() + 0x361D54))(this, result);
	}
};
