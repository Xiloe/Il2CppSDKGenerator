#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageVersions
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& Versions() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& CurrentVersion() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& Audio() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Health() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DamageVersions*))(Il2CppBase() + 0x2F4A30))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DamageVersions*))(Il2CppBase() + 0x2F4ADC))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(DamageVersions*))(Il2CppBase() + 0x2F500C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DamageVersions*))(Il2CppBase() + 0x2F51D0))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(DamageVersions*))(Il2CppBase() + 0x2F54D4))(this);
	}
	template <typename T = void> T OnProjectileHit(void* p) {
		return ((T (*)(DamageVersions*, void*))(Il2CppBase() + 0x2F557C))(this, p);
	}
	template <typename T = void> T OnHitZoneProjectileHit(void* zone, void* projectile) {
		return ((T (*)(DamageVersions*, void*, void*))(Il2CppBase() + 0x2F5580))(this, zone, projectile);
	}
	template <typename T = void> T OnHitZoneRangeDamage(void* Zone, void* Attacker, float Damage, Il2CppVector3 Impulse, void* weaponID, void* WeaponType) {
		return ((T (*)(DamageVersions*, void*, void*, float, Il2CppVector3, void*, void*))(Il2CppBase() + 0x2F5858))(this, Zone, Attacker, Damage, Impulse, weaponID, WeaponType);
	}
	template <typename T = void> T OnHitZoneMeleeDamage(void* Zone, void* Data) {
		return ((T (*)(DamageVersions*, void*, void*))(Il2CppBase() + 0x2F5910))(this, Zone, Data);
	}
	template <typename T = void> T DoDamage(float damage) {
		return ((T (*)(DamageVersions*, float))(Il2CppBase() + 0x2F571C))(this, damage);
	}
};
