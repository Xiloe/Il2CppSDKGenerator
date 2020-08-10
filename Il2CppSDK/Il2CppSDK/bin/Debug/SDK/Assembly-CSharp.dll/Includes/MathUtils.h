#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MathUtils
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MathUtils*))(Il2CppBase() + 0x3E508C))(this);
	}
	template <typename T = float> static T SanitizeDegrees(float Angle) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x3E5094))(0, Angle);
	}
	template <typename T = float> static T SanitizeRadians(float Angle) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x3E50E0))(0, Angle);
	}
	template <typename T = Il2CppVector3> static T AnglesToVector(Il2CppVector3 RefForward, Il2CppVector3 RefUp, float AngleH, float AngleV) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, float))(Il2CppBase() + 0x3E512C))(0, RefForward, RefUp, AngleH, AngleV);
	}
	template <typename T = void> static T VectorToAngles(Il2CppVector3 RefForward, Il2CppVector3 RefUp, Il2CppVector3 Vec, void* AngleH, void* AngleV) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, void*, void*))(Il2CppBase() + 0x3E536C))(0, RefForward, RefUp, Vec, AngleH, AngleV);
	}
	template <typename T = Il2CppVector3> static T RandomVectorInsideCone(Il2CppVector3 ConeAxis, float ConeAngle) {
		return ((T (*)(void *, Il2CppVector3, float))(Il2CppBase() + 0x3E56D8))(0, ConeAxis, ConeAngle);
	}
	template <typename T = bool> static T InRange(float Val, float Min, float Max) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x3E5884))(0, Val, Min, Max);
	}
};
