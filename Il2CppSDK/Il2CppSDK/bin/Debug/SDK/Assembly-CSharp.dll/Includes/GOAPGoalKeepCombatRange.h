#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalKeepCombatRange
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FF8);
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
		return ((T (*)(GOAPGoalKeepCombatRange*, void*))(Il2CppBase() + 0x34CCC8))(this, owner);
	}
	template <typename T = float> T get_DisabledForEverybodyTimer() {
		return ((T (*)(GOAPGoalKeepCombatRange*))(Il2CppBase() + 0x34D65C))(this);
	}
	template <typename T = void> T set_DisabledForEverybodyTimer(float value) {
		return ((T (*)(GOAPGoalKeepCombatRange*, float))(Il2CppBase() + 0x34D6DC))(this, value);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalKeepCombatRange*))(Il2CppBase() + 0x34D768))(this);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalKeepCombatRange*))(Il2CppBase() + 0x34D7B8))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalKeepCombatRange*))(Il2CppBase() + 0x34D7F4))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalKeepCombatRange*))(Il2CppBase() + 0x34DA64))(this);
	}
	template <typename T = void> T ChangeCurrentWSForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalKeepCombatRange*, void*))(Il2CppBase() + 0x34DAC4))(this, worldState);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalKeepCombatRange*, void*))(Il2CppBase() + 0x34DB28))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalKeepCombatRange*, void*))(Il2CppBase() + 0x34DBA0))(this, worldState);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalKeepCombatRange*))(Il2CppBase() + 0x34DC1C))(this);
	}
	template <typename T = bool> T Activate(void* plan) {
		return ((T (*)(GOAPGoalKeepCombatRange*, void*))(Il2CppBase() + 0x34DC3C))(this, plan);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPGoalKeepCombatRange*))(Il2CppBase() + 0x34DCFC))(this);
	}
};
