#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Mathfx
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Mathfx*))(Il2CppBase() + 0x3E2BD4))(this);
	}
	template <typename T = Il2CppVector3> static T InterpolateCatmullRom(Il2CppVector3 p0, Il2CppVector3 p1, Il2CppVector3 p2, Il2CppVector3 p3, float t) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x3E2BDC))(0, p0, p1, p2, p3, t);
	}
	template <typename T = float> static T Hermite(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x3E2F74))(0, start, end, value);
	}
	template <typename T = Il2CppVector3> static T Hermite_1(Il2CppVector3 start, Il2CppVector3 end, float value) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x3E305C))(0, start, end, value);
	}
	template <typename T = float> static T Sinerp(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x3E30E0))(0, start, end, value);
	}
	template <typename T = Il2CppVector3> static T Sinerp_1(Il2CppVector3 start, Il2CppVector3 end, float value) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x3E31CC))(0, start, end, value);
	}
	template <typename T = float> static T Coserp(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x3E3250))(0, start, end, value);
	}
	template <typename T = Il2CppVector3> static T Coserp_1(Il2CppVector3 start, Il2CppVector3 end, float value) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x3E3348))(0, start, end, value);
	}
	template <typename T = float> static T Berp(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x3E33CC))(0, start, end, value);
	}
	template <typename T = float> static T SmoothStep(float x, float min, float max) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x3E3514))(0, x, min, max);
	}
	template <typename T = float> static T Lerp(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x3E3614))(0, start, end, value);
	}
	template <typename T = Il2CppVector3> static T NearestPoint(Il2CppVector3 lineStart, Il2CppVector3 lineEnd, Il2CppVector3 point) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3E363C))(0, lineStart, lineEnd, point);
	}
	template <typename T = float> static T DistanceFromPointToVector(Il2CppVector3 lineStart, Il2CppVector3 lineEnd, Il2CppVector3 point) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3E3784))(0, lineStart, lineEnd, point);
	}
	template <typename T = Il2CppVector3> static T NearestPointStrict(Il2CppVector3 lineStart, Il2CppVector3 lineEnd, Il2CppVector3 point) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3E3824))(0, lineStart, lineEnd, point);
	}
	template <typename T = float> static T Bounce(float x) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x3E3A48))(0, x);
	}
	template <typename T = bool> static T Approx(float val, float about, float range) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x3E3B20))(0, val, about, range);
	}
	template <typename T = bool> static T Approx_1(Il2CppVector3 val, Il2CppVector3 about, float range) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x3E3BEC))(0, val, about, range);
	}
	template <typename T = float> static T Clerp(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x3E3C74))(0, start, end, value);
	}
	template <typename T = Il2CppVector3> static T BezierSpline(Il2CppArray<void*>* pts, float pm) {
		return ((T (*)(void *, Il2CppArray<void*>*, float))(Il2CppBase() + 0x3E3D8C))(0, pts, pm);
	}
	template <typename T = Il2CppVector3> static T SmoothCurveDirection(Il2CppArray<void*>* pts, float pm) {
		return ((T (*)(void *, Il2CppArray<void*>*, float))(Il2CppBase() + 0x3E4318))(0, pts, pm);
	}
	template <typename T = Il2CppVector3> static T BezInterp(Il2CppVector3 st, Il2CppVector3 en, Il2CppVector3 ctrl, float t) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x3E4220))(0, st, en, ctrl, t);
	}
	template <typename T = Il2CppVector3> static T BezDirection(Il2CppVector3 st, Il2CppVector3 en, Il2CppVector3 ctrl, float t) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x3E479C))(0, st, en, ctrl, t);
	}
	template <typename T = void*> static T GetDirectionToVector(void* transform, Il2CppVector3 dir) {
		return ((T (*)(void *, void*, Il2CppVector3))(Il2CppBase() + 0x3E494C))(0, transform, dir);
	}
	template <typename T = Il2CppVector3> static T GetBestPositionFromPath(Il2CppVector3 start, Il2CppArray<void*>* path, int32_t numberofCheckpoint, float minDistance, float maxDistance) {
		return ((T (*)(void *, Il2CppVector3, Il2CppArray<void*>*, int32_t, float, float))(Il2CppBase() + 0x3E4A24))(0, start, path, numberofCheckpoint, minDistance, maxDistance);
	}
	template <typename T = void> static T Matrix_SetPos(void* inoutMatrix, Il2CppVector3 inPos) {
		return ((T (*)(void *, void*, Il2CppVector3))(Il2CppBase() + 0x3E4C24))(0, inoutMatrix, inPos);
	}
	template <typename T = Il2CppVector3> static T Matrix_GetPos(void* inMatrix) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3E4C38))(0, inMatrix);
	}
	template <typename T = void> static T Matrix_SetEulerAngles(void* inoutMatrix, Il2CppVector3 inEulerAngles) {
		return ((T (*)(void *, void*, Il2CppVector3))(Il2CppBase() + 0x3E4C6C))(0, inoutMatrix, inEulerAngles);
	}
	template <typename T = Il2CppVector3> static T Matrix_GetEulerAngles(void* inMatrix) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3E4DDC))(0, inMatrix);
	}
	template <typename T = void> static T SanitizeEuler(void* euler) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3E4FD8))(0, euler);
	}
};
