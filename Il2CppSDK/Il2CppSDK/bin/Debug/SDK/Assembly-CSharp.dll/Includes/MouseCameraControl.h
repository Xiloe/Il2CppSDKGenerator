#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MouseCameraControl
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& Changed() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& OutYaw() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& OutPitch() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MouseCameraControl*))(Il2CppBase() + 0x1F942C))(this);
	}
	template <typename T = bool> T get_CursorLocked() {
		return ((T (*)(MouseCameraControl*))(Il2CppBase() + 0x1FB764))(this);
	}
	template <typename T = void> T set_CursorLocked(bool value) {
		return ((T (*)(MouseCameraControl*, bool))(Il2CppBase() + 0x1FB784))(this, value);
	}
	template <typename T = void> T SwitchCursor() {
		return ((T (*)(MouseCameraControl*))(Il2CppBase() + 0x1FA8F8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MouseCameraControl*))(Il2CppBase() + 0x1FAC78))(this);
	}
	template <typename T = float> static T GetSensitivityX() {
		return ((T (*)(void *))(Il2CppBase() + 0x1FB7B0))(0);
	}
	template <typename T = float> static T GetSensitivityY() {
		return ((T (*)(void *))(Il2CppBase() + 0x1FB870))(0);
	}
};
