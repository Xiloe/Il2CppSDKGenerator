#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalWeaponChange
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7900C);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPGoalWeaponChange*, void*))(Il2CppBase() + 0x34CD04))(this, owner);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalWeaponChange*))(Il2CppBase() + 0x34FFF0))(this);
	}
	template <typename T = bool> T Activate(void* plan) {
		return ((T (*)(GOAPGoalWeaponChange*, void*))(Il2CppBase() + 0x34FFF4))(this, plan);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPGoalWeaponChange*))(Il2CppBase() + 0x35002C))(this);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalWeaponChange*))(Il2CppBase() + 0x350064))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalWeaponChange*))(Il2CppBase() + 0x3500A0))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalWeaponChange*))(Il2CppBase() + 0x350154))(this);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalWeaponChange*, void*))(Il2CppBase() + 0x3501B4))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalWeaponChange*, void*))(Il2CppBase() + 0x3501E8))(this, worldState);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalWeaponChange*))(Il2CppBase() + 0x350264))(this);
	}
};
