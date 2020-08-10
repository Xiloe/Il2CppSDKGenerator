#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddWeaponHitcAnonStoreyAF
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AddWeaponHitcAnonStoreyAF*))(Il2CppBase() + 0x205AA8))(this);
	}
	template <typename T = bool> T m__49(void* p) {
		return ((T (*)(AddWeaponHitcAnonStoreyAF*, void*))(Il2CppBase() + 0x206C04))(this, p);
	}
};
