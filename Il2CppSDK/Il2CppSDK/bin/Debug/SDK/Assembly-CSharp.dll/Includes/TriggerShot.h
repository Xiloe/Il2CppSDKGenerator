#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerShot
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD798B0);
	}
	// Fields
	template <typename T = Il2CppColor> static T& Col() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<void*>*> static T& DefaultInstigators() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& m_NESController() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_XForm() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Box() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_InstigatorTags() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(TriggerShot*))(Il2CppBase() + 0x2742B0))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2744A8))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TriggerShot*))(Il2CppBase() + 0x274630))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(TriggerShot*))(Il2CppBase() + 0x2747B8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TriggerShot*))(Il2CppBase() + 0x2747C4))(this);
	}
	template <typename T = void> T TriggerEvent(void* E) {
		return ((T (*)(TriggerShot*, void*))(Il2CppBase() + 0x274840))(this, E);
	}
	template <typename T = bool> T IsValidInstigator(void* Obj) {
		return ((T (*)(TriggerShot*, void*))(Il2CppBase() + 0x2748E8))(this, Obj);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(TriggerShot*))(Il2CppBase() + 0x2749DC))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(TriggerShot*))(Il2CppBase() + 0x274A98))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(TriggerShot*))(Il2CppBase() + 0x274B54))(this);
	}
	template <typename T = bool> T IsActivatedWithGameZone() {
		return ((T (*)(TriggerShot*))(Il2CppBase() + 0x274B58))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(TriggerShot*))(Il2CppBase() + 0x274B60))(this);
	}
	template <typename T = void> T OnHitZoneProjectileHit(void* zone, void* projectile) {
		return ((T (*)(TriggerShot*, void*, void*))(Il2CppBase() + 0x274E88))(this, zone, projectile);
	}
	template <typename T = void> T OnHitZoneRangeDamage(void* zone, void* attacker, float damage, Il2CppVector3 impulse, void* weaponID, void* weaponType) {
		return ((T (*)(TriggerShot*, void*, void*, float, Il2CppVector3, void*, void*))(Il2CppBase() + 0x274E90))(this, zone, attacker, damage, impulse, weaponID, weaponType);
	}
	template <typename T = void> T OnHitZoneMeleeDamage(void* zone, void* Data) {
		return ((T (*)(TriggerShot*, void*, void*))(Il2CppBase() + 0x274E98))(this, zone, Data);
	}
};
