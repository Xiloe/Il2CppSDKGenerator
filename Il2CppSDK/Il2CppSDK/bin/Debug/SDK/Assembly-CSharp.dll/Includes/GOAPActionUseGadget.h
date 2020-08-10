#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionUseGadget
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FD8);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionUseGadget*, void*))(Il2CppBase() + 0x343B70))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionUseGadget*))(Il2CppBase() + 0x348558))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionUseGadget*))(Il2CppBase() + 0x3485A0))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionUseGadget*))(Il2CppBase() + 0x3486A0))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionUseGadget*))(Il2CppBase() + 0x348710))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionUseGadget*))(Il2CppBase() + 0x348740))(this);
	}
};
