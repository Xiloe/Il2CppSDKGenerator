#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjectileCrossbow
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_ProjectileTrail() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& Hit() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& Processed() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = float> T& Timer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& LastTrailNewPosTimer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& StartPos() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& OrigForward() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& Render() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProjectileCrossbow*))(Il2CppBase() + 0x20D83C))(this);
	}
	template <typename T = Il2CppVector3> T GetTrailPos() {
		return ((T (*)(ProjectileCrossbow*))(Il2CppBase() + 0x20D844))(this);
	}
	template <typename T = void> T ProjectileInit(Il2CppVector3 pos, Il2CppVector3 dir, void* inSettings) {
		return ((T (*)(ProjectileCrossbow*, Il2CppVector3, Il2CppVector3, void*))(Il2CppBase() + 0x20DA10))(this, pos, dir, inSettings);
	}
	template <typename T = Il2CppVector3> T GetForward(float deltaTime) {
		return ((T (*)(ProjectileCrossbow*, float))(Il2CppBase() + 0x20DC9C))(this, deltaTime);
	}
	template <typename T = void> T ProjectileUpdate(float deltaTime) {
		return ((T (*)(ProjectileCrossbow*, float))(Il2CppBase() + 0x20DD84))(this, deltaTime);
	}
	template <typename T = void> T ProjectileDeinit() {
		return ((T (*)(ProjectileCrossbow*))(Il2CppBase() + 0x20E728))(this);
	}
	template <typename T = bool> T IsFinished() {
		return ((T (*)(ProjectileCrossbow*))(Il2CppBase() + 0x20E72C))(this);
	}
};
