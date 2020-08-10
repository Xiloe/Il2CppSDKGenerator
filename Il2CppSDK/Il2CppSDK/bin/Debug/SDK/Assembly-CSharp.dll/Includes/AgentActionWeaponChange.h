#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionWeaponChange
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78720);
	}
	// Fields
	template <typename T = void*> T& NewWeapon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionWeaponChange*))(Il2CppBase() + 0x19E48C))(this);
	}
};
