#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AStarMap
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AStarMap*))(Il2CppBase() + 0x1D3404))(this);
	}
	template <typename T = int32_t> T GetNumAStarNeighbours(void* pAStarNode) {
		return ((T (*)(AStarMap*, void*))(Il2CppBase() + 0x0))(this, pAStarNode);
	}
	template <typename T = int16_t> T GetAStarNeighbour(void* pAStarNode, int16_t iNeighbor) {
		return ((T (*)(AStarMap*, void*, int16_t))(Il2CppBase() + 0x0))(this, pAStarNode, iNeighbor);
	}
	template <typename T = void*> T CreateANode(int16_t id) {
		return ((T (*)(AStarMap*, int16_t))(Il2CppBase() + 0x0))(this, id);
	}
	template <typename T = void*> T GetAStarFlags(int16_t NodeID) {
		return ((T (*)(AStarMap*, int16_t))(Il2CppBase() + 0x0))(this, NodeID);
	}
	template <typename T = void> T SetAStarFlags(int16_t NodeID, void* flag) {
		return ((T (*)(AStarMap*, int16_t, void*))(Il2CppBase() + 0x1D3D14))(this, NodeID, flag);
	}
	template <typename T = bool> T CompareNodes(void* node1, void* node2) {
		return ((T (*)(AStarMap*, void*, void*))(Il2CppBase() + 0x0))(this, node1, node2);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(AStarMap*))(Il2CppBase() + 0x0))(this);
	}
};
