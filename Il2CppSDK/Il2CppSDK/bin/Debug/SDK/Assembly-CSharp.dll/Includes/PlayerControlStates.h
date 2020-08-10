#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerControlStates
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78CD8);
	}
	// Fields
	template <typename T = void*> T& Move() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& View() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& ActionsEnabled() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Fire() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& Use() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = void*> T& FireDownDelegate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& FireUpDelegate() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& UseDelegate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& ReloadDelegate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& IronSightDelegate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& UseGadgetDelegate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& UseObjectDelegate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& TouchUpdateDelegate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& ChangeWeaponDelegate() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& TouchControls() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& PCControls() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& GamepadControls() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& XperiaControls() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& _Temp() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PlayerControlStates*))(Il2CppBase() + 0x1FB930))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PlayerControlStates*))(Il2CppBase() + 0x1FBBA0))(this);
	}
	template <typename T = void> T SwitchToUseMode() {
		return ((T (*)(PlayerControlStates*))(Il2CppBase() + 0x1FBEF0))(this);
	}
	template <typename T = void> T SwitchToCombatMode() {
		return ((T (*)(PlayerControlStates*))(Il2CppBase() + 0x1FBF18))(this);
	}
	template <typename T = void> T DisableInput() {
		return ((T (*)(PlayerControlStates*))(Il2CppBase() + 0x1FBF40))(this);
	}
	template <typename T = void> T EnableInput() {
		return ((T (*)(PlayerControlStates*))(Il2CppBase() + 0x1FBFE8))(this);
	}
	template <typename T = void> T DisableView() {
		return ((T (*)(PlayerControlStates*))(Il2CppBase() + 0x1FC024))(this);
	}
	template <typename T = void> T EnableView() {
		return ((T (*)(PlayerControlStates*))(Il2CppBase() + 0x1FC04C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PlayerControlStates*))(Il2CppBase() + 0x1FBF74))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PlayerControlStates*))(Il2CppBase() + 0x1FC134))(this);
	}
};
