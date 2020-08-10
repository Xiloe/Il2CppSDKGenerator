#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AStarStorage
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79040);
	}
	// Fields
	template <typename T = void*> T& headOfOpenList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& headOfClosedList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint16_t> T& openSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AStarStorage*))(Il2CppBase() + 0x1D3D18))(this);
	}
	template <typename T = void> T AddToOpenList(void* node, void* map) {
		return ((T (*)(AStarStorage*, void*, void*))(Il2CppBase() + 0x1D2670))(this, node, map);
	}
	template <typename T = void> T AddToClosedList(void* node, void* map) {
		return ((T (*)(AStarStorage*, void*, void*))(Il2CppBase() + 0x1D2A44))(this, node, map);
	}
	template <typename T = void*> T FindInOpenList(int16_t node) {
		return ((T (*)(AStarStorage*, int16_t))(Il2CppBase() + 0x1D2AEC))(this, node);
	}
	template <typename T = void*> T FindInClosedList(int16_t node) {
		return ((T (*)(AStarStorage*, int16_t))(Il2CppBase() + 0x1D2B28))(this, node);
	}
	template <typename T = void> T RemoveFromClosedList(int16_t nodeId, void* map) {
		return ((T (*)(AStarStorage*, int16_t, void*))(Il2CppBase() + 0x1D2B64))(this, nodeId, map);
	}
	template <typename T = void> T RemoveFromOpenList(int16_t nodeId, void* map) {
		return ((T (*)(AStarStorage*, int16_t, void*))(Il2CppBase() + 0x1D3D20))(this, nodeId, map);
	}
	template <typename T = void*> T RemoveCheapestOpenNode(void* map) {
		return ((T (*)(AStarStorage*, void*))(Il2CppBase() + 0x1D2918))(this, map);
	}
	template <typename T = bool> T CheckStorage() {
		return ((T (*)(AStarStorage*))(Il2CppBase() + 0x1D3DF0))(this);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(AStarStorage*))(Il2CppBase() + 0x1D3E24))(this);
	}
	template <typename T = void> T ResetStorage(void* map) {
		return ((T (*)(AStarStorage*, void*))(Il2CppBase() + 0x1D2064))(this, map);
	}
};
