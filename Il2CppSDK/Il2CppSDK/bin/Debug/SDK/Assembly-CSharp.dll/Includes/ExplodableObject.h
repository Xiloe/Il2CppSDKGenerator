#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExplodableObject
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& m_DefaultHitPoints() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_HitPoints() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Explosion() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_ExplosionOrigin() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_ExplosionDamage() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<void*>*> T& m_HideObjects() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<void*>*> T& m_ShowObjects() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_GameObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ExplodableObject*))(Il2CppBase() + 0x314294))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ExplodableObject*))(Il2CppBase() + 0x3142A8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ExplodableObject*))(Il2CppBase() + 0x3143D8))(this);
	}
	template <typename T = void> T OnHitZoneProjectileHit(void* zone, void* projectile) {
		return ((T (*)(ExplodableObject*, void*, void*))(Il2CppBase() + 0x3143E4))(this, zone, projectile);
	}
	template <typename T = void> T OnHitZoneRangeDamage(void* Zone, void* Attacker, float Damage, Il2CppVector3 Impulse, void* weaponID, void* WeaponType) {
		return ((T (*)(ExplodableObject*, void*, void*, float, Il2CppVector3, void*, void*))(Il2CppBase() + 0x3144C0))(this, Zone, Attacker, Damage, Impulse, weaponID, WeaponType);
	}
	template <typename T = void> T OnHitZoneMeleeDamage(void* Zone, void* Data) {
		return ((T (*)(ExplodableObject*, void*, void*))(Il2CppBase() + 0x31454C))(this, Zone, Data);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ExplodableObject*))(Il2CppBase() + 0x314550))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(ExplodableObject*))(Il2CppBase() + 0x314610))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(ExplodableObject*))(Il2CppBase() + 0x3147F8))(this);
	}
	template <typename T = void> T Break() {
		return ((T (*)(ExplodableObject*))(Il2CppBase() + 0x3147FC))(this);
	}
};
