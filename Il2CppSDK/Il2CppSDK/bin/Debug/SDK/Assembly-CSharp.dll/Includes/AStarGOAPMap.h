#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AStarGOAPMap
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7903C);
	}
	// Fields
	template <typename T = void*> T& Ai() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<void*>*> T& m_EffectsTable() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<void*>*> T& m_Neighbours() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AStarGOAPMap*))(Il2CppBase() + 0x1D3330))(this);
	}
	template <typename T = void> T Initialise(void* ai) {
		return ((T (*)(AStarGOAPMap*, void*))(Il2CppBase() + 0x1D340C))(this, ai);
	}
	template <typename T = void> T BuildActionsEffectsTable() {
		return ((T (*)(AStarGOAPMap*))(Il2CppBase() + 0x1D34AC))(this);
	}
	template <typename T = int32_t> T GetNumAStarNeighbours(void* aStarNode) {
		return ((T (*)(AStarGOAPMap*, void*))(Il2CppBase() + 0x1D36A8))(this, aStarNode);
	}
	template <typename T = int16_t> T GetAStarNeighbour(void* AStarNode, int16_t neighbourCount) {
		return ((T (*)(AStarGOAPMap*, void*, int16_t))(Il2CppBase() + 0x1D3A40))(this, AStarNode, neighbourCount);
	}
	template <typename T = void*> T CreateANode(int16_t id) {
		return ((T (*)(AStarGOAPMap*, int16_t))(Il2CppBase() + 0x1D3AE8))(this, id);
	}
	template <typename T = void*> T GetAStarFlags(int16_t node) {
		return ((T (*)(AStarGOAPMap*, int16_t))(Il2CppBase() + 0x1D3C60))(this, node);
	}
	template <typename T = bool> T CompareNodes(void* node1, void* node2) {
		return ((T (*)(AStarGOAPMap*, void*, void*))(Il2CppBase() + 0x1D3C68))(this, node1, node2);
	}
	template <typename T = void*> T GetAction(int16_t nodeID) {
		return ((T (*)(AStarGOAPMap*, int16_t))(Il2CppBase() + 0x1D2E7C))(this, nodeID);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(AStarGOAPMap*))(Il2CppBase() + 0x1D3CD4))(this);
	}
};
