#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPGoalTeleport
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79020);
	}
	// Fields
	template <typename T = float> static T& _DisabledForEverybodyTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& Enemy() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> static T& LastWaypoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(GOAPGoalTeleport*, void*))(Il2CppBase() + 0x34CD34))(this, owner);
	}
	template <typename T = float> T get_DisabledForEverybodyTimer() {
		return ((T (*)(GOAPGoalTeleport*))(Il2CppBase() + 0x34F460))(this);
	}
	template <typename T = void> T set_DisabledForEverybodyTimer(float value) {
		return ((T (*)(GOAPGoalTeleport*, float))(Il2CppBase() + 0x34F4E0))(this, value);
	}
	template <typename T = void> T InitGoal() {
		return ((T (*)(GOAPGoalTeleport*))(Il2CppBase() + 0x34F56C))(this);
	}
	template <typename T = float> T GetMaxRelevancy() {
		return ((T (*)(GOAPGoalTeleport*))(Il2CppBase() + 0x34F5B4))(this);
	}
	template <typename T = void> T CalculateGoalRelevancy() {
		return ((T (*)(GOAPGoalTeleport*))(Il2CppBase() + 0x34F5F0))(this);
	}
	template <typename T = void> T SetDisableTime() {
		return ((T (*)(GOAPGoalTeleport*))(Il2CppBase() + 0x34F830))(this);
	}
	template <typename T = void> T SetWSSatisfactionForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalTeleport*, void*))(Il2CppBase() + 0x34F890))(this, worldState);
	}
	template <typename T = void> T ChangeCurrentWSForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalTeleport*, void*))(Il2CppBase() + 0x34F8C4))(this, worldState);
	}
	template <typename T = bool> T IsWSSatisfiedForPlanning(void* worldState) {
		return ((T (*)(GOAPGoalTeleport*, void*))(Il2CppBase() + 0x34F8F8))(this, worldState);
	}
	template <typename T = bool> T IsSatisfied() {
		return ((T (*)(GOAPGoalTeleport*))(Il2CppBase() + 0x34F93C))(this);
	}
	template <typename T = bool> T Activate(void* plan) {
		return ((T (*)(GOAPGoalTeleport*, void*))(Il2CppBase() + 0x34F95C))(this, plan);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GOAPGoalTeleport*))(Il2CppBase() + 0x34FB88))(this);
	}
	template <typename T = void*> T GetAnyTeleportPositionAgainstEnemy(void* enemy, float minDistance, float maxDistance) {
		return ((T (*)(GOAPGoalTeleport*, void*, float, float))(Il2CppBase() + 0x34F820))(this, enemy, minDistance, maxDistance);
	}
	template <typename T = void*> T GetTeleportPositionBehindEnemy(void* enemy, float minDistance, float maxDistance) {
		return ((T (*)(GOAPGoalTeleport*, void*, float, float))(Il2CppBase() + 0x34F828))(this, enemy, minDistance, maxDistance);
	}
};
