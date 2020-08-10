#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TouchDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(TouchDelegate*, void*, void*))(Il2CppBase() + 0x35829C))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(TouchDelegate*))(Il2CppBase() + 0x357928))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(TouchDelegate*, void*, void*))(Il2CppBase() + 0x3582BC))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(TouchDelegate*, void*))(Il2CppBase() + 0x3582E8))(this, result);
	}
};
