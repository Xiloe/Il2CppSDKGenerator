#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalFallBack
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FF0);
	}
	// Fields
	template <typename T = float> static T& _DisabledForEverybodyTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& AdvancePos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPGoalFallBack*, void*))(Il2CppBase() + 0x34CCB0))(this, owner);
	}
	template <typename T = float> T get_DisabledForEverybodyTimer() {
		return ((T (*)(GOAPGoalFallBack*))(Il2CppBase() + 0x34CD4C))(this);
	}
	template <typename T = void> T set_DisabledForEverybodyTimer(float value) {
		return ((T (*)(GOAPGoalFallBack*, float))(Il2CppBase() + 0x34CDCC))(this, value);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalFallBack*))(Il2CppBase() + 0x34CE58))(this);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalFallBack*))(Il2CppBase() + 0x34CEA8))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalFallBack*))(Il2CppBase() + 0x34CEE4))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalFallBack*))(Il2CppBase() + 0x34D304))(this);
	}
	template <typename T = void> T ChangeCurrentWSForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalFallBack*, void*))(Il2CppBase() + 0x34D364))(this, worldState);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalFallBack*, void*))(Il2CppBase() + 0x34D3C8))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalFallBack*, void*))(Il2CppBase() + 0x34D42C))(this, worldState);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalFallBack*))(Il2CppBase() + 0x34D4A8))(this);
	}
	template <typename T = bool> T Activate(void* plan) {
		return ((T (*)(GOAPGoalFallBack*, void*))(Il2CppBase() + 0x34D5A4))(this, plan);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPGoalFallBack*))(Il2CppBase() + 0x34D658))(this);
	}
};
