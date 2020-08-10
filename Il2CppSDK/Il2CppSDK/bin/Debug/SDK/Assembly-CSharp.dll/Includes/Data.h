#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Data
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& MoneyCost() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& GoldCost() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MaxAmmoInClip() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& MaxAmmoInWeapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& CriticalAmmo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& FireTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& BodyPartDamageModif() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& EffectiveRange() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& MaxRange() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& Impuls() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& Dispersion() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& DispersionAddMove() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& DispersionAddShoot() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& UpgradeRank() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Data*))(Il2CppBase() + 0x28547C))(this);
	}
	template <typename T = float> T get_MaxRangeDamage() {
		return ((T (*)(Data*))(Il2CppBase() + 0x27F15C))(this);
	}
};
