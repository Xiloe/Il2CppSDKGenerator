#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionAttackVomit
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78F58);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> static T& TimeAllowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionAttackVomit*, void*))(Il2CppBase() + 0x33AC54))(this, owner);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x33AC64))(0);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionAttackVomit*))(Il2CppBase() + 0x33AC68))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionAttackVomit*))(Il2CppBase() + 0x33ACF0))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionAttackVomit*))(Il2CppBase() + 0x33AF30))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionAttackVomit*))(Il2CppBase() + 0x33B064))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionAttackVomit*))(Il2CppBase() + 0x33B094))(this);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionAttackVomit*, void*, bool))(Il2CppBase() + 0x33B104))(this, current, planning);
	}
};
