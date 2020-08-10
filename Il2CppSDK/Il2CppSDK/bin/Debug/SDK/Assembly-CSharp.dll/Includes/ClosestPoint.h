#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClosestPoint
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ClosestPoint*))(Il2CppBase() + 0x2C1218))(this);
	}
	template <typename T = Il2CppVector3> static T PointRay(Il2CppVector3 P, Il2CppVector3 RayO, Il2CppVector3 RayD) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2C1220))(0, P, RayO, RayD);
	}
	template <typename T = Il2CppVector3> static T PointSegment(Il2CppVector3 P, Il2CppVector3 S0, Il2CppVector3 S1) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2C1318))(0, P, S0, S1);
	}
	template <typename T = Il2CppVector3> static T PointBounds(Il2CppVector3 P, void* B) {
		return ((T (*)(void *, Il2CppVector3, void*))(Il2CppBase() + 0x2C1494))(0, P, B);
	}
	template <typename T = Il2CppVector3> static T PointBoundsCenter(Il2CppVector3 P, void* B) {
		return ((T (*)(void *, Il2CppVector3, void*))(Il2CppBase() + 0x2C16DC))(0, P, B);
	}
	template <typename T = void> static T LineLine(Il2CppVector3 a, Il2CppVector3 aD, Il2CppVector3 b, Il2CppVector3 bD, void* aClosest, void* bClosest) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3, void*, void*))(Il2CppBase() + 0x2C198C))(0, a, aD, b, bD, aClosest, bClosest);
	}
};
