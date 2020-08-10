#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Intersection
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = bool> static T RaySphere(Il2CppVector3 RayO, Il2CppVector3 RayD, float RayL, Il2CppVector3 SphereC, float SphereR) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, Il2CppVector3, float))(Il2CppBase() + 0x3CC380))(0, RayO, RayD, RayL, SphereC, SphereR);
	}
	template <typename T = bool> static T RayBox(Il2CppVector3 RayO, Il2CppVector3 RayD, float RayL, Il2CppVector3 BoxC, Il2CppVector3 BoxE) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3CC568))(0, RayO, RayD, RayL, BoxC, BoxE);
	}
	template <typename T = int32_t> static T LineSphere(Il2CppVector3 LineP, Il2CppVector3 LineD, Il2CppVector3 SphereC, float SphereR, void* T0, void* T1) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, float, void*, void*))(Il2CppBase() + 0x3CC824))(0, LineP, LineD, SphereC, SphereR, T0, T1);
	}
	template <typename T = int32_t> static T LineBox(Il2CppVector3 LineP, Il2CppVector3 LineD, Il2CppVector3 BoxC, Il2CppVector3 BoxE, void* T0, void* T1) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3, void*, void*))(Il2CppBase() + 0x3CCA18))(0, LineP, LineD, BoxC, BoxE, T0, T1);
	}
	template <typename T = bool> static T Planes(void* P0, void* P1, void* P2, void* Point) {
		return ((T (*)(void *, void*, void*, void*, void*))(Il2CppBase() + 0x3CCCBC))(0, P0, P1, P2, Point);
	}
};
