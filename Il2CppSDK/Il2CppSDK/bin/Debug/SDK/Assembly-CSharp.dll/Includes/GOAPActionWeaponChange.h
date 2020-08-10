#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionWeaponChange
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FAC);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionWeaponChange*, void*))(Il2CppBase() + 0x343AF0))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionWeaponChange*))(Il2CppBase() + 0x3487BC))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionWeaponChange*))(Il2CppBase() + 0x348804))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionWeaponChange*))(Il2CppBase() + 0x348968))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionWeaponChange*))(Il2CppBase() + 0x3489BC))(this);
	}
};
