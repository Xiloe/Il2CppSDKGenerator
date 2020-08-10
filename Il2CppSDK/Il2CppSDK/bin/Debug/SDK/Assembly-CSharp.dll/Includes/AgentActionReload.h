#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionReload
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78740);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionReload*))(Il2CppBase() + 0x19E56C))(this);
	}
};
