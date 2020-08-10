#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionRoll
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78718);
	}
	// Fields
	template <typename T = Il2CppVector3> T& Direction() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& ToTarget() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionRoll*))(Il2CppBase() + 0x19E44C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AgentActionRoll*))(Il2CppBase() + 0x19E858))(this);
	}
};
