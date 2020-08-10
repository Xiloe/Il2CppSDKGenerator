#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPPlan
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79050);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& m_Actions() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& CurrentStep() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GOAPPlan*))(Il2CppBase() + 0x3539B0))(this);
	}
	template <typename T = int32_t> T get_NumberOfSteps() {
		return ((T (*)(GOAPPlan*))(Il2CppBase() + 0x353B04))(this);
	}
	template <typename T = int32_t> T get_CurrentStepIndex() {
		return ((T (*)(GOAPPlan*))(Il2CppBase() + 0x353AFC))(this);
	}
	template <typename T = void> T PushBack(void* action) {
		return ((T (*)(GOAPPlan*, void*))(Il2CppBase() + 0x353A5C))(this, action);
	}
	template <typename T = void*> T get_CurrentAction() {
		return ((T (*)(GOAPPlan*))(Il2CppBase() + 0x353B9C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GOAPPlan*))(Il2CppBase() + 0x349024))(this);
	}
	template <typename T = bool> T IsPlanStepComplete() {
		return ((T (*)(GOAPPlan*))(Il2CppBase() + 0x349110))(this);
	}
	template <typename T = bool> T IsDone() {
		return ((T (*)(GOAPPlan*))(Il2CppBase() + 0x34A4BC))(this);
	}
	template <typename T = bool> T IsPlanStepInterruptible() {
		return ((T (*)(GOAPPlan*))(Il2CppBase() + 0x34A344))(this);
	}
	template <typename T = bool> T IsPlanValid() {
		return ((T (*)(GOAPPlan*))(Il2CppBase() + 0x34A42C))(this);
	}
	template <typename T = bool> T Activate(void* ai, void* goal) {
		return ((T (*)(GOAPPlan*, void*, void*))(Il2CppBase() + 0x3493EC))(this, ai, goal);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPPlan*))(Il2CppBase() + 0x349B84))(this);
	}
	template <typename T = bool> T AdvancePlan() {
		return ((T (*)(GOAPPlan*))(Il2CppBase() + 0x3491FC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GOAPPlan*))(Il2CppBase() + 0x353C50))(this);
	}
};
