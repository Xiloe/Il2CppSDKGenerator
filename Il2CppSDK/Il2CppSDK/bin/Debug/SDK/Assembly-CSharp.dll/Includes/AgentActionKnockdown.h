#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionKnockdown
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78738);
	}
	// Fields
	template <typename T = void*> T& Attacker() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& FromWeapon() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& Impuls() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Time() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionKnockdown*))(Il2CppBase() + 0x19E52C))(this);
	}
};
