#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MenuController
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7918C);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& Buttons() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& DeadZone() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& MoveDelta() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MenuController*))(Il2CppBase() + 0x3E799C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MenuController*))(Il2CppBase() + 0x3E7C80))(this);
	}
	template <typename T = bool> T PressedLeft() {
		return ((T (*)(MenuController*))(Il2CppBase() + 0x3E8114))(this);
	}
	template <typename T = bool> T PressedRight() {
		return ((T (*)(MenuController*))(Il2CppBase() + 0x3E81E0))(this);
	}
	template <typename T = bool> T PressedUp() {
		return ((T (*)(MenuController*))(Il2CppBase() + 0x3E82AC))(this);
	}
	template <typename T = bool> T PressedDown() {
		return ((T (*)(MenuController*))(Il2CppBase() + 0x3E8378))(this);
	}
	template <typename T = bool> T PressedOk() {
		return ((T (*)(MenuController*))(Il2CppBase() + 0x3E8444))(this);
	}
	template <typename T = bool> T PressedBack() {
		return ((T (*)(MenuController*))(Il2CppBase() + 0x3E8580))(this);
	}
};
