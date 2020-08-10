#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraCallback
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(CameraCallback*, void*, void*))(Il2CppBase() + 0x8F3A3C))(this, object, method);
	}
	template <typename T = void> T Invoke(void* cam) {
		return ((T (*)(CameraCallback*, void*))(Il2CppBase() + 0x8F3488))(this, cam);
	}
	template <typename T = void*> T BeginInvoke(void* cam, void* callback, void* object) {
		return ((T (*)(CameraCallback*, void*, void*, void*))(Il2CppBase() + 0x8F3A50))(this, cam, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(CameraCallback*, void*))(Il2CppBase() + 0x8F3A7C))(this, result);
	}
};
