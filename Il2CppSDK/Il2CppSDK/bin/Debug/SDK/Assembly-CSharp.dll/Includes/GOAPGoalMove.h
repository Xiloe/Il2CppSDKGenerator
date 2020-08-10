#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalMove
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FFC);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPGoalMove*, void*))(Il2CppBase() + 0x34CCD4))(this, owner);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalMove*))(Il2CppBase() + 0x34E880))(this);
	}
	template <typename T = bool> T Activate(void* plan) {
		return ((T (*)(GOAPGoalMove*, void*))(Il2CppBase() + 0x34E884))(this, plan);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPGoalMove*))(Il2CppBase() + 0x34E888))(this);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalMove*))(Il2CppBase() + 0x34E88C))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalMove*))(Il2CppBase() + 0x34E8C8))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalMove*))(Il2CppBase() + 0x34E98C))(this);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalMove*, void*))(Il2CppBase() + 0x34E9EC))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalMove*, void*))(Il2CppBase() + 0x34EA20))(this, worldState);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalMove*))(Il2CppBase() + 0x34EA9C))(this);
	}
};
