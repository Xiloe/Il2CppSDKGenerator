#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionDodgeStrafe
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78744);
	}
	// Fields
	template <typename T = void*> T& StrafeDirection() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Motion() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& AnimationDriven() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& FinalPos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionDodgeStrafe*))(Il2CppBase() + 0x19D900))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AgentActionDodgeStrafe*))(Il2CppBase() + 0x19D920))(this);
	}
};
