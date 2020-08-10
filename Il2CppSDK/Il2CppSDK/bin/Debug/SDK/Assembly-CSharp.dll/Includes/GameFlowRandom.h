#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameFlowRandom
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
		return ((T (*)(GameFlowRandom*))(Il2CppBase() + 0x330B90))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GameFlowRandom*))(Il2CppBase() + 0x330B98))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GameFlowRandom*))(Il2CppBase() + 0x330D20))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(GameFlowRandom*))(Il2CppBase() + 0x330E08))(this);
	}
};
