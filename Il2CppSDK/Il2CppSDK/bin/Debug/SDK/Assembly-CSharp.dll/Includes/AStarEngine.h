#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AStarEngine
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79048);
	}
	// Fields
	template <typename T = void*> T& Goal() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& Map() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& Storage() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& CurrentNode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int16_t> T& Start() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int16_t> T& End() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AStarEngine*))(Il2CppBase() + 0x1D2024))(this);
	}
	template <typename T = void> T Setup(void* _goal, void* _storage, void* _aStarMap) {
		return ((T (*)(AStarEngine*, void*, void*, void*))(Il2CppBase() + 0x1D202C))(this, _goal, _storage, _aStarMap);
	}
	template <typename T = void> T RunAStar(void* ai) {
		return ((T (*)(AStarEngine*, void*))(Il2CppBase() + 0x1D21BC))(this, ai);
	}
	template <typename T = void> T Cleanup() {
		return ((T (*)(AStarEngine*))(Il2CppBase() + 0x1D2C28))(this);
	}
};
