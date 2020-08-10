#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VelocityTest
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_AttackSettings() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_NavMeshAgent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Target() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_IsRotatingToTarget() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(VelocityTest*))(Il2CppBase() + 0x27A214))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(VelocityTest*))(Il2CppBase() + 0x27A21C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(VelocityTest*))(Il2CppBase() + 0x27A3C0))(this);
	}
	template <typename T = bool> T Attack_IsTargetPosValid() {
		return ((T (*)(VelocityTest*))(Il2CppBase() + 0x27A9EC))(this);
	}
	template <typename T = void> T Attack_GenerateNewTargetPos() {
		return ((T (*)(VelocityTest*))(Il2CppBase() + 0x27AA64))(this);
	}
	template <typename T = Il2CppQuaternion> T RotateToward(Il2CppQuaternion inFrom, Il2CppQuaternion inTo, float inRotSpeed, float inTime) {
		return ((T (*)(VelocityTest*, Il2CppQuaternion, Il2CppQuaternion, float, float))(Il2CppBase() + 0x27AE58))(this, inFrom, inTo, inRotSpeed, inTime);
	}
	template <typename T = void*> T RotateToTarget() {
		return ((T (*)(VelocityTest*))(Il2CppBase() + 0x27ADB4))(this);
	}
};
