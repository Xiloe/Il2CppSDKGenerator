#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjectileSantaPresent
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& m_HitSoundNum() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_Explosion() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_Finished() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& Trajectory() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& Velocity() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& HitTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& StartPos() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& FlightTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& CurrentParticle() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& RotationValue() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProjectileSantaPresent*))(Il2CppBase() + 0x215F58))(this);
	}
	template <typename T = void> T OnHitZoneProjectileHit(void* zone, void* projectile) {
		return ((T (*)(ProjectileSantaPresent*, void*, void*))(Il2CppBase() + 0x216084))(this, zone, projectile);
	}
	template <typename T = void> T OnHitZoneRangeDamage(void* zone, void* attacker, float damage, Il2CppVector3 impulse, void* weaponID, void* weaponType) {
		return ((T (*)(ProjectileSantaPresent*, void*, void*, float, Il2CppVector3, void*, void*))(Il2CppBase() + 0x21641C))(this, zone, attacker, damage, impulse, weaponID, weaponType);
	}
	template <typename T = void> T OnHitZoneMeleeDamage(void* zone, void* Data) {
		return ((T (*)(ProjectileSantaPresent*, void*, void*))(Il2CppBase() + 0x21643C))(this, zone, Data);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ProjectileSantaPresent*))(Il2CppBase() + 0x216440))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ProjectileSantaPresent*))(Il2CppBase() + 0x2164EC))(this);
	}
	template <typename T = void> T ProjectileInit(Il2CppVector3 pos, Il2CppVector3 dir, void* inSettings) {
		return ((T (*)(ProjectileSantaPresent*, Il2CppVector3, Il2CppVector3, void*))(Il2CppBase() + 0x216518))(this, pos, dir, inSettings);
	}
	template <typename T = void> T ProjectileDeinit() {
		return ((T (*)(ProjectileSantaPresent*))(Il2CppBase() + 0x2168F8))(this);
	}
	template <typename T = void> T ProjectileUpdate(float deltaTime) {
		return ((T (*)(ProjectileSantaPresent*, float))(Il2CppBase() + 0x2168FC))(this, deltaTime);
	}
	template <typename T = bool> T IsFinished() {
		return ((T (*)(ProjectileSantaPresent*))(Il2CppBase() + 0x216E1C))(this);
	}
	template <typename T = void> T Explode(void* overrideAgent) {
		return ((T (*)(ProjectileSantaPresent*, void*))(Il2CppBase() + 0x2160B4))(this, overrideAgent);
	}
	template <typename T = void> T PlayHitSound(void* Coll) {
		return ((T (*)(ProjectileSantaPresent*, void*))(Il2CppBase() + 0x216E24))(this, Coll);
	}
	template <typename T = void> T OnCollisionStay(void* Coll) {
		return ((T (*)(ProjectileSantaPresent*, void*))(Il2CppBase() + 0x216E60))(this, Coll);
	}
	template <typename T = void> T OnCollisionExit(void* Coll) {
		return ((T (*)(ProjectileSantaPresent*, void*))(Il2CppBase() + 0x216E64))(this, Coll);
	}
	template <typename T = void> T OnRenderObject() {
		return ((T (*)(ProjectileSantaPresent*))(Il2CppBase() + 0x216E68))(this);
	}
	template <typename T = void> T ComputeTrajectoryLight(Il2CppVector3 inDir) {
		return ((T (*)(ProjectileSantaPresent*, Il2CppVector3))(Il2CppBase() + 0x2165E8))(this, inDir);
	}
	template <typename T = void> T ComputeTrajectory(Il2CppVector3 inDir) {
		return ((T (*)(ProjectileSantaPresent*, Il2CppVector3))(Il2CppBase() + 0x2171A0))(this, inDir);
	}
	template <typename T = void> T DisplayTrajectory(float DisplayTime) {
		return ((T (*)(ProjectileSantaPresent*, float))(Il2CppBase() + 0x216F44))(this, DisplayTime);
	}
};
