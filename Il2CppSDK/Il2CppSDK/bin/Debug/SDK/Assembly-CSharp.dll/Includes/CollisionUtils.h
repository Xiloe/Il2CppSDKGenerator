#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CollisionUtils
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CollisionUtils*))(Il2CppBase() + 0x2D6124))(this);
	}
	template <typename T = int32_t> static T CompareHits(void* x, void* y) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x2D612C))(0, x, y);
	}
	template <typename T = void*> static T FirstCollisionOnRay(void* ray, float distance, void* ignoreGO) {
		return ((T (*)(void *, void*, float, void*))(Il2CppBase() + 0x2D61F8))(0, ray, distance, ignoreGO);
	}
};
