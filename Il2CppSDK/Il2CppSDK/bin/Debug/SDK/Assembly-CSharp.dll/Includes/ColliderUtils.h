#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ColliderUtils
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ColliderUtils*))(Il2CppBase() + 0x2D5AAC))(this);
	}
	template <typename T = bool> static T PointInCollider(Il2CppVector3 Point, void* Box) {
		return ((T (*)(void *, Il2CppVector3, void*))(Il2CppBase() + 0x2D5574))(0, Point, Box);
	}
	template <typename T = bool> static T PointInCollider_1(Il2CppVector3 Point, void* Box, void* BoxTransform) {
		return ((T (*)(void *, Il2CppVector3, void*, void*))(Il2CppBase() + 0x2D5AB4))(0, Point, Box, BoxTransform);
	}
	template <typename T = bool> static T PointInCollider_2(Il2CppVector3 Point, void* Capsule) {
		return ((T (*)(void *, Il2CppVector3, void*))(Il2CppBase() + 0x2D55FC))(0, Point, Capsule);
	}
	template <typename T = bool> static T PointInCollider_3(Il2CppVector3 Point, void* Capsule, void* CapsuleTransform) {
		return ((T (*)(void *, Il2CppVector3, void*, void*))(Il2CppBase() + 0x2D5D44))(0, Point, Capsule, CapsuleTransform);
	}
	template <typename T = bool> static T PointInCollider_4(Il2CppVector3 Point, void* Sphere) {
		return ((T (*)(void *, Il2CppVector3, void*))(Il2CppBase() + 0x2D5684))(0, Point, Sphere);
	}
	template <typename T = bool> static T PointInCollider_5(Il2CppVector3 Point, void* Sphere, void* SphereTransform) {
		return ((T (*)(void *, Il2CppVector3, void*, void*))(Il2CppBase() + 0x2D5FBC))(0, Point, Sphere, SphereTransform);
	}
	template <typename T = bool> static T ScaleCollider(void* Coll, float Scale) {
		return ((T (*)(void *, void*, float))(Il2CppBase() + 0x2D5914))(0, Coll, Scale);
	}
	template <typename T = void> static T ScaleCollider_1(void* Box, float Scale) {
		return ((T (*)(void *, void*, float))(Il2CppBase() + 0x2D56E4))(0, Box, Scale);
	}
	template <typename T = void> static T ScaleCollider_2(void* Capsule, float Scale) {
		return ((T (*)(void *, void*, float))(Il2CppBase() + 0x2D576C))(0, Capsule, Scale);
	}
	template <typename T = void> static T ScaleCollider_3(void* Sphere, float Scale) {
		return ((T (*)(void *, void*, float))(Il2CppBase() + 0x2D57E8))(0, Sphere, Scale);
	}
};
