#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionPlayAnim
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7872C);
	}
	// Fields
	template <typename T = Il2CppString*> T& AnimName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Invulnerable() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionPlayAnim*))(Il2CppBase() + 0x19E4EC))(this);
	}
};
