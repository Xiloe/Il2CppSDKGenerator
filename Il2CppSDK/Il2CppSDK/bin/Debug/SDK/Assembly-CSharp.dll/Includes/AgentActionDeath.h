#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionDeath
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78734);
	}
	// Fields
	template <typename T = void*> T& Attacker() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& DecapType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& FromWeapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& WeaponType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& Impuls() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& BodyPart() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& BodyDisintegrated() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionDeath*))(Il2CppBase() + 0x19D8D4))(this);
	}
};
