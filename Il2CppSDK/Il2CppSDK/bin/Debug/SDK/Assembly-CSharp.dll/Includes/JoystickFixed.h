#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JoystickFixed
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79604);
	}
	// Methods
	template <typename T = void> T _ctor(float posX, float posY) {
		return ((T (*)(JoystickFixed*, float, float))(Il2CppBase() + 0x3D0824))(this, posX, posY);
	}
	template <typename T = float> T get_DeadZone() {
		return ((T (*)(JoystickFixed*))(Il2CppBase() + 0x3D087C))(this);
	}
	template <typename T = void> T OnTouchBegin(void* touch) {
		return ((T (*)(JoystickFixed*, void*))(Il2CppBase() + 0x3D08AC))(this, touch);
	}
	template <typename T = void> T OnTouchUpdate(void* touch) {
		return ((T (*)(JoystickFixed*, void*))(Il2CppBase() + 0x3D0BF4))(this, touch);
	}
	template <typename T = void> T OnTouchEnd(void* touch) {
		return ((T (*)(JoystickFixed*, void*))(Il2CppBase() + 0x3D0F68))(this, touch);
	}
	template <typename T = bool> T IsInside(void* touch) {
		return ((T (*)(JoystickFixed*, void*))(Il2CppBase() + 0x3D1100))(this, touch);
	}
};
