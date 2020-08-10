#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionShielderGoTo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionShielderGoTo*, void*))(Il2CppBase() + 0x3473AC))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionShielderGoTo*))(Il2CppBase() + 0x3473BC))(this);
	}
	template <typename T = void> T SolvePlanWSVariable(void* currentState, void* goalState) {
		return ((T (*)(GOAPActionShielderGoTo*, void*, void*))(Il2CppBase() + 0x34740C))(this, currentState, goalState);
	}
	template <typename T = void> T SetPlanWSPreconditions(void* goalState) {
		return ((T (*)(GOAPActionShielderGoTo*, void*))(Il2CppBase() + 0x347484))(this, goalState);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionShielderGoTo*, void*, bool))(Il2CppBase() + 0x347508))(this, current, planning);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionShielderGoTo*))(Il2CppBase() + 0x3475A8))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionShielderGoTo*))(Il2CppBase() + 0x34797C))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionShielderGoTo*))(Il2CppBase() + 0x347BEC))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionShielderGoTo*))(Il2CppBase() + 0x347C24))(this);
	}
	template <typename T = void*> T GetMoveType() {
		return ((T (*)(GOAPActionShielderGoTo*))(Il2CppBase() + 0x347754))(this);
	}
};
