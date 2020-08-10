#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalCheckBait
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79024);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPGoalCheckBait*, void*))(Il2CppBase() + 0x34B188))(this, owner);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalCheckBait*))(Il2CppBase() + 0x34B194))(this);
	}
	template <typename T = bool> T Activate(void* plan) {
		return ((T (*)(GOAPGoalCheckBait*, void*))(Il2CppBase() + 0x34B198))(this, plan);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalCheckBait*))(Il2CppBase() + 0x34B1DC))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalCheckBait*))(Il2CppBase() + 0x34B218))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalCheckBait*))(Il2CppBase() + 0x34B2CC))(this);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalCheckBait*, void*))(Il2CppBase() + 0x34B2FC))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalCheckBait*, void*))(Il2CppBase() + 0x34B330))(this, worldState);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalCheckBait*))(Il2CppBase() + 0x34B3AC))(this);
	}
};
