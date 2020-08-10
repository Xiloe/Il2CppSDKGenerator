#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionGoToWeaponRange
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78F88);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& NextPathRecalcTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& PrevBerserk() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& MotionType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionGoToWeaponRange*, void*))(Il2CppBase() + 0x343AC0))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionGoToWeaponRange*))(Il2CppBase() + 0x3448C8))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionGoToWeaponRange*))(Il2CppBase() + 0x344A00))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GOAPActionGoToWeaponRange*))(Il2CppBase() + 0x344FA4))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionGoToWeaponRange*))(Il2CppBase() + 0x34504C))(this);
	}
	template <typename T = void> T CreateAgentActionGoTo(Il2CppVector3 targetPos) {
		return ((T (*)(GOAPActionGoToWeaponRange*, Il2CppVector3))(Il2CppBase() + 0x344B08))(this, targetPos);
	}
	template <typename T = void> T SetMotionType() {
		return ((T (*)(GOAPActionGoToWeaponRange*))(Il2CppBase() + 0x344980))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionGoToWeaponRange*))(Il2CppBase() + 0x3451C8))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionGoToWeaponRange*))(Il2CppBase() + 0x3452EC))(this);
	}
	template <typename T = void> T SolvePlanWSVariable(void* currentState, void* goalState) {
		return ((T (*)(GOAPActionGoToWeaponRange*, void*, void*))(Il2CppBase() + 0x345458))(this, currentState, goalState);
	}
	template <typename T = void> T SetPlanWSPreconditions(void* goalState) {
		return ((T (*)(GOAPActionGoToWeaponRange*, void*))(Il2CppBase() + 0x345460))(this, goalState);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionGoToWeaponRange*, void*, bool))(Il2CppBase() + 0x345468))(this, current, planning);
	}
};
