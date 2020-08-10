#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionAttackMelee
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FBC);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionAttackMelee*, void*))(Il2CppBase() + 0x33A608))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionAttackMelee*))(Il2CppBase() + 0x33A618))(this);
	}
	template <typename T = void*> T ChooseWeaponAction() {
		return ((T (*)(GOAPActionAttackMelee*))(Il2CppBase() + 0x33A6BC))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionAttackMelee*))(Il2CppBase() + 0x33A824))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionAttackMelee*))(Il2CppBase() + 0x33A9A0))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionAttackMelee*))(Il2CppBase() + 0x33AAD4))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionAttackMelee*))(Il2CppBase() + 0x33AB04))(this);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionAttackMelee*, void*, bool))(Il2CppBase() + 0x33AB74))(this, current, planning);
	}
};
