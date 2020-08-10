#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AStarGOAPNode
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD788D0);
	}
	// Fields
	template <typename T = void*> T& CurrentState() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& GoalState() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AStarGOAPNode*))(Il2CppBase() + 0x1D3B88))(this);
	}
};
