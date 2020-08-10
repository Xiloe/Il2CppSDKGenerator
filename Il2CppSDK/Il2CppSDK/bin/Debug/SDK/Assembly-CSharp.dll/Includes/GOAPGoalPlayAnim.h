#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalPlayAnim
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79014);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPGoalPlayAnim*, void*))(Il2CppBase() + 0x34CD1C))(this, owner);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalPlayAnim*))(Il2CppBase() + 0x34EB28))(this);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalPlayAnim*))(Il2CppBase() + 0x34EB2C))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalPlayAnim*))(Il2CppBase() + 0x34EB68))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalPlayAnim*))(Il2CppBase() + 0x34EC1C))(this);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalPlayAnim*, void*))(Il2CppBase() + 0x34EC4C))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalPlayAnim*, void*))(Il2CppBase() + 0x34EC80))(this, worldState);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalPlayAnim*))(Il2CppBase() + 0x34ECFC))(this);
	}
};
