#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionCheckBait
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78F90);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionCheckBait*, void*))(Il2CppBase() + 0x33D834))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionCheckBait*))(Il2CppBase() + 0x33D844))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionCheckBait*))(Il2CppBase() + 0x33D8A8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GOAPActionCheckBait*))(Il2CppBase() + 0x33D900))(this);
	}
	template <typename T = float> T PlaySurpriseAnim() {
		return ((T (*)(GOAPActionCheckBait*))(Il2CppBase() + 0x33DC54))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionCheckBait*))(Il2CppBase() + 0x33EA9C))(this);
	}
	template <typename T = void> T CreateAgentActionGoTo(void* target) {
		return ((T (*)(GOAPActionCheckBait*, void*))(Il2CppBase() + 0x33E4F0))(this, target);
	}
	template <typename T = void*> T ChooseMotionSide() {
		return ((T (*)(GOAPActionCheckBait*))(Il2CppBase() + 0x33EC44))(this);
	}
	template <typename T = void> T CreateAgentActionCrawlTo(void* target) {
		return ((T (*)(GOAPActionCheckBait*, void*))(Il2CppBase() + 0x33E7DC))(this, target);
	}
	template <typename T = void*> T CompareDistance(void* first, void* second) {
		return ((T (*)(GOAPActionCheckBait*, void*, void*))(Il2CppBase() + 0x33EDA0))(this, first, second);
	}
	template <typename T = void*> T FindTheBestBait() {
		return ((T (*)(GOAPActionCheckBait*))(Il2CppBase() + 0x33E028))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionCheckBait*))(Il2CppBase() + 0x33EF5C))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionCheckBait*))(Il2CppBase() + 0x33EFCC))(this);
	}
	template <typename T = void> T SolvePlanWSVariable(void* currentState, void* goalState) {
		return ((T (*)(GOAPActionCheckBait*, void*, void*))(Il2CppBase() + 0x33F004))(this, currentState, goalState);
	}
	template <typename T = void> T SetPlanWSPreconditions(void* goalState) {
		return ((T (*)(GOAPActionCheckBait*, void*))(Il2CppBase() + 0x33F00C))(this, goalState);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionCheckBait*, void*, bool))(Il2CppBase() + 0x33F014))(this, current, planning);
	}
};
