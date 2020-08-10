#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalWeaponReload
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79008);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPGoalWeaponReload*, void*))(Il2CppBase() + 0x34CCF8))(this, owner);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalWeaponReload*))(Il2CppBase() + 0x350284))(this);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalWeaponReload*))(Il2CppBase() + 0x350288))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalWeaponReload*))(Il2CppBase() + 0x3502C4))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalWeaponReload*))(Il2CppBase() + 0x350408))(this);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalWeaponReload*, void*))(Il2CppBase() + 0x350468))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalWeaponReload*, void*))(Il2CppBase() + 0x35049C))(this, worldState);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalWeaponReload*))(Il2CppBase() + 0x3504DC))(this);
	}
};
