#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AStarGOAPGoal
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79044);
	}
	// Fields
	template <typename T = void*> T& Goal() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& Map() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AStarGOAPGoal*))(Il2CppBase() + 0x1D2C48))(this);
	}
	template <typename T = void> T Initialise(void* ai, void* map, void* goal) {
		return ((T (*)(AStarGOAPGoal*, void*, void*, void*))(Il2CppBase() + 0x1D2C50))(this, ai, map, goal);
	}
	template <typename T = float> T GetHeuristicDistance(void* ai, void* aStarNode, bool firstRun) {
		return ((T (*)(AStarGOAPGoal*, void*, void*, bool))(Il2CppBase() + 0x1D2C5C))(this, ai, aStarNode, firstRun);
	}
	template <typename T = float> T GetActualCost(void* nodeOne, void* nodeTwo) {
		return ((T (*)(AStarGOAPGoal*, void*, void*))(Il2CppBase() + 0x1D2F54))(this, nodeOne, nodeTwo);
	}
	template <typename T = bool> T IsAStarFinished(void* currNode) {
		return ((T (*)(AStarGOAPGoal*, void*))(Il2CppBase() + 0x1D3070))(this, currNode);
	}
	template <typename T = bool> T IsAStarNodePassable(int32_t node) {
		return ((T (*)(AStarGOAPGoal*, int32_t))(Il2CppBase() + 0x1D3320))(this, node);
	}
	template <typename T = bool> T IsPlanValid(void* currentNode) {
		return ((T (*)(AStarGOAPGoal*, void*))(Il2CppBase() + 0x1D3110))(this, currentNode);
	}
	template <typename T = void> T MergeStates(void* ai, void* currentState, void* goalState) {
		return ((T (*)(AStarGOAPGoal*, void*, void*, void*))(Il2CppBase() + 0x1D2EA8))(this, ai, currentState, goalState);
	}
	template <typename T = void> T SetDestNode(void* destNode) {
		return ((T (*)(AStarGOAPGoal*, void*))(Il2CppBase() + 0x1D3328))(this, destNode);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(AStarGOAPGoal*))(Il2CppBase() + 0x1D332C))(this);
	}
};
