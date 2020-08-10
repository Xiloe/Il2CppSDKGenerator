#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalSpawnAction
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FE8);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPGoalSpawnAction*, void*))(Il2CppBase() + 0x34CCA4))(this, owner);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalSpawnAction*))(Il2CppBase() + 0x34EFC0))(this);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalSpawnAction*))(Il2CppBase() + 0x34EFCC))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalSpawnAction*))(Il2CppBase() + 0x34EFD8))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalSpawnAction*))(Il2CppBase() + 0x34F06C))(this);
	}
	template <typename T = void> T ChangeCurrentWSForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalSpawnAction*, void*))(Il2CppBase() + 0x34F09C))(this, worldState);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalSpawnAction*, void*))(Il2CppBase() + 0x34F0A0))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalSpawnAction*, void*))(Il2CppBase() + 0x34F0A4))(this, worldState);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalSpawnAction*))(Il2CppBase() + 0x34F0AC))(this);
	}
	template <typename T = bool> T Activate(void* plan) {
		return ((T (*)(GOAPGoalSpawnAction*, void*))(Il2CppBase() + 0x34F0CC))(this, plan);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPGoalSpawnAction*))(Il2CppBase() + 0x34F160))(this);
	}
};
