#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TouchEvent
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(TouchEvent*, void*, void*))(Il2CppBase() + 0x2AD150))(this, object, method);
	}
	template <typename T = void> T Invoke(void* collider) {
		return ((T (*)(TouchEvent*, void*))(Il2CppBase() + 0x2ACF70))(this, collider);
	}
	template <typename T = void*> T BeginInvoke(void* collider, void* callback, void* object) {
		return ((T (*)(TouchEvent*, void*, void*, void*))(Il2CppBase() + 0x2AD164))(this, collider, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(TouchEvent*, void*))(Il2CppBase() + 0x2AD190))(this, result);
	}
};
