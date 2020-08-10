#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MeleeDamageData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Attacker() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& Impulse() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& WeaponType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MeleeDamageData*))(Il2CppBase() + 0x3E6FBC))(this);
	}
};
