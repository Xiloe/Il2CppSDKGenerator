#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionCrawlToWeaponRange
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78F8C);
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
		return ((T (*)(GOAPActionCrawlToWeaponRange*, void*))(Il2CppBase() + 0x340ADC))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionCrawlToWeaponRange*))(Il2CppBase() + 0x340AEC))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionCrawlToWeaponRange*))(Il2CppBase() + 0x340B9C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GOAPActionCrawlToWeaponRange*))(Il2CppBase() + 0x341008))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionCrawlToWeaponRange*))(Il2CppBase() + 0x3411BC))(this);
	}
	template <typename T = void*> T ChooseMotionSide() {
		return ((T (*)(GOAPActionCrawlToWeaponRange*))(Il2CppBase() + 0x341338))(this);
	}
	template <typename T = void> T CreateAgentActionCrawlTo(Il2CppVector3 targetPos) {
		return ((T (*)(GOAPActionCrawlToWeaponRange*, Il2CppVector3))(Il2CppBase() + 0x340C64))(this, targetPos);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionCrawlToWeaponRange*))(Il2CppBase() + 0x341494))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionCrawlToWeaponRange*))(Il2CppBase() + 0x3415AC))(this);
	}
	template <typename T = void> T SolvePlanWSVariable(void* currentState, void* goalState) {
		return ((T (*)(GOAPActionCrawlToWeaponRange*, void*, void*))(Il2CppBase() + 0x3415E4))(this, currentState, goalState);
	}
	template <typename T = void> T SetPlanWSPreconditions(void* goalState) {
		return ((T (*)(GOAPActionCrawlToWeaponRange*, void*))(Il2CppBase() + 0x3415EC))(this, goalState);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionCrawlToWeaponRange*, void*, bool))(Il2CppBase() + 0x3415F4))(this, current, planning);
	}
};
