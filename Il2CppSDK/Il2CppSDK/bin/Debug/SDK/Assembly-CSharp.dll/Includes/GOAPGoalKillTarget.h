#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalKillTarget
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79004);
	}
	// Fields
	template <typename T = float> static T& _DisabledForEverybodyTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPGoalKillTarget*, void*))(Il2CppBase() + 0x34CCEC))(this, owner);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x34DD00))(0);
	}
	template <typename T = float> T get_DisabledForEverybodyTimer() {
		return ((T (*)(GOAPGoalKillTarget*))(Il2CppBase() + 0x34DD04))(this);
	}
	template <typename T = void> T set_DisabledForEverybodyTimer(float value) {
		return ((T (*)(GOAPGoalKillTarget*, float))(Il2CppBase() + 0x34DDB4))(this, value);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalKillTarget*))(Il2CppBase() + 0x34DE74))(this);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalKillTarget*))(Il2CppBase() + 0x34DF6C))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalKillTarget*))(Il2CppBase() + 0x34DFA8))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalKillTarget*))(Il2CppBase() + 0x34E134))(this);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalKillTarget*, void*))(Il2CppBase() + 0x34E1AC))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalKillTarget*, void*))(Il2CppBase() + 0x34E1E0))(this, worldState);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalKillTarget*))(Il2CppBase() + 0x34E220))(this);
	}
	template <typename T = bool> T Activate(void* plan) {
		return ((T (*)(GOAPGoalKillTarget*, void*))(Il2CppBase() + 0x34E240))(this, plan);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPGoalKillTarget*))(Il2CppBase() + 0x34E2D0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GOAPGoalKillTarget*))(Il2CppBase() + 0x34E314))(this);
	}
};
