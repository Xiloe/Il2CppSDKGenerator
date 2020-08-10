#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionInjuryCrit
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78710);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionInjuryCrit*))(Il2CppBase() + 0x19E42C))(this);
	}
};
