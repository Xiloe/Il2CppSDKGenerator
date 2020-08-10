#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerControlsXperia
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD795F0);
	}
	// Fields
	template <typename T = bool> T& Enabled() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& States() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& ViewJoystick() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor(void* inStates) {
		return ((T (*)(PlayerControlsXperia*, void*))(Il2CppBase() + 0x1FBE48))(this, inStates);
	}
	template <typename T = float> T get_ViewSensitivityX() {
		return ((T (*)(PlayerControlsXperia*))(Il2CppBase() + 0x1FEC90))(this);
	}
	template <typename T = float> T get_ViewSensitivityY() {
		return ((T (*)(PlayerControlsXperia*))(Il2CppBase() + 0x1FED48))(this);
	}
	template <typename T = void> T UpdateMove() {
		return ((T (*)(PlayerControlsXperia*))(Il2CppBase() + 0x1FEE04))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(PlayerControlsXperia*))(Il2CppBase() + 0x1FF3D0))(this);
	}
	template <typename T = void> T UpdateViewBySlidePad() {
		return ((T (*)(PlayerControlsXperia*))(Il2CppBase() + 0x1FF4A0))(this);
	}
	template <typename T = bool> T InsideRightPad(void* touch) {
		return ((T (*)(PlayerControlsXperia*, void*))(Il2CppBase() + 0x1FFBF4))(this, touch);
	}
	template <typename T = void> T ViewTouchBegin(void* touch) {
		return ((T (*)(PlayerControlsXperia*, void*))(Il2CppBase() + 0x1FF734))(this, touch);
	}
	template <typename T = void> T ViewTouchUpdate(void* touch) {
		return ((T (*)(PlayerControlsXperia*, void*))(Il2CppBase() + 0x1FF8E4))(this, touch);
	}
	template <typename T = void> T ViewTouchEnd(void* touch) {
		return ((T (*)(PlayerControlsXperia*, void*))(Il2CppBase() + 0x1FFB8C))(this, touch);
	}
	template <typename T = void> T UpdateActions() {
		return ((T (*)(PlayerControlsXperia*))(Il2CppBase() + 0x200218))(this);
	}
	template <typename T = void> T UpdateActionsAlways() {
		return ((T (*)(PlayerControlsXperia*))(Il2CppBase() + 0x201100))(this);
	}
	template <typename T = void> T UseGadget(int32_t index) {
		return ((T (*)(PlayerControlsXperia*, int32_t))(Il2CppBase() + 0x200F34))(this, index);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PlayerControlsXperia*))(Il2CppBase() + 0x1FC544))(this);
	}
	template <typename T = void> T ChangeWeapon(void* type) {
		return ((T (*)(PlayerControlsXperia*, void*))(Il2CppBase() + 0x20121C))(this, type);
	}
	template <typename T = bool> T CanChangeToWeapon(void* type) {
		return ((T (*)(PlayerControlsXperia*, void*))(Il2CppBase() + 0x2015E4))(this, type);
	}
	template <typename T = void> T ChangeWeaponPrev() {
		return ((T (*)(PlayerControlsXperia*))(Il2CppBase() + 0x2009B0))(this);
	}
	template <typename T = void> T ChangeWeaponNext() {
		return ((T (*)(PlayerControlsXperia*))(Il2CppBase() + 0x200C68))(this);
	}
	template <typename T = void> T GetTouchStickJoystick(void* joydir, bool left) {
		return ((T (*)(PlayerControlsXperia*, void*, bool))(Il2CppBase() + 0x1FF15C))(this, joydir, left);
	}
	template <typename T = void> static T ComputeJoyVector(void* joydir, float deadzone, float padRadius, float clamp) {
		return ((T (*)(void *, void*, float, float, float))(Il2CppBase() + 0x201754))(0, joydir, deadzone, padRadius, clamp);
	}
	template <typename T = float> static T EaseJoyValue(float val) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x20199C))(0, val);
	}
	template <typename T = float> static T DropSmallJoyValue(float val) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x201A34))(0, val);
	}
};
