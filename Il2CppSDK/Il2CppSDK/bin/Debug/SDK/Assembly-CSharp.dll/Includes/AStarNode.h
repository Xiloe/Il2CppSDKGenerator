#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AStarNode
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int16_t> T& NodeID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& G() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& H() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& F() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& Next() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& Previous() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& Parent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& Flag() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AStarNode*))(Il2CppBase() + 0x1D3CD8))(this);
	}
};
