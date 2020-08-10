#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyObject
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& Health() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& DefaultHealth() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& Sound() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DestroyObject*))(Il2CppBase() + 0x300E34))(this);
	}
	template <typename T = bool> T get_IsActive() {
		return ((T (*)(DestroyObject*))(Il2CppBase() + 0x300E44))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DestroyObject*))(Il2CppBase() + 0x300E4C))(this);
	}
	template <typename T = void> T OnProjectileHit(void* projectile) {
		return ((T (*)(DestroyObject*, void*))(Il2CppBase() + 0x300E70))(this, projectile);
	}
	template <typename T = void> T OnReceiveRangeDamage(void* attacker, float damage, Il2CppVector3 impuls, void* weaponType) {
		return ((T (*)(DestroyObject*, void*, float, Il2CppVector3, void*))(Il2CppBase() + 0x300F30))(this, attacker, damage, impuls, weaponType);
	}
	template <typename T = void> T Break() {
		return ((T (*)(DestroyObject*))(Il2CppBase() + 0x300FA0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DestroyObject*))(Il2CppBase() + 0x3010C0))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(DestroyObject*))(Il2CppBase() + 0x3011BC))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(DestroyObject*))(Il2CppBase() + 0x30126C))(this);
	}
};
