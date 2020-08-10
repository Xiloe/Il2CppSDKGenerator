#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionRotate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78724);
	}
	// Fields
	template <typename T = void*> T& Rotation() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Angle() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionRotate*))(Il2CppBase() + 0x19E4AC))(this);
	}
};
