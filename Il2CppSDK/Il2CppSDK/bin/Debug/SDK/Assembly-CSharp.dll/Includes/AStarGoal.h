#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AStarGoal
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AStarGoal*))(Il2CppBase() + 0x1D2C40))(this);
	}
	template <typename T = void> T SetDestNode(void* destNode) {
		return ((T (*)(AStarGoal*, void*))(Il2CppBase() + 0x0))(this, destNode);
	}
	template <typename T = float> T GetHeuristicDistance(void* ai, void* pAStarNode, bool firstRun) {
		return ((T (*)(AStarGoal*, void*, void*, bool))(Il2CppBase() + 0x0))(this, ai, pAStarNode, firstRun);
	}
	template <typename T = float> T GetActualCost(void* nodeOne, void* nodeTwo) {
		return ((T (*)(AStarGoal*, void*, void*))(Il2CppBase() + 0x0))(this, nodeOne, nodeTwo);
	}
	template <typename T = bool> T IsAStarFinished(void* currNode) {
		return ((T (*)(AStarGoal*, void*))(Il2CppBase() + 0x0))(this, currNode);
	}
	template <typename T = bool> T IsAStarNodePassable(int32_t node) {
		return ((T (*)(AStarGoal*, int32_t))(Il2CppBase() + 0x0))(this, node);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(AStarGoal*))(Il2CppBase() + 0x0))(this);
	}
};
