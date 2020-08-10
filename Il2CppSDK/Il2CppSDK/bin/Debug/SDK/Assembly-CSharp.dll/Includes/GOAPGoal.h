#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoal
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78FDC);
	}
	// Fields
	template <typename T = void*> T& Plan() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> static T& id() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& UID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& Owner() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& GoalRelevancy() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& FailChance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& GoalType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& NextEvaluationTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& DisabledForEverybodyTimer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& DisabledForEverybodyDelay() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor(void* type, void* ai) {
		return ((T (*)(GOAPGoal*, void*, void*))(Il2CppBase() + 0x348CB4))(this, type, ai);
	}
	template <typename T = void*> T get_Owner() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x348D5C))(this);
	}
	template <typename T = void> T set_Owner(void* value) {
		return ((T (*)(GOAPGoal*, void*))(Il2CppBase() + 0x348D4C))(this, value);
	}
	template <typename T = float> T get_GoalRelevancy() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x348D64))(this);
	}
	template <typename T = void> T set_GoalRelevancy(float value) {
		return ((T (*)(GOAPGoal*, float))(Il2CppBase() + 0x348D6C))(this, value);
	}
	template <typename T = int32_t> T get_FailChance() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x348D74))(this);
	}
	template <typename T = void> T set_FailChance(int32_t value) {
		return ((T (*)(GOAPGoal*, int32_t))(Il2CppBase() + 0x348D54))(this, value);
	}
	template <typename T = void*> T get_GoalType() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x348D7C))(this);
	}
	template <typename T = void> T set_GoalType(void* value) {
		return ((T (*)(GOAPGoal*, void*))(Il2CppBase() + 0x348D44))(this, value);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x348D84))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(GOAPGoal*, bool))(Il2CppBase() + 0x348D8C))(this, value);
	}
	template <typename T = float> T get_NextEvaluationTime() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x348D94))(this);
	}
	template <typename T = void> T set_NextEvaluationTime(float value) {
		return ((T (*)(GOAPGoal*, float))(Il2CppBase() + 0x348D9C))(this, value);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoal*, void*))(Il2CppBase() + 0x0))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoal*, void*))(Il2CppBase() + 0x0))(this, worldState);
	}
	template <typename T = void> T ChangeCurrentWSForPlanning(void* worldState) {
		return ((T (*)(GOAPGoal*, void*))(Il2CppBase() + 0x348DA4))(this, worldState);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ClearGoalRelevancy() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x348DA8))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x348DB4))(this);
	}
	template <typename T = bool> T ReplanRequired() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x348E00))(this);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsDisabled() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x348E08))(this);
	}
	template <typename T = float> T get_DisabledForEverybodyTimer() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x348E44))(this);
	}
	template <typename T = void> T set_DisabledForEverybodyTimer(float value) {
		return ((T (*)(GOAPGoal*, float))(Il2CppBase() + 0x348E4C))(this, value);
	}
	template <typename T = float> T get_DisabledForEverybodyDelay() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x348E54))(this);
	}
	template <typename T = void> T set_DisabledForEverybodyDelay(float value) {
		return ((T (*)(GOAPGoal*, float))(Il2CppBase() + 0x348E5C))(this, value);
	}
	template <typename T = void> T DisableGoalForEveryone() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x348E64))(this);
	}
	template <typename T = bool> T IsDisabledForEveryone() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x348F54))(this);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T UpdateGoal() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x348FC0))(this);
	}
	template <typename T = bool> T Activate(void* plan) {
		return ((T (*)(GOAPGoal*, void*))(Il2CppBase() + 0x349320))(this, plan);
	}
	template <typename T = void> T ReplanReset() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x349860))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x349C74))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x349FD0))(this);
	}
	template <typename T = bool> T IsPlanInterruptible() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x34A324))(this);
	}
	template <typename T = bool> T IsPlanValid() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x34A40C))(this);
	}
	template <typename T = bool> T IsPlanFinished() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x34A49C))(this);
	}
	template <typename T = void*> T GetPlan() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x34A568))(this);
	}
	template <typename T = void> T HandlePlanBuildFailure() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x34A570))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GOAPGoal*))(Il2CppBase() + 0x34A57C))(this);
	}
};
