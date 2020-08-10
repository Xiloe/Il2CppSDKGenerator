#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalDestroyObject
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79028);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPGoalDestroyObject*, void*))(Il2CppBase() + 0x34BE80))(this, owner);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalDestroyObject*))(Il2CppBase() + 0x34BE8C))(this);
	}
	template <typename T = bool> T Activate(void* plan) {
		return ((T (*)(GOAPGoalDestroyObject*, void*))(Il2CppBase() + 0x34BE90))(this, plan);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalDestroyObject*))(Il2CppBase() + 0x34BED4))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalDestroyObject*))(Il2CppBase() + 0x34BF10))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalDestroyObject*))(Il2CppBase() + 0x34C000))(this);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalDestroyObject*, void*))(Il2CppBase() + 0x34C030))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalDestroyObject*, void*))(Il2CppBase() + 0x34C064))(this, worldState);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalDestroyObject*))(Il2CppBase() + 0x34C0E0))(this);
	}
};
