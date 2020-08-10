#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionAttack
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD786FC);
	}
	// Fields
	template <typename T = Il2CppVector3> T& AttackDir() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionAttack*))(Il2CppBase() + 0x19D73C))(this);
	}
};
