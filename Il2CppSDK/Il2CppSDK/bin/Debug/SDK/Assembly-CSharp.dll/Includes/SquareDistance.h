#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SquareDistance
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SquareDistance*))(Il2CppBase() + 0x25E1CC))(this);
	}
	template <typename T = float> static T PointRay(Il2CppVector3 P, Il2CppVector3 RayO, Il2CppVector3 RayD) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x25E1D4))(0, P, RayO, RayD);
	}
	template <typename T = float> static T PointSegment(Il2CppVector3 P, Il2CppVector3 S0, Il2CppVector3 S1) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x25E27C))(0, P, S0, S1);
	}
};
