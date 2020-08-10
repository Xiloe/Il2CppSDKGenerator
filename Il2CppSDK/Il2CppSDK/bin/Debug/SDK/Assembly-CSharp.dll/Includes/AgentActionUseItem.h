#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionUseItem
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78748);
	}
	// Fields
	template <typename T = bool> T& Throw() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionUseItem*))(Il2CppBase() + 0x19E58C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AgentActionUseItem*))(Il2CppBase() + 0x19E868))(this);
	}
};
