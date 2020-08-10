#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerControlsGamepad
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD795F4);
	}
	// Fields
	template <typename T = bool> T& Enabled() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& States() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor(void* inStates) {
		return ((T (*)(PlayerControlsGamepad*, void*))(Il2CppBase() + 0x1F6624))(this, inStates);
	}
	template <typename T = float> static T get_ViewSensitivityX() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F6650))(0);
	}
	template <typename T = float> static T get_ViewSensitivityY() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F6708))(0);
	}
	template <typename T = bool> static T ButtonDown(void* inp) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1F67C4))(0, inp);
	}
	template <typename T = bool> static T ButtonUp(void* inp) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1F68A0))(0, inp);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PlayerControlsGamepad*))(Il2CppBase() + 0x1F697C))(this);
	}
	template <typename T = void> T UpdateMove() {
		return ((T (*)(PlayerControlsGamepad*))(Il2CppBase() + 0x1F6C14))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(PlayerControlsGamepad*))(Il2CppBase() + 0x1F6EC8))(this);
	}
	template <typename T = void> T UpdateActions() {
		return ((T (*)(PlayerControlsGamepad*))(Il2CppBase() + 0x1F70F4))(this);
	}
	template <typename T = void> static T UpdateActionsAlways() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F7C1C))(0);
	}
	template <typename T = void> T UpdateActionsBlueTooth() {
		return ((T (*)(PlayerControlsGamepad*))(Il2CppBase() + 0x1F765C))(this);
	}
	template <typename T = void> static T UpdateActionsAlwaysBlueTooth() {
		return ((T (*)(void *))(Il2CppBase() + 0x1F7CF8))(0);
	}
	template <typename T = void> T UseGadget(int32_t index) {
		return ((T (*)(PlayerControlsGamepad*, int32_t))(Il2CppBase() + 0x1F8C04))(this, index);
	}
	template <typename T = void> T ChangeWeaponPrev() {
		return ((T (*)(PlayerControlsGamepad*))(Il2CppBase() + 0x1F8670))(this);
	}
	template <typename T = void> T ChangeWeaponNext() {
		return ((T (*)(PlayerControlsGamepad*))(Il2CppBase() + 0x1F8930))(this);
	}
	template <typename T = void> T ChangeWeapon(void* type) {
		return ((T (*)(PlayerControlsGamepad*, void*))(Il2CppBase() + 0x1F8EEC))(this, type);
	}
	template <typename T = bool> static T CanChangeToWeapon(void* type) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1F8D74))(0, type);
	}
	template <typename T = float> static T GetGpadAxis(void* inp) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1F7E2C))(0, inp);
	}
};
