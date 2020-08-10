#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPActionBoss1GoTo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78F5C);
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
		return ((T (*)(GOAPActionBoss1GoTo*, void*))(Il2CppBase() + 0x33B2F8))(this, owner);
	}
	template <typename T = void> T InitAction() {
		return ((T (*)(GOAPActionBoss1GoTo*))(Il2CppBase() + 0x33B308))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GOAPActionBoss1GoTo*))(Il2CppBase() + 0x33B4D4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GOAPActionBoss1GoTo*))(Il2CppBase() + 0x33BB00))(this);
	}
	template <typename T = void*> T _DoPlayAnim(Il2CppString* animName) {
		return ((T (*)(GOAPActionBoss1GoTo*, Il2CppString*))(Il2CppBase() + 0x33BD78))(this, animName);
	}
	template <typename T = void*> T _DoSetInvulnerable(float time) {
		return ((T (*)(GOAPActionBoss1GoTo*, float))(Il2CppBase() + 0x33B664))(this, time);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(GOAPActionBoss1GoTo*))(Il2CppBase() + 0x33BE38))(this);
	}
	template <typename T = void> T CreateAgentActionGoTo(Il2CppVector3 targetPos) {
		return ((T (*)(GOAPActionBoss1GoTo*, Il2CppVector3))(Il2CppBase() + 0x33B718))(this, targetPos);
	}
	template <typename T = void> T SetMotionType() {
		return ((T (*)(GOAPActionBoss1GoTo*))(Il2CppBase() + 0x33B440))(this);
	}
	template <typename T = bool> T IsActionComplete() {
		return ((T (*)(GOAPActionBoss1GoTo*))(Il2CppBase() + 0x33BFB4))(this);
	}
	template <typename T = bool> T ValidateAction() {
		return ((T (*)(GOAPActionBoss1GoTo*))(Il2CppBase() + 0x33C0D8))(this);
	}
	template <typename T = void> T SolvePlanWSVariable(void* currentState, void* goalState) {
		return ((T (*)(GOAPActionBoss1GoTo*, void*, void*))(Il2CppBase() + 0x33C15C))(this, currentState, goalState);
	}
	template <typename T = void> T SetPlanWSPreconditions(void* goalState) {
		return ((T (*)(GOAPActionBoss1GoTo*, void*))(Il2CppBase() + 0x33C164))(this, goalState);
	}
	template <typename T = bool> T ValidateContextPreconditions(void* current, bool planning) {
		return ((T (*)(GOAPActionBoss1GoTo*, void*, bool))(Il2CppBase() + 0x33C16C))(this, current, planning);
	}
};
