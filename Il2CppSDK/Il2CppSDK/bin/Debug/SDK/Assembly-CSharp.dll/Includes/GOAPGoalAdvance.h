#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalAdvance
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FEC);
	}
	// Fields
	template <typename T = Il2CppVector3> T& AdvancePos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& Path() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPGoalAdvance*, void*))(Il2CppBase() + 0x34A8F8))(this, owner);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalAdvance*))(Il2CppBase() + 0x34A904))(this);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalAdvance*))(Il2CppBase() + 0x34A99C))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalAdvance*))(Il2CppBase() + 0x34A9D8))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalAdvance*))(Il2CppBase() + 0x34AD28))(this);
	}
	template <typename T = void> T ChangeCurrentWSForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalAdvance*, void*))(Il2CppBase() + 0x34AD88))(this, worldState);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalAdvance*, void*))(Il2CppBase() + 0x34ADEC))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalAdvance*, void*))(Il2CppBase() + 0x34AE50))(this, worldState);
	}
	template <typename T = bool> T IsPlanValid() {
		return ((T (*)(GOAPGoalAdvance*))(Il2CppBase() + 0x34AECC))(this);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalAdvance*))(Il2CppBase() + 0x34B0AC))(this);
	}
	template <typename T = bool> T Activate(void* plan) {
		return ((T (*)(GOAPGoalAdvance*, void*))(Il2CppBase() + 0x34B0CC))(this, plan);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPGoalAdvance*))(Il2CppBase() + 0x34B184))(this);
	}
};
