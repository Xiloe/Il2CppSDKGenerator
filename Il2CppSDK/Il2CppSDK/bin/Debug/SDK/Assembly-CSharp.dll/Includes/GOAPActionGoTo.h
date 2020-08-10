#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionGoTo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78F84);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionGoTo*, void*))(Il2CppBase() + 0x343AB0))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionGoTo*))(Il2CppBase() + 0x344308))(this);
	}
	template <typename T = void> T SolvePlanWSVariable(void* currentState, void* goalState) {
		return ((T (*)(GOAPActionGoTo*, void*, void*))(Il2CppBase() + 0x344354))(this, currentState, goalState);
	}
	template <typename T = void> T SetPlanWSPreconditions(void* goalState) {
		return ((T (*)(GOAPActionGoTo*, void*))(Il2CppBase() + 0x3443CC))(this, goalState);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionGoTo*, void*, bool))(Il2CppBase() + 0x3443D4))(this, current, planning);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionGoTo*))(Il2CppBase() + 0x344470))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionGoTo*))(Il2CppBase() + 0x3446DC))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionGoTo*))(Il2CppBase() + 0x344858))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionGoTo*))(Il2CppBase() + 0x344890))(this);
	}
};
