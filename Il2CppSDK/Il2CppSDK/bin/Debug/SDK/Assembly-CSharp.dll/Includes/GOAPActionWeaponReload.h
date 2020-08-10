#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionWeaponReload
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FB0);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionWeaponReload*, void*))(Il2CppBase() + 0x343B00))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionWeaponReload*))(Il2CppBase() + 0x3489EC))(this);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionWeaponReload*, void*, bool))(Il2CppBase() + 0x348A3C))(this, current, planning);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionWeaponReload*))(Il2CppBase() + 0x348AA0))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionWeaponReload*))(Il2CppBase() + 0x348BD8))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionWeaponReload*))(Il2CppBase() + 0x348C84))(this);
	}
};
