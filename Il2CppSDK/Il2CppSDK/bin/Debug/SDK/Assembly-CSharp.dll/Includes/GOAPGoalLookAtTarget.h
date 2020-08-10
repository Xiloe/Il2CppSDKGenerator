#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalLookAtTarget
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79000);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPGoalLookAtTarget*, void*))(Il2CppBase() + 0x34CCE0))(this, owner);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalLookAtTarget*))(Il2CppBase() + 0x34E318))(this);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalLookAtTarget*))(Il2CppBase() + 0x34E31C))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalLookAtTarget*))(Il2CppBase() + 0x34E358))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalLookAtTarget*))(Il2CppBase() + 0x34E6F0))(this);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalLookAtTarget*, void*))(Il2CppBase() + 0x34E750))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalLookAtTarget*, void*))(Il2CppBase() + 0x34E784))(this, worldState);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalLookAtTarget*))(Il2CppBase() + 0x34E800))(this);
	}
	template <typename T = bool> T ReplanRequired() {
		return ((T (*)(GOAPGoalLookAtTarget*))(Il2CppBase() + 0x34E874))(this);
	}
	template <typename T = bool> T Activate(void* plan) {
		return ((T (*)(GOAPGoalLookAtTarget*, void*))(Il2CppBase() + 0x34E87C))(this, plan);
	}
};
