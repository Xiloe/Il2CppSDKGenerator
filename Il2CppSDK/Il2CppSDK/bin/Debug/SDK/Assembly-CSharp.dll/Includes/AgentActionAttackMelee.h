#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionAttackMelee
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78700);
	}
	// Fields
	template <typename T = Il2CppVector3> T& AttackDir() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& WeaponAction() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionAttackMelee*))(Il2CppBase() + 0x19D75C))(this);
	}
};
