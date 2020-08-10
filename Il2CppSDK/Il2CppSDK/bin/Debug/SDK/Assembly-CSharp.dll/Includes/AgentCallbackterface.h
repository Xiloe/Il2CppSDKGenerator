#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentCallbackterface
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T RecieveHit(void* attacker, void* weapon) {
		return ((T (*)(AgentCallbackterface*, void*, void*))(Il2CppBase() + 0x0))(this, attacker, weapon);
	}
	template <typename T = void> T RecieveKnockDown(void* attacker, void* weapon) {
		return ((T (*)(AgentCallbackterface*, void*, void*))(Il2CppBase() + 0x0))(this, attacker, weapon);
	}
	template <typename T = void> T GOAPGoalActivate(void* goal) {
		return ((T (*)(AgentCallbackterface*, void*))(Il2CppBase() + 0x0))(this, goal);
	}
	template <typename T = void> T GOAPGoalDeactivated(void* goal) {
		return ((T (*)(AgentCallbackterface*, void*))(Il2CppBase() + 0x0))(this, goal);
	}
};
