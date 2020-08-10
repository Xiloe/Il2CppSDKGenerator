#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HitUtils
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = bool> static T FirstCollisionOnRay(void* ray, float distance, void* ignoreGO, void* Judge, void** data) {
		return ((T (*)(void *, void*, float, void*, void*, void**))(Il2CppBase() + 0x39E770))(0, ray, distance, ignoreGO, Judge, data);
	}
	template <typename T = bool> static T SphereCollisionOnRayAccurate(void* ray, float distance, float radius, void* ignoreGO, void* Judge, void** data, float distanceOffset) {
		return ((T (*)(void *, void*, float, float, void*, void*, void**, float))(Il2CppBase() + 0x39ECB4))(0, ray, distance, radius, ignoreGO, Judge, data, distanceOffset);
	}
};
