#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalRunAway
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FF4);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPGoalRunAway*, void*))(Il2CppBase() + 0x34CCBC))(this, owner);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalRunAway*))(Il2CppBase() + 0x34ED1C))(this);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalRunAway*))(Il2CppBase() + 0x34ED28))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalRunAway*))(Il2CppBase() + 0x34ED64))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalRunAway*))(Il2CppBase() + 0x34EE3C))(this);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalRunAway*, void*))(Il2CppBase() + 0x34EE9C))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalRunAway*, void*))(Il2CppBase() + 0x34EED0))(this, worldState);
	}
	template <typename T = bool> T Activate(void* plan) {
		return ((T (*)(GOAPGoalRunAway*, void*))(Il2CppBase() + 0x34EF4C))(this, plan);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalRunAway*))(Il2CppBase() + 0x34EFA0))(this);
	}
};
