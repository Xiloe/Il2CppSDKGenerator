#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHitZoneOwner
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7923C);
	}
	// Methods
	template <typename T = void> T OnHitZoneProjectileHit(void* zone, void* projectile) {
		return ((T (*)(IHitZoneOwner*, void*, void*))(Il2CppBase() + 0x0))(this, zone, projectile);
	}
	template <typename T = void> T OnHitZoneRangeDamage(void* zone, void* attacker, float damage, Il2CppVector3 impulse, void* weaponID, void* weaponType) {
		return ((T (*)(IHitZoneOwner*, void*, void*, float, Il2CppVector3, void*, void*))(Il2CppBase() + 0x0))(this, zone, attacker, damage, impulse, weaponID, weaponType);
	}
	template <typename T = void> T OnHitZoneMeleeDamage(void* zone, void* Data) {
		return ((T (*)(IHitZoneOwner*, void*, void*))(Il2CppBase() + 0x0))(this, zone, Data);
	}
};
