#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalCriticalInjury
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79018);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPGoalCriticalInjury*, void*))(Il2CppBase() + 0x34BC54))(this, owner);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalCriticalInjury*))(Il2CppBase() + 0x34BC60))(this);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalCriticalInjury*))(Il2CppBase() + 0x34BC64))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalCriticalInjury*))(Il2CppBase() + 0x34BCA0))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalCriticalInjury*))(Il2CppBase() + 0x34BD50))(this);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalCriticalInjury*, void*))(Il2CppBase() + 0x34BDB0))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalCriticalInjury*, void*))(Il2CppBase() + 0x34BDE4))(this, worldState);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalCriticalInjury*))(Il2CppBase() + 0x34BE60))(this);
	}
};
