#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalSuppressed
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7901C);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPGoalSuppressed*, void*))(Il2CppBase() + 0x34CD28))(this, owner);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalSuppressed*))(Il2CppBase() + 0x34F2D0))(this);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalSuppressed*))(Il2CppBase() + 0x34F2D4))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalSuppressed*))(Il2CppBase() + 0x34F310))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalSuppressed*))(Il2CppBase() + 0x34F36C))(this);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalSuppressed*, void*))(Il2CppBase() + 0x34F3CC))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalSuppressed*, void*))(Il2CppBase() + 0x34F400))(this, worldState);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalSuppressed*))(Il2CppBase() + 0x34F440))(this);
	}
};
