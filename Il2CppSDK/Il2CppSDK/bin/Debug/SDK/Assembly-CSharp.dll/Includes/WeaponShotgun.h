#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponShotgun
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& ProjectilesPerShot() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(WeaponShotgun*))(Il2CppBase() + 0x28588C))(this);
	}
	template <typename T = void> T Initialize(void* id, void* upgrade, float ammoModifier) {
		return ((T (*)(WeaponShotgun*, void*, void*, float))(Il2CppBase() + 0x285898))(this, id, upgrade, ammoModifier);
	}
	template <typename T = void> T SpawnProjectile() {
		return ((T (*)(WeaponShotgun*))(Il2CppBase() + 0x2858FC))(this);
	}
};
