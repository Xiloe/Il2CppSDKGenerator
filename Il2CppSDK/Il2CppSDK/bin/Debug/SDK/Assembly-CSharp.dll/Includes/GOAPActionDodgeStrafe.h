#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionDodgeStrafe
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FC8);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& StrafeDirection() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionDodgeStrafe*, void*))(Il2CppBase() + 0x342618))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionDodgeStrafe*))(Il2CppBase() + 0x342628))(this);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionDodgeStrafe*, void*, bool))(Il2CppBase() + 0x342674))(this, current, planning);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionDodgeStrafe*))(Il2CppBase() + 0x342B64))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionDodgeStrafe*))(Il2CppBase() + 0x342D40))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionDodgeStrafe*))(Il2CppBase() + 0x342D94))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionDodgeStrafe*))(Il2CppBase() + 0x342DCC))(this);
	}
	template <typename T = void> T ActionStrafe() {
		return ((T (*)(GOAPActionDodgeStrafe*))(Il2CppBase() + 0x342BE0))(this);
	}
};
