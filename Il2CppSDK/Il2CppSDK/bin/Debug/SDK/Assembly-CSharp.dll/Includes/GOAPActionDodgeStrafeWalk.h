#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionDodgeStrafeWalk
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FCC);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& FinalPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionDodgeStrafeWalk*, void*))(Il2CppBase() + 0x342E48))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionDodgeStrafeWalk*))(Il2CppBase() + 0x342E58))(this);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionDodgeStrafeWalk*, void*, bool))(Il2CppBase() + 0x342EA4))(this, current, planning);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionDodgeStrafeWalk*))(Il2CppBase() + 0x3430B4))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionDodgeStrafeWalk*))(Il2CppBase() + 0x3432F0))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionDodgeStrafeWalk*))(Il2CppBase() + 0x343344))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionDodgeStrafeWalk*))(Il2CppBase() + 0x34337C))(this);
	}
	template <typename T = void> T ActionStrafe() {
		return ((T (*)(GOAPActionDodgeStrafeWalk*))(Il2CppBase() + 0x343130))(this);
	}
};
