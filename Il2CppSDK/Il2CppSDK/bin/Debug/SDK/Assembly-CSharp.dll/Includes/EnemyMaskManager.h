#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnemyMaskManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78E08);
	}
	// Fields
	template <typename T = float> T& m_LifeTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_FadeOutDuration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_Probability() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_ProbabilityAccum() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_HeadCollisionScale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<void*>*> T& m_HalloweenMasks() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<void*>*> T& m_ChristmasMasks() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Caches() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EnemyMaskManager*))(Il2CppBase() + 0x310394))(this);
	}
	template <typename T = void*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x3103C4))(0);
	}
	template <typename T = void> static T set_Instance(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x310444))(0, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EnemyMaskManager*))(Il2CppBase() + 0x3104C8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(EnemyMaskManager*))(Il2CppBase() + 0x3105C8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EnemyMaskManager*))(Il2CppBase() + 0x3106CC))(this);
	}
	template <typename T = void> T Add(void* Enemy) {
		return ((T (*)(EnemyMaskManager*, void*))(Il2CppBase() + 0x310DA8))(this, Enemy);
	}
	template <typename T = bool> T Drop(void* Enemy, Il2CppVector3 Impulse) {
		return ((T (*)(EnemyMaskManager*, void*, Il2CppVector3))(Il2CppBase() + 0x3113B4))(this, Enemy, Impulse);
	}
	template <typename T = void*> T RemoveMask(void* MaskObj) {
		return ((T (*)(EnemyMaskManager*, void*))(Il2CppBase() + 0x31186C))(this, MaskObj);
	}
	template <typename T = void> T OnHitZoneProjectileHit(void* zone, void* projectile) {
		return ((T (*)(EnemyMaskManager*, void*, void*))(Il2CppBase() + 0x311924))(this, zone, projectile);
	}
	template <typename T = void> T OnHitZoneRangeDamage(void* zone, void* attacker, float damage, Il2CppVector3 impulse, void* weaponID, void* weaponType) {
		return ((T (*)(EnemyMaskManager*, void*, void*, float, Il2CppVector3, void*, void*))(Il2CppBase() + 0x311AAC))(this, zone, attacker, damage, impulse, weaponID, weaponType);
	}
	template <typename T = void> T OnHitZoneMeleeDamage(void* zone, void* Data) {
		return ((T (*)(EnemyMaskManager*, void*, void*))(Il2CppBase() + 0x311AB0))(this, zone, Data);
	}
};
