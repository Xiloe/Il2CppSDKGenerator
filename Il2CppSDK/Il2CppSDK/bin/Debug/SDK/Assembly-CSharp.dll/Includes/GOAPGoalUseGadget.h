#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalUseGadget
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79030);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPGoalUseGadget*, void*))(Il2CppBase() + 0x34CD40))(this, owner);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalUseGadget*))(Il2CppBase() + 0x34FC18))(this);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalUseGadget*))(Il2CppBase() + 0x34FC1C))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalUseGadget*))(Il2CppBase() + 0x34FC58))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalUseGadget*))(Il2CppBase() + 0x34FD0C))(this);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalUseGadget*, void*))(Il2CppBase() + 0x34FD6C))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalUseGadget*, void*))(Il2CppBase() + 0x34FDA0))(this, worldState);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalUseGadget*))(Il2CppBase() + 0x34FDE4))(this);
	}
};
