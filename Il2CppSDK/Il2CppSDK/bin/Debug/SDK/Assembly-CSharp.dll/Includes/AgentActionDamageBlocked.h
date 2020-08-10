#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionDamageBlocked
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78714);
	}
	// Fields
	template <typename T = void*> T& Attacker() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& BreakBlock() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionDamageBlocked*))(Il2CppBase() + 0x19D8A8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AgentActionDamageBlocked*))(Il2CppBase() + 0x19D8C8))(this);
	}
};
