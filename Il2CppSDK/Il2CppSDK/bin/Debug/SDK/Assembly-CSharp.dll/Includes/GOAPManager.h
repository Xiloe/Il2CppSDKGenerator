#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GOAPManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78770);
	}
	// Fields
	template <typename T = Il2CppDictionary<void*, void*>*> T& Goals() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& CurrentGoal() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& Owner() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& AStar() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& Storage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& Map() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& Goal() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor(void* ai) {
		return ((T (*)(GOAPManager*, void*))(Il2CppBase() + 0x3504FC))(this, ai);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(GOAPManager*))(Il2CppBase() + 0x350640))(this);
	}
	template <typename T = void> T Reset(bool resetAll) {
		return ((T (*)(GOAPManager*, bool))(Il2CppBase() + 0x3506B4))(this, resetAll);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(GOAPManager*))(Il2CppBase() + 0x350A74))(this);
	}
	template <typename T = void*> T AddGoal(void* type) {
		return ((T (*)(GOAPManager*, void*))(Il2CppBase() + 0x350AAC))(this, type);
	}
	template <typename T = void*> T GetGoal(void* type) {
		return ((T (*)(GOAPManager*, void*))(Il2CppBase() + 0x350BA0))(this, type);
	}
	template <typename T = void> T UpdateCurrentGoal() {
		return ((T (*)(GOAPManager*))(Il2CppBase() + 0x350C80))(this);
	}
	template <typename T = void> T ManageGoals() {
		return ((T (*)(GOAPManager*))(Il2CppBase() + 0x3513AC))(this);
	}
	template <typename T = bool> T ReplanCurrentGoal() {
		return ((T (*)(GOAPManager*))(Il2CppBase() + 0x3512F8))(this);
	}
	template <typename T = void> T FindNewGoal() {
		return ((T (*)(GOAPManager*))(Il2CppBase() + 0x351CFC))(this);
	}
	template <typename T = void> T FindMostImportantGoal() {
		return ((T (*)(GOAPManager*))(Il2CppBase() + 0x351DD4))(this);
	}
	template <typename T = void> T CreatePlan(void* goal) {
		return ((T (*)(GOAPManager*, void*))(Il2CppBase() + 0x352DCC))(this, goal);
	}
	template <typename T = void*> T GetPlan() {
		return ((T (*)(GOAPManager*))(Il2CppBase() + 0x35399C))(this);
	}
	template <typename T = void*> T GetMostImportantGoal(float minRelevancy) {
		return ((T (*)(GOAPManager*, float))(Il2CppBase() + 0x352A6C))(this, minRelevancy);
	}
	template <typename T = void*> T BuildPlan(void* goal) {
		return ((T (*)(GOAPManager*, void*))(Il2CppBase() + 0x352174))(this, goal);
	}
};
