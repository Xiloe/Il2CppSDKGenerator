#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalContest
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7902C);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPGoalContest*, void*))(Il2CppBase() + 0x34BA10))(this, owner);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalContest*))(Il2CppBase() + 0x34BA1C))(this);
	}
	template <typename T = bool> T Activate(void* plan) {
		return ((T (*)(GOAPGoalContest*, void*))(Il2CppBase() + 0x34BA20))(this, plan);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalContest*))(Il2CppBase() + 0x34BA64))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalContest*))(Il2CppBase() + 0x34BAA0))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalContest*))(Il2CppBase() + 0x34BB54))(this);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalContest*, void*))(Il2CppBase() + 0x34BB84))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalContest*, void*))(Il2CppBase() + 0x34BBB8))(this, worldState);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalContest*))(Il2CppBase() + 0x34BC34))(this);
	}
};
