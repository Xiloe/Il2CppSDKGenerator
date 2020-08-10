#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionContest
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78708);
	}
	// Fields
	template <typename T = void*> T& Enemy() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionContest*))(Il2CppBase() + 0x19D7B4))(this);
	}
};
