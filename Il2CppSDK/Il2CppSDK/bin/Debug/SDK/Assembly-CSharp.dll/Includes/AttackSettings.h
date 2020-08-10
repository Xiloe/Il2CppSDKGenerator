#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AttackSettings
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& m_AgentSpeed() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_AgentAcceleration() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_AgentAngularSpeed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_RotSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_MoveWaitTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_ActiveZoneMin() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_ActiveZoneMax() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& m_MoveTargetPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_IsMoving() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_LastMoveTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AttackSettings*))(Il2CppBase() + 0x27B324))(this);
	}
	template <typename T = float> T get_dbg_getStopMoveDistance() {
		return ((T (*)(AttackSettings*))(Il2CppBase() + 0x27B378))(this);
	}
};
