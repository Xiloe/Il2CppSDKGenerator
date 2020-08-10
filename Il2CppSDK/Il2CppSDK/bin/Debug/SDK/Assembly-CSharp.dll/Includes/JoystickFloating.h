#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JoystickFloating
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79600);
	}
	// Fields
	template <typename T = Il2CppRect> T& TouchArea() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor(Il2CppRect r) {
		return ((T (*)(JoystickFloating*, Il2CppRect))(Il2CppBase() + 0x3D11B0))(this, r);
	}
	template <typename T = void> T OnTouchBegin(void* touch) {
		return ((T (*)(JoystickFloating*, void*))(Il2CppBase() + 0x3D1314))(this, touch);
	}
	template <typename T = void> T OnTouchUpdate(void* touch) {
		return ((T (*)(JoystickFloating*, void*))(Il2CppBase() + 0x3D1528))(this, touch);
	}
	template <typename T = void> T OnTouchEnd(void* touch) {
		return ((T (*)(JoystickFloating*, void*))(Il2CppBase() + 0x3D1870))(this, touch);
	}
	template <typename T = bool> T IsInside(void* touch) {
		return ((T (*)(JoystickFloating*, void*))(Il2CppBase() + 0x3D1A98))(this, touch);
	}
	template <typename T = void> T SetTouchArea(Il2CppRect r) {
		return ((T (*)(JoystickFloating*, Il2CppRect))(Il2CppBase() + 0x3D11F8))(this, r);
	}
};
