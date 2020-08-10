#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionGoTo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD786EC);
	}
	// Fields
	template <typename T = bool> T& ReselectMoveAnim() {
		return *(T*)((uintptr_t)this + 0x2E);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionGoTo*))(Il2CppBase() + 0x19E398))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AgentActionGoTo*))(Il2CppBase() + 0x19E7E8))(this);
	}
};
