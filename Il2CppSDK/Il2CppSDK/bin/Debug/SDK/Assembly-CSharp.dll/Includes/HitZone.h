#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HitZone
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& DamageModifier() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& ForPlayer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& GameObj() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& HitZoneOwner() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HitZone*))(Il2CppBase() + 0x39F374))(this);
	}
	template <typename T = void*> T get_GameObj() {
		return ((T (*)(HitZone*))(Il2CppBase() + 0x39F38C))(this);
	}
	template <typename T = void> T set_GameObj(void* value) {
		return ((T (*)(HitZone*, void*))(Il2CppBase() + 0x39F394))(this, value);
	}
	template <typename T = void*> T get_HitZoneOwner() {
		return ((T (*)(HitZone*))(Il2CppBase() + 0x39F39C))(this);
	}
	template <typename T = void> T set_HitZoneOwner(void* value) {
		return ((T (*)(HitZone*, void*))(Il2CppBase() + 0x39F3A4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(HitZone*))(Il2CppBase() + 0x39F3AC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HitZone*))(Il2CppBase() + 0x39F484))(this);
	}
	template <typename T = void> T SetOwner(void* NewOwner) {
		return ((T (*)(HitZone*, void*))(Il2CppBase() + 0x39F488))(this, NewOwner);
	}
	template <typename T = void> T OnProjectileHit(void* projectile) {
		return ((T (*)(HitZone*, void*))(Il2CppBase() + 0x39F490))(this, projectile);
	}
	template <typename T = void> T OnReceiveRangeDamage(void* attacker, float damage, Il2CppVector3 impulse, void* weaponID, void* weaponType) {
		return ((T (*)(HitZone*, void*, float, Il2CppVector3, void*, void*))(Il2CppBase() + 0x39F598))(this, attacker, damage, impulse, weaponID, weaponType);
	}
	template <typename T = void> T OnMeleeDamage(void* Data) {
		return ((T (*)(HitZone*, void*))(Il2CppBase() + 0x39F6E8))(this, Data);
	}
	template <typename T = void> static T SetRecursivelyPlayerRelevancy(void* Obj, bool Enable) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0x39F7F4))(0, Obj, Enable);
	}
};
