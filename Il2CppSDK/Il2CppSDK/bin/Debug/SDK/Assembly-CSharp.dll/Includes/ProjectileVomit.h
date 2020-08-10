#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjectileVomit
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& m_HitSoundNum() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_HitSoundLimit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_Explosion() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& ParticleFly() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& ParticleHit() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& ObjectFly() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& Audio() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_Finished() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& Trajectory() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& Velocity() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& HitTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector3> T& StartPos() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& FlightTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = void*> T& CurrentParticle() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = void*> T& FlyingObject() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProjectileVomit*))(Il2CppBase() + 0x2180FC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ProjectileVomit*))(Il2CppBase() + 0x218224))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ProjectileVomit*))(Il2CppBase() + 0x2182B8))(this);
	}
	template <typename T = void> T ProjectileInit(Il2CppVector3 pos, Il2CppVector3 dir, void* inSettings) {
		return ((T (*)(ProjectileVomit*, Il2CppVector3, Il2CppVector3, void*))(Il2CppBase() + 0x218334))(this, pos, dir, inSettings);
	}
	template <typename T = void*> T _PlayFlyParticle(float delay, Il2CppVector3 pos) {
		return ((T (*)(ProjectileVomit*, float, Il2CppVector3))(Il2CppBase() + 0x2186D8))(this, delay, pos);
	}
	template <typename T = void> T ProjectileDeinit() {
		return ((T (*)(ProjectileVomit*))(Il2CppBase() + 0x218794))(this);
	}
	template <typename T = void> T ProjectileUpdate(float deltaTime) {
		return ((T (*)(ProjectileVomit*, float))(Il2CppBase() + 0x218798))(this, deltaTime);
	}
	template <typename T = bool> T IsFinished() {
		return ((T (*)(ProjectileVomit*))(Il2CppBase() + 0x218F0C))(this);
	}
	template <typename T = void> T Explode() {
		return ((T (*)(ProjectileVomit*))(Il2CppBase() + 0x218B40))(this);
	}
	template <typename T = void> T PlayHitSound(void* Coll) {
		return ((T (*)(ProjectileVomit*, void*))(Il2CppBase() + 0x218F14))(this, Coll);
	}
	template <typename T = void> T OnCollisionStay(void* Coll) {
		return ((T (*)(ProjectileVomit*, void*))(Il2CppBase() + 0x2191E4))(this, Coll);
	}
	template <typename T = void> T OnCollisionExit(void* Coll) {
		return ((T (*)(ProjectileVomit*, void*))(Il2CppBase() + 0x2191E8))(this, Coll);
	}
	template <typename T = void> T OnRenderObject() {
		return ((T (*)(ProjectileVomit*))(Il2CppBase() + 0x2191EC))(this);
	}
	template <typename T = void> T ComputeTrajectoryLight(Il2CppVector3 inDir) {
		return ((T (*)(ProjectileVomit*, Il2CppVector3))(Il2CppBase() + 0x2183BC))(this, inDir);
	}
	template <typename T = void> T ComputeTrajectory(Il2CppVector3 inDir) {
		return ((T (*)(ProjectileVomit*, Il2CppVector3))(Il2CppBase() + 0x219524))(this, inDir);
	}
	template <typename T = void> T DisplayTrajectory(float DisplayTime) {
		return ((T (*)(ProjectileVomit*, float))(Il2CppBase() + 0x2192C8))(this, DisplayTime);
	}
	template <typename T = void*> T GetImportantObjectType() {
		return ((T (*)(ProjectileVomit*))(Il2CppBase() + 0x219C64))(this);
	}
	template <typename T = void*> T GetGameObject() {
		return ((T (*)(ProjectileVomit*))(Il2CppBase() + 0x219C6C))(this);
	}
};
