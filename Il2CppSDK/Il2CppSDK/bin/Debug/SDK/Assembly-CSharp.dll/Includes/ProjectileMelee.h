#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjectileMelee
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD796A0);
	}
	// Fields
	template <typename T = bool> T& Hit() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = bool> T& Processed() {
		return *(T*)((uintptr_t)this + 0x23);
	}
	template <typename T = float> T& Timer() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& StartPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> static T& ShotCollisionDist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProjectileMelee*))(Il2CppBase() + 0x213BB8))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x213BC0))(0);
	}
	template <typename T = float> T Damage() {
		return ((T (*)(ProjectileMelee*))(Il2CppBase() + 0x213C48))(this);
	}
	template <typename T = void> T ProjectileInit(Il2CppVector3 pos, Il2CppVector3 dir, void* inSettings) {
		return ((T (*)(ProjectileMelee*, Il2CppVector3, Il2CppVector3, void*))(Il2CppBase() + 0x213D0C))(this, pos, dir, inSettings);
	}
	template <typename T = void> T ProjectileUpdate(float deltaTime) {
		return ((T (*)(ProjectileMelee*, float))(Il2CppBase() + 0x213E64))(this, deltaTime);
	}
	template <typename T = void> T ProjectileDeinit() {
		return ((T (*)(ProjectileMelee*))(Il2CppBase() + 0x2149B4))(this);
	}
	template <typename T = bool> T IsFinished() {
		return ((T (*)(ProjectileMelee*))(Il2CppBase() + 0x2149B8))(this);
	}
};
