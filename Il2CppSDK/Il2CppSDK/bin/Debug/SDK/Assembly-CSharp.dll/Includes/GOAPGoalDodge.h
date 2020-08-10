#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalDodge
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FE4);
	}
	// Fields
	template <typename T = float> static T& _DisabledForEverybodyTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& WorldStateTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPGoalDodge*, void*))(Il2CppBase() + 0x34C100))(this, owner);
	}
	template <typename T = float> T get_DisabledForEverybodyTimer() {
		return ((T (*)(GOAPGoalDodge*))(Il2CppBase() + 0x34C10C))(this);
	}
	template <typename T = void> T set_DisabledForEverybodyTimer(float value) {
		return ((T (*)(GOAPGoalDodge*, float))(Il2CppBase() + 0x34C18C))(this, value);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalDodge*))(Il2CppBase() + 0x34C218))(this);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalDodge*))(Il2CppBase() + 0x34C268))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalDodge*))(Il2CppBase() + 0x34C2A4))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalDodge*))(Il2CppBase() + 0x34C460))(this);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalDodge*, void*))(Il2CppBase() + 0x34C4C0))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalDodge*, void*))(Il2CppBase() + 0x34C4F4))(this, worldState);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalDodge*))(Il2CppBase() + 0x34C534))(this);
	}
};
