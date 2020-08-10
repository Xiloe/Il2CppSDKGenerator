#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddWeaponUsecAnonStoreyAE
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
		return ((T (*)(AddWeaponUsecAnonStoreyAE*))(Il2CppBase() + 0x205888))(this);
	}
	template <typename T = bool> T m__48(void* p) {
		return ((T (*)(AddWeaponUsecAnonStoreyAE*, void*))(Il2CppBase() + 0x206C18))(this, p);
	}
};
