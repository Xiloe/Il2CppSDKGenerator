#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionPointData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& actionPoint() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& currentData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& offMeshLinkData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& timeActionPointEnd() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& prevCostOverride() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& prevInvulnerable() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& state() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ActionPointData*))(Il2CppBase() + 0x1C330C))(this);
	}
	template <typename T = void*> T GetAnim() {
		return ((T (*)(ActionPointData*))(Il2CppBase() + 0x1C6FEC))(this);
	}
	template <typename T = Il2CppVector3> T GetLookDir() {
		return ((T (*)(ActionPointData*))(Il2CppBase() + 0x1C7010))(this);
	}
	template <typename T = float> T GetLength() {
		return ((T (*)(ActionPointData*))(Il2CppBase() + 0x1C70AC))(this);
	}
	template <typename T = bool> T IsStillActive(void* owner) {
		return ((T (*)(ActionPointData*, void*))(Il2CppBase() + 0x1C5274))(this, owner);
	}
	template <typename T = Il2CppVector3> T GetStartPos() {
		return ((T (*)(ActionPointData*))(Il2CppBase() + 0x1C6340))(this);
	}
	template <typename T = Il2CppVector3> T GetEndPos() {
		return ((T (*)(ActionPointData*))(Il2CppBase() + 0x1C5308))(this);
	}
	template <typename T = float> T GetMoveSpeed() {
		return ((T (*)(ActionPointData*))(Il2CppBase() + 0x1C4B38))(this);
	}
	template <typename T = Il2CppVector3> T GetVelocity(void** speed) {
		return ((T (*)(ActionPointData*, void**))(Il2CppBase() + 0x1C7134))(this, speed);
	}
	template <typename T = float> T GetTime(void* owner, float moveSpeed) {
		return ((T (*)(ActionPointData*, void*, float))(Il2CppBase() + 0x1C4B9C))(this, owner, moveSpeed);
	}
};
