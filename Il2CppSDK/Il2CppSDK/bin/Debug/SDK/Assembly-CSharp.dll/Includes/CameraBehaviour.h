#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraBehaviour
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CameraBehaviour*))(Il2CppBase() + 0x1E681C))(this);
	}
	template <typename T = void*> T GetCameraWorldTransform() {
		return ((T (*)(CameraBehaviour*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void*> T GetCameraFPVTransform() {
		return ((T (*)(CameraBehaviour*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Activate(void* spawn) {
		return ((T (*)(CameraBehaviour*, void*))(Il2CppBase() + 0x0))(this, spawn);
	}
};
