#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Projectile
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Settings() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& ProjectileType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& Transform() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& ignoreThisHit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& hitProcessed() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Projectile*))(Il2CppBase() + 0x20A8FC))(this);
	}
	template <typename T = void*> T get_ProjectileType() {
		return ((T (*)(Projectile*))(Il2CppBase() + 0x20A904))(this);
	}
	template <typename T = void> T set_ProjectileType(void* value) {
		return ((T (*)(Projectile*, void*))(Il2CppBase() + 0x20A90C))(this, value);
	}
	template <typename T = void*> T get_GameObject() {
		return ((T (*)(Projectile*))(Il2CppBase() + 0x20A914))(this);
	}
	template <typename T = void> T set_GameObject(void* value) {
		return ((T (*)(Projectile*, void*))(Il2CppBase() + 0x20A91C))(this, value);
	}
	template <typename T = void*> T get_Transform() {
		return ((T (*)(Projectile*))(Il2CppBase() + 0x20A924))(this);
	}
	template <typename T = void> T set_Transform(void* value) {
		return ((T (*)(Projectile*, void*))(Il2CppBase() + 0x20A92C))(this, value);
	}
	template <typename T = bool> T get_ignoreThisHit() {
		return ((T (*)(Projectile*))(Il2CppBase() + 0x20A934))(this);
	}
	template <typename T = void> T set_ignoreThisHit(bool value) {
		return ((T (*)(Projectile*, bool))(Il2CppBase() + 0x20A93C))(this, value);
	}
	template <typename T = bool> T get_hitProcessed() {
		return ((T (*)(Projectile*))(Il2CppBase() + 0x20A944))(this);
	}
	template <typename T = void> T set_hitProcessed(bool value) {
		return ((T (*)(Projectile*, bool))(Il2CppBase() + 0x20A94C))(this, value);
	}
	template <typename T = float> T get_Speed() {
		return ((T (*)(Projectile*))(Il2CppBase() + 0x20A954))(this);
	}
	template <typename T = float> T get_Impuls() {
		return ((T (*)(Projectile*))(Il2CppBase() + 0x20A978))(this);
	}
	template <typename T = void*> T get_Agent() {
		return ((T (*)(Projectile*))(Il2CppBase() + 0x20A99C))(this);
	}
	template <typename T = void*> T get_Weapon() {
		return ((T (*)(Projectile*))(Il2CppBase() + 0x20A9C0))(this);
	}
	template <typename T = void*> T get_WeaponType() {
		return ((T (*)(Projectile*))(Il2CppBase() + 0x20A9E4))(this);
	}
	template <typename T = float> T get_BodyPartDamageModif() {
		return ((T (*)(Projectile*))(Il2CppBase() + 0x20AA08))(this);
	}
	template <typename T = float> T Damage() {
		return ((T (*)(Projectile*))(Il2CppBase() + 0x20AA2C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Projectile*))(Il2CppBase() + 0x20AA50))(this);
	}
	template <typename T = void> T ProjectileInit(Il2CppVector3 pos, Il2CppVector3 dir, void* inSettings) {
		return ((T (*)(Projectile*, Il2CppVector3, Il2CppVector3, void*))(Il2CppBase() + 0x20AA8C))(this, pos, dir, inSettings);
	}
	template <typename T = void> T ProjectileUpdate(float deltaTime) {
		return ((T (*)(Projectile*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename T = void> T ProjectileDeinit() {
		return ((T (*)(Projectile*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsFinished() {
		return ((T (*)(Projectile*))(Il2CppBase() + 0x0))(this);
	}
};
