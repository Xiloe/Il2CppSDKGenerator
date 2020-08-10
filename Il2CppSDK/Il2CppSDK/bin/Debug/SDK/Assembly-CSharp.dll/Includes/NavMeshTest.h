#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NavMeshTest
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& UseRotationFromNavMeshAgent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& m_StartPos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_CurrentPosIdx() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<void*>*> T& m_TargetPos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_NavMeshAgent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(NavMeshTest*))(Il2CppBase() + 0x40E510))(this);
	}
	template <typename T = Il2CppVector3> T get_getTargetPos() {
		return ((T (*)(NavMeshTest*))(Il2CppBase() + 0x40E5C0))(this);
	}
	template <typename T = void> T NextPos() {
		return ((T (*)(NavMeshTest*))(Il2CppBase() + 0x40E63C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(NavMeshTest*))(Il2CppBase() + 0x40E67C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(NavMeshTest*))(Il2CppBase() + 0x40EB38))(this);
	}
};
