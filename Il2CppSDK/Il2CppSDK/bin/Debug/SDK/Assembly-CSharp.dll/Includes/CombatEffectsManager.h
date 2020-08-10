#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CombatEffectsManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78C84);
	}
	// Fields
	template <typename T = void*> T& PlayerHit() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& HumanHit() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& DefaultHit() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& MetalHit() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& WaterHit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& PlasmaGunHit() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& MongoGunHit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<int32_t, void*>*> T& HitEffects() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CombatEffectsManager*))(Il2CppBase() + 0x2D6438))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D66C0))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CombatEffectsManager*))(Il2CppBase() + 0x2D66C4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CombatEffectsManager*))(Il2CppBase() + 0x2D6B9C))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(CombatEffectsManager*))(Il2CppBase() + 0x2D6C48))(this);
	}
	template <typename T = void> T PlayHitEffect(void* parent, Il2CppVector3 pos, Il2CppVector3 dir) {
		return ((T (*)(CombatEffectsManager*, void*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2D6F50))(this, parent, pos, dir);
	}
	template <typename T = void> T PlayHitEffect_1(void* parent, Il2CppVector3 pos, Il2CppVector3 dir, void* inProjectileType) {
		return ((T (*)(CombatEffectsManager*, void*, Il2CppVector3, Il2CppVector3, void*))(Il2CppBase() + 0x2D71B8))(this, parent, pos, dir, inProjectileType);
	}
	template <typename T = void> T PlayHitEffect_2(void* parent, int32_t layer, Il2CppVector3 pos, Il2CppVector3 dir, void* inProjectileType) {
		return ((T (*)(CombatEffectsManager*, void*, int32_t, Il2CppVector3, Il2CppVector3, void*))(Il2CppBase() + 0x2D6FC4))(this, parent, layer, pos, dir, inProjectileType);
	}
};
