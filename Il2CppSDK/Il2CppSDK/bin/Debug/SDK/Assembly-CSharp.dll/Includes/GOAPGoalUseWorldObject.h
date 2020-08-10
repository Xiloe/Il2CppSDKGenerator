#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalUseWorldObject
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79010);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPGoalUseWorldObject*, void*))(Il2CppBase() + 0x34CD10))(this, owner);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalUseWorldObject*))(Il2CppBase() + 0x34FE04))(this);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalUseWorldObject*))(Il2CppBase() + 0x34FE08))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalUseWorldObject*))(Il2CppBase() + 0x34FE44))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalUseWorldObject*))(Il2CppBase() + 0x34FEF8))(this);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalUseWorldObject*, void*))(Il2CppBase() + 0x34FF58))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalUseWorldObject*, void*))(Il2CppBase() + 0x34FF8C))(this, worldState);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalUseWorldObject*))(Il2CppBase() + 0x34FFD0))(this);
	}
};
