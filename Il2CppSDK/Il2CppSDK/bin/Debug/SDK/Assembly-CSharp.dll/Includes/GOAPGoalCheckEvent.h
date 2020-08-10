#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalCheckEvent
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FE0);
	}
	// Fields
	template <typename T = float> static T& _DisabledForEverybodyTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& CheckingEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPGoalCheckEvent*, void*))(Il2CppBase() + 0x34B3CC))(this, owner);
	}
	template <typename T = float> T get_DisabledForEverybodyTimer() {
		return ((T (*)(GOAPGoalCheckEvent*))(Il2CppBase() + 0x34B3D8))(this);
	}
	template <typename T = void> T set_DisabledForEverybodyTimer(float value) {
		return ((T (*)(GOAPGoalCheckEvent*, float))(Il2CppBase() + 0x34B458))(this, value);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalCheckEvent*))(Il2CppBase() + 0x34B4E4))(this);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalCheckEvent*))(Il2CppBase() + 0x34B534))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalCheckEvent*))(Il2CppBase() + 0x34B570))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalCheckEvent*))(Il2CppBase() + 0x34B88C))(this);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalCheckEvent*, void*))(Il2CppBase() + 0x34B8EC))(this, worldState);
	}
	template <typename T = void> T ChangeCurrentWSForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalCheckEvent*, void*))(Il2CppBase() + 0x34B920))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalCheckEvent*, void*))(Il2CppBase() + 0x34B954))(this, worldState);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalCheckEvent*))(Il2CppBase() + 0x34B9A4))(this);
	}
	template <typename T = bool> T ReplanRequired() {
		return ((T (*)(GOAPGoalCheckEvent*))(Il2CppBase() + 0x34B9C4))(this);
	}
	template <typename T = bool> T Activate(void* plan) {
		return ((T (*)(GOAPGoalCheckEvent*, void*))(Il2CppBase() + 0x34B9CC))(this, plan);
	}
};
