#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GamepadCameraControl
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& OutYaw() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& OutPitch() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& Changed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GamepadCameraControl*))(Il2CppBase() + 0x1F9434))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GamepadCameraControl*))(Il2CppBase() + 0x1FAE8C))(this);
	}
	template <typename T = float> static T GetSensitivityX() {
		return ((T (*)(void *))(Il2CppBase() + 0x1FB5F0))(0);
	}
	template <typename T = float> static T GetSensitivityY() {
		return ((T (*)(void *))(Il2CppBase() + 0x1FB6A8))(0);
	}
};
