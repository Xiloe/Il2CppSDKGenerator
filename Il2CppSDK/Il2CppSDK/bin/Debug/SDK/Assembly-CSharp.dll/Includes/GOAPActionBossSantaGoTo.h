#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionBossSantaGoTo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78F68);
	}
	// Fields
	template <typename T = void*> T& Action() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& Position() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& NextPathRecalcTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> static T& NextLookAroundTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& RunLikeHell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> T& MotionType() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPActionBossSantaGoTo*, void*))(Il2CppBase() + 0x33C580))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionBossSantaGoTo*))(Il2CppBase() + 0x33C590))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionBossSantaGoTo*))(Il2CppBase() + 0x33C794))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GOAPActionBossSantaGoTo*))(Il2CppBase() + 0x33CD30))(this);
	}
	template <typename T = void*> T _DoPlayAnim(Il2CppString* animName) {
		return ((T (*)(GOAPActionBossSantaGoTo*, Il2CppString*))(Il2CppBase() + 0x33CF44))(this, animName);
	}
	template <typename T = void*> T _DoSetInvulnerable(float time) {
		return ((T (*)(GOAPActionBossSantaGoTo*, float))(Il2CppBase() + 0x33C894))(this, time);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionBossSantaGoTo*))(Il2CppBase() + 0x33D004))(this);
	}
	template <typename T = void> T CreateAgentActionGoTo(Il2CppVector3 targetPos) {
		return ((T (*)(GOAPActionBossSantaGoTo*, Il2CppVector3))(Il2CppBase() + 0x33C948))(this, targetPos);
	}
	template <typename T = void> T SetMotionType() {
		return ((T (*)(GOAPActionBossSantaGoTo*))(Il2CppBase() + 0x33C6C8))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionBossSantaGoTo*))(Il2CppBase() + 0x33D180))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionBossSantaGoTo*))(Il2CppBase() + 0x33D2A4))(this);
	}
	template <typename T = void> T SolvePlanWSVariable(void* currentState, void* goalState) {
		return ((T (*)(GOAPActionBossSantaGoTo*, void*, void*))(Il2CppBase() + 0x33D410))(this, currentState, goalState);
	}
	template <typename T = void> T SetPlanWSPreconditions(void* goalState) {
		return ((T (*)(GOAPActionBossSantaGoTo*, void*))(Il2CppBase() + 0x33D418))(this, goalState);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionBossSantaGoTo*, void*, bool))(Il2CppBase() + 0x33D420))(this, current, planning);
	}
};
