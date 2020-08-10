#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPAction
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78760);
	}
	// Fields
	template <typename T = void*> T& WorldPreconditions() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& WorldEffects() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Cost() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Interruptible() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Precedence() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& Type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& Owner() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor(void* type, void* owner) {
		return ((T (*)(GOAPAction*, void*, void*))(Il2CppBase() + 0x339C80))(this, type, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPAction*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GOAPAction*))(Il2CppBase() + 0x339D4C))(this);
	}
	template <typename T = void> T SolvePlanWSVariable(void* currentState, void* goalState) {
		return ((T (*)(GOAPAction*, void*, void*))(Il2CppBase() + 0x339D50))(this, currentState, goalState);
	}
	template <typename T = bool> T ValidateWSEffects(void* current, void* goal) {
		return ((T (*)(GOAPAction*, void*, void*))(Il2CppBase() + 0x339E10))(this, current, goal);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPAction*, void*, bool))(Il2CppBase() + 0x339E4C))(this, current, planning);
	}
	template <typename T = bool> T ValidateWSPreconditions(void* current, void* goal) {
		return ((T (*)(GOAPAction*, void*, void*))(Il2CppBase() + 0x339E54))(this, current, goal);
	}
	template <typename T = void> T SetPlanWSPreconditions(void* goalState) {
		return ((T (*)(GOAPAction*, void*))(Il2CppBase() + 0x339E90))(this, goalState);
	}
	template <typename T = void> T ApplyWSEffects(void* currentState, void* goalState) {
		return ((T (*)(GOAPAction*, void*, void*))(Il2CppBase() + 0x339F10))(this, currentState, goalState);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPAction*))(Il2CppBase() + 0x339F90))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPAction*))(Il2CppBase() + 0x339F98))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPAction*))(Il2CppBase() + 0x339FA0))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPAction*))(Il2CppBase() + 0x33A008))(this);
	}
	template <typename T = void> T DebugLogActivate() {
		return ((T (*)(GOAPAction*))(Il2CppBase() + 0x33A314))(this);
	}
};
