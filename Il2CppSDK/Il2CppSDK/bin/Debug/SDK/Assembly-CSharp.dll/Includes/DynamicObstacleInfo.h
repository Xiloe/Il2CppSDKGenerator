#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DynamicObstacleInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Obstacle() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& State() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DynamicObstacleInfo*))(Il2CppBase() + 0x32CAAC))(this);
	}
};
