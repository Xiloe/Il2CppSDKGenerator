#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraState
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Owner() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(CameraState*, void*))(Il2CppBase() + 0x1E7A94))(this, owner);
	}
	template <typename T = void*> T GetCameraWorldTransform() {
		return ((T (*)(CameraState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void*> T GetCameraFPVTransform() {
		return ((T (*)(CameraState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Activate(void* t) {
		return ((T (*)(CameraState*, void*))(Il2CppBase() + 0x1E7AB4))(this, t);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(CameraState*))(Il2CppBase() + 0x1E7B50))(this);
	}
};
