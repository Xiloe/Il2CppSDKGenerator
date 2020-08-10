#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Explosion
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& m_DamageRadius() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_MaxDamageRadius() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_MaxDamage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_WeaponType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_GenerateWaveFX() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_WaveFXDelay() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_WaveFXAmplitudeMin() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_WaveFXAmplitudeMax() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_WaveFXFreq() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_WaveFXDuration() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_WaveFXRadiusMin() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_WaveFXRadiusMax() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_WaveFXSpeed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_WaveFXMaxWrldDist() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_ParticleCriticalDistance() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Emitters() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& m_GameObject() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_Exploded() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& causer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& damage() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& damageRadius() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& damageMaxRadius() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<void*>*> T& noBlocking() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = void*> T& FromWeapon() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = void*> T& cacheKey() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x3156E0))(this);
	}
	template <typename T = void*> T get_causer() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x315748))(this);
	}
	template <typename T = void> T set_causer(void* value) {
		return ((T (*)(Explosion*, void*))(Il2CppBase() + 0x315750))(this, value);
	}
	template <typename T = float> T get_damage() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x315758))(this);
	}
	template <typename T = void> T set_damage(float value) {
		return ((T (*)(Explosion*, float))(Il2CppBase() + 0x314BBC))(this, value);
	}
	template <typename T = float> T get_damageRadius() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x315760))(this);
	}
	template <typename T = void> T set_damageRadius(float value) {
		return ((T (*)(Explosion*, float))(Il2CppBase() + 0x315768))(this, value);
	}
	template <typename T = float> T get_damageMaxRadius() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x315770))(this);
	}
	template <typename T = void> T set_damageMaxRadius(float value) {
		return ((T (*)(Explosion*, float))(Il2CppBase() + 0x315778))(this, value);
	}
	template <typename T = Il2CppArray<void*>*> T get_noBlocking() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x315780))(this);
	}
	template <typename T = void> T set_noBlocking(Il2CppArray<void*>* value) {
		return ((T (*)(Explosion*, Il2CppArray<void*>*))(Il2CppBase() + 0x314BB4))(this, value);
	}
	template <typename T = void*> T get_FromWeapon() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x315788))(this);
	}
	template <typename T = void> T set_FromWeapon(void* value) {
		return ((T (*)(Explosion*, void*))(Il2CppBase() + 0x315790))(this, value);
	}
	template <typename T = void*> T get_cacheKey() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x315798))(this);
	}
	template <typename T = void> T set_cacheKey(void* value) {
		return ((T (*)(Explosion*, void*))(Il2CppBase() + 0x3157A0))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x3157A8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x315868))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x315874))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x315CC0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x315CC4))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x315CC8))(this);
	}
	template <typename T = void> T HACK_CancelEffects() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x315CCC))(this);
	}
	template <typename T = void> T HACK_StopEmittersOnEnd() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x315D2C))(this);
	}
	template <typename T = void> T Explode() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x3159D8))(this);
	}
	template <typename T = void> T CleanUp() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x315BDC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x316A28))(this);
	}
	template <typename T = void> T ApplyDamage() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x3160FC))(this);
	}
	template <typename T = Il2CppVector3> T GetTargetPoint(bool TargetIsAgent, void* Target, Il2CppVector3 ExplosionPos) {
		return ((T (*)(Explosion*, bool, void*, Il2CppVector3))(Il2CppBase() + 0x316D24))(this, TargetIsAgent, Target, ExplosionPos);
	}
	template <typename T = float> T ComputeDamage(bool inAgent, void* inVictim, Il2CppVector3 inExplosionPos, void** outInpuls) {
		return ((T (*)(Explosion*, bool, void*, Il2CppVector3, void**))(Il2CppBase() + 0x316B3C))(this, inAgent, inVictim, inExplosionPos, outInpuls);
	}
	template <typename T = bool> T IsCollisionBetween(Il2CppVector3 inFrom, Il2CppVector3 inTo, void* inVictim) {
		return ((T (*)(Explosion*, Il2CppVector3, Il2CppVector3, void*))(Il2CppBase() + 0x316E10))(this, inFrom, inTo, inVictim);
	}
	template <typename T = bool> T IgnoreInBlockingTest(void* inTransform) {
		return ((T (*)(Explosion*, void*))(Il2CppBase() + 0x31731C))(this, inTransform);
	}
	template <typename T = void> T GenerateWaveFX() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x315E60))(this);
	}
};
