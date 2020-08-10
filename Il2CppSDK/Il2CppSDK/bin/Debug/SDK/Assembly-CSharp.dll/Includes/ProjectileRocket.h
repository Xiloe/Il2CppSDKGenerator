#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjectileRocket
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Explosion() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& m_ExplosionOffset() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_Target() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_AngularSpeed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& Hit() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProjectileRocket*))(Il2CppBase() + 0x2149C0))(this);
	}
	template <typename T = void> T ProjectileInit(Il2CppVector3 pos, Il2CppVector3 dir, void* inSettings) {
		return ((T (*)(ProjectileRocket*, Il2CppVector3, Il2CppVector3, void*))(Il2CppBase() + 0x214A0C))(this, pos, dir, inSettings);
	}
	template <typename T = void> T ProjectileUpdate(float deltaTime) {
		return ((T (*)(ProjectileRocket*, float))(Il2CppBase() + 0x214BD0))(this, deltaTime);
	}
	template <typename T = void> T ProjectileDeinit() {
		return ((T (*)(ProjectileRocket*))(Il2CppBase() + 0x215258))(this);
	}
	template <typename T = bool> T IsFinished() {
		return ((T (*)(ProjectileRocket*))(Il2CppBase() + 0x2152FC))(this);
	}
	template <typename T = void> T OnCollisionEnter(void* collision) {
		return ((T (*)(ProjectileRocket*, void*))(Il2CppBase() + 0x21530C))(this, collision);
	}
	template <typename T = bool> T IsTrailVisible() {
		return ((T (*)(ProjectileRocket*))(Il2CppBase() + 0x215304))(this);
	}
	template <typename T = void> T HitReaction() {
		return ((T (*)(ProjectileRocket*))(Il2CppBase() + 0x21524C))(this);
	}
	template <typename T = void> T DeactivateAllWithoutTrail() {
		return ((T (*)(ProjectileRocket*))(Il2CppBase() + 0x2153D8))(this);
	}
	template <typename T = void> T DeactivateGameObjects(void* inGameObject, void* inIgnore) {
		return ((T (*)(ProjectileRocket*, void*, void*))(Il2CppBase() + 0x2155A0))(this, inGameObject, inIgnore);
	}
	template <typename T = void> T NavigateToTarget(Il2CppVector3 inTargetPosition) {
		return ((T (*)(ProjectileRocket*, Il2CppVector3))(Il2CppBase() + 0x215074))(this, inTargetPosition);
	}
	template <typename T = Il2CppQuaternion> T RotateToward(Il2CppQuaternion inFrom, Il2CppQuaternion inTo, float inRotSpeed, float inTime) {
		return ((T (*)(ProjectileRocket*, Il2CppQuaternion, Il2CppQuaternion, float, float))(Il2CppBase() + 0x2158E8))(this, inFrom, inTo, inRotSpeed, inTime);
	}
	template <typename T = void> T SpawnExplosion() {
		return ((T (*)(ProjectileRocket*))(Il2CppBase() + 0x2153DC))(this);
	}
	template <typename T = void*> T FindBestTarget(float inMaxAngle) {
		return ((T (*)(ProjectileRocket*, float))(Il2CppBase() + 0x215A98))(this, inMaxAngle);
	}
};
