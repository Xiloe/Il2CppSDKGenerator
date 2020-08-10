#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionPlayIdleAnim
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78730);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionPlayIdleAnim*))(Il2CppBase() + 0x19E50C))(this);
	}
};
