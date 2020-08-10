#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameFlowNode
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_NESController() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GameFlowNode*))(Il2CppBase() + 0x32CAE4))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GameFlowNode*))(Il2CppBase() + 0x32CAEC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GameFlowNode*))(Il2CppBase() + 0x32CBA4))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(GameFlowNode*))(Il2CppBase() + 0x32CC8C))(this);
	}
};
