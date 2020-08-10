#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AgentActionInjury
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7870C);
	}
	// Fields
	template <typename T = void*> T& Attacker() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& FromWeapon() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& WeaponType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& Impuls() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& BodyPart() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& PlayAnim() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& Destroy() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = void*> T& Direction() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AgentActionInjury*))(Il2CppBase() + 0x19E400))(this);
	}
};
