#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionUse
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78728);
	}
	// Fields
	template <typename T = void*> T& InterObj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionUse*))(Il2CppBase() + 0x19E4CC))(this);
	}
};
