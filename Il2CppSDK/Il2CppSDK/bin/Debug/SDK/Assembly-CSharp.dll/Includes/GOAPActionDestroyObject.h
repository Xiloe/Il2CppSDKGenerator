#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionDestroyObject
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78F94);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& NextPathRecalcTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& MotionType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionDestroyObject*, void*))(Il2CppBase() + 0x3415FC))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionDestroyObject*))(Il2CppBase() + 0x341614))(this);
	}
	template <typename T = void> T SetMotionType() {
		return ((T (*)(GOAPActionDestroyObject*))(Il2CppBase() + 0x341694))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionDestroyObject*))(Il2CppBase() + 0x341718))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GOAPActionDestroyObject*))(Il2CppBase() + 0x3417A4))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionDestroyObject*))(Il2CppBase() + 0x342158))(this);
	}
	template <typename T = void> T CreateAgentActionGoTo(void* destrObj) {
		return ((T (*)(GOAPActionDestroyObject*, void*))(Il2CppBase() + 0x34198C))(this, destrObj);
	}
	template <typename T = void*> T ChooseMotionSide() {
		return ((T (*)(GOAPActionDestroyObject*))(Il2CppBase() + 0x3422D4))(this);
	}
	template <typename T = void> T CreateAgentActionCrawlTo(void* destrObj) {
		return ((T (*)(GOAPActionDestroyObject*, void*))(Il2CppBase() + 0x341E78))(this, destrObj);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionDestroyObject*))(Il2CppBase() + 0x342430))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionDestroyObject*))(Il2CppBase() + 0x342580))(this);
	}
	template <typename T = void> T SolvePlanWSVariable(void* currentState, void* goalState) {
		return ((T (*)(GOAPActionDestroyObject*, void*, void*))(Il2CppBase() + 0x3425B8))(this, currentState, goalState);
	}
	template <typename T = void> T SetPlanWSPreconditions(void* goalState) {
		return ((T (*)(GOAPActionDestroyObject*, void*))(Il2CppBase() + 0x3425C0))(this, goalState);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionDestroyObject*, void*, bool))(Il2CppBase() + 0x3425C8))(this, current, planning);
	}
};
