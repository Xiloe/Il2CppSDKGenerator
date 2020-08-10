#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HitZoneEffects
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78CA8);
	}
	// Fields
	template <typename T = bool> T& MustDieToDestroy() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& DestroyCumulativePercentage() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& DestroyBashPercentage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& DestroyParticle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& DestroyParticleInstance() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<void*>*> T& ParticleSystems() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& _cumulativeDamage() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HitZoneEffects*))(Il2CppBase() + 0x39F8D8))(this);
	}
	template <typename T = float> T get_CumulativeDamage() {
		return ((T (*)(HitZoneEffects*))(Il2CppBase() + 0x39F908))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(HitZoneEffects*))(Il2CppBase() + 0x39F910))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(HitZoneEffects*))(Il2CppBase() + 0x39F91C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HitZoneEffects*))(Il2CppBase() + 0x39F928))(this);
	}
	template <typename T = void> T OnProjectileHit(void* projectile) {
		return ((T (*)(HitZoneEffects*, void*))(Il2CppBase() + 0x39F998))(this, projectile);
	}
	template <typename T = void> T OnReceiveRangeDamage(void* attacker, float damage, Il2CppVector3 impulse, void* weaponID, void* weaponType) {
		return ((T (*)(HitZoneEffects*, void*, float, Il2CppVector3, void*, void*))(Il2CppBase() + 0x39FC24))(this, attacker, damage, impulse, weaponID, weaponType);
	}
	template <typename T = void> T PlayDestroyParticle() {
		return ((T (*)(HitZoneEffects*))(Il2CppBase() + 0x39FFAC))(this);
	}
	template <typename T = void*> T GetDestroyParticleTemplate() {
		return ((T (*)(HitZoneEffects*))(Il2CppBase() + 0x3A0244))(this);
	}
};
