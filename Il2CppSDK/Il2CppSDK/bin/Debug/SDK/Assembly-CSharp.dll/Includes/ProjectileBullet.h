#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjectileBullet
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79684);
	}
	// Fields
	template <typename T = void*> T& m_ProjectileTrail() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_ScaleProjectile() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& Hit() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& Processed() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = float> T& Timer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& StartPos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> static T& ShotCollisionDist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProjectileBullet*))(Il2CppBase() + 0x20AB98))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x20C764))(0);
	}
	template <typename T = float> T Damage() {
		return ((T (*)(ProjectileBullet*))(Il2CppBase() + 0x20C7EC))(this);
	}
	template <typename T = void> T ProjectileInit(Il2CppVector3 pos, Il2CppVector3 dir, void* inSettings) {
		return ((T (*)(ProjectileBullet*, Il2CppVector3, Il2CppVector3, void*))(Il2CppBase() + 0x20C9B0))(this, pos, dir, inSettings);
	}
	template <typename T = void> T ProjectileUpdate(float deltaTime) {
		return ((T (*)(ProjectileBullet*, float))(Il2CppBase() + 0x20CBA4))(this, deltaTime);
	}
	template <typename T = void> T ProjectileDeinit() {
		return ((T (*)(ProjectileBullet*))(Il2CppBase() + 0x20B9C4))(this);
	}
	template <typename T = bool> T IsFinished() {
		return ((T (*)(ProjectileBullet*))(Il2CppBase() + 0x20D5BC))(this);
	}
};
