#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionIncommingAttack
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7871C);
	}
	// Fields
	template <typename T = void*> T& Attacker() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& HitTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionIncommingAttack*))(Il2CppBase() + 0x19E46C))(this);
	}
};
