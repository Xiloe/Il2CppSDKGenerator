#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponSettings
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& WeaponType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& ProjectileType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& FireType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& AimCross() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& CanAim() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = float> T& AimFov() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& UseAimAssist() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<void*>*> T& Upgrades() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(WeaponSettings*))(Il2CppBase() + 0x2852CC))(this);
	}
	template <typename T = int32_t> T get_MoneyCost() {
		return ((T (*)(WeaponSettings*))(Il2CppBase() + 0x285484))(this);
	}
	template <typename T = int32_t> T get_GoldCost() {
		return ((T (*)(WeaponSettings*))(Il2CppBase() + 0x2854C8))(this);
	}
	template <typename T = int32_t> T get_UpgradeMoneyCost() {
		return ((T (*)(WeaponSettings*))(Il2CppBase() + 0x28550C))(this);
	}
	template <typename T = int32_t> T get_UpgradeGoldCost() {
		return ((T (*)(WeaponSettings*))(Il2CppBase() + 0x285550))(this);
	}
	template <typename T = Il2CppString*> T GetSettingsClass() {
		return ((T (*)(WeaponSettings*))(Il2CppBase() + 0x285594))(this);
	}
};
