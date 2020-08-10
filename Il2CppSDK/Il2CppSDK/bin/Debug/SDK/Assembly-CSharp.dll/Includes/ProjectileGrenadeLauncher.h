#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjectileGrenadeLauncher
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Trail() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& Processed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Timer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& Render() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_Grenade() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProjectileGrenadeLauncher*))(Il2CppBase() + 0x211838))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ProjectileGrenadeLauncher*))(Il2CppBase() + 0x2118D4))(this);
	}
	template <typename T = Il2CppVector3> T GetTrailPos() {
		return ((T (*)(ProjectileGrenadeLauncher*))(Il2CppBase() + 0x211964))(this);
	}
	template <typename T = void> T ProjectileInit(Il2CppVector3 pos, Il2CppVector3 dir, void* inSettings) {
		return ((T (*)(ProjectileGrenadeLauncher*, Il2CppVector3, Il2CppVector3, void*))(Il2CppBase() + 0x211C3C))(this, pos, dir, inSettings);
	}
	template <typename T = void> T ProjectileUpdate(float deltaTime) {
		return ((T (*)(ProjectileGrenadeLauncher*, float))(Il2CppBase() + 0x211F4C))(this, deltaTime);
	}
	template <typename T = void> T ProjectileDeinit() {
		return ((T (*)(ProjectileGrenadeLauncher*))(Il2CppBase() + 0x2120CC))(this);
	}
	template <typename T = bool> T IsFinished() {
		return ((T (*)(ProjectileGrenadeLauncher*))(Il2CppBase() + 0x2120D0))(this);
	}
};
