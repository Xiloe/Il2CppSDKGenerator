#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionPoint
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& AgentInvulnerable() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_AnimMove() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_AnimRun() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ActionPoint*))(Il2CppBase() + 0x197FAC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ActionPoint*))(Il2CppBase() + 0x198068))(this);
	}
};
