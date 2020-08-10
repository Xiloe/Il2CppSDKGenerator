#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Matrix
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Matrix*))(Il2CppBase() + 0x3E58B4))(this);
	}
	template <typename T = void*> static T CreateTranslation(Il2CppVector3 Origin) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x3E58BC))(0, Origin);
	}
	template <typename T = void*> static T CreateTranslation_1(float OriginX, float OriginY, float OriginZ) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x3E5A14))(0, OriginX, OriginY, OriginZ);
	}
	template <typename T = void*> static T CreateScale(Il2CppVector3 Scale) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x3E5B74))(0, Scale);
	}
	template <typename T = void*> static T CreateScale_1(float Scale) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x3E5CC0))(0, Scale);
	}
	template <typename T = void*> static T CreateScale_2(float ScaleX, float ScaleY, float ScaleZ) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x3E5E08))(0, ScaleX, ScaleY, ScaleZ);
	}
	template <typename T = void*> static T Create(Il2CppQuaternion Q) {
		return ((T (*)(void *, Il2CppQuaternion))(Il2CppBase() + 0x3E5F5C))(0, Q);
	}
	template <typename T = void*> static T Create_1(Il2CppVector3 Origin, Il2CppVector3 AxisX, Il2CppVector3 AxisY, Il2CppVector3 AxisZ) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x3E613C))(0, Origin, AxisX, AxisY, AxisZ);
	}
	template <typename T = Il2CppVector3> static T GetAxis(void* Mat, int32_t AxisIndex) {
		return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x3E62E8))(0, Mat, AxisIndex);
	}
	template <typename T = Il2CppVector3> static T GetAxisX(void* Mat) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3E63A8))(0, Mat);
	}
	template <typename T = Il2CppVector3> static T GetAxisY(void* Mat) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3E63E4))(0, Mat);
	}
	template <typename T = Il2CppVector3> static T GetAxisZ(void* Mat) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3E6418))(0, Mat);
	}
	template <typename T = void> static T GetAxis_1(void* Mat, void* AxisX, void* AxisY, void* AxisZ) {
		return ((T (*)(void *, void*, void*, void*, void*))(Il2CppBase() + 0x3E644C))(0, Mat, AxisX, AxisY, AxisZ);
	}
	template <typename T = void> static T SetAxisX(void* Mat, Il2CppVector3 Axis) {
		return ((T (*)(void *, void*, Il2CppVector3))(Il2CppBase() + 0x3E6484))(0, Mat, Axis);
	}
	template <typename T = void> static T SetAxisY(void* Mat, Il2CppVector3 Axis) {
		return ((T (*)(void *, void*, Il2CppVector3))(Il2CppBase() + 0x3E6494))(0, Mat, Axis);
	}
	template <typename T = void> static T SetAxisZ(void* Mat, Il2CppVector3 Axis) {
		return ((T (*)(void *, void*, Il2CppVector3))(Il2CppBase() + 0x3E64A8))(0, Mat, Axis);
	}
	template <typename T = void> static T SetAxis(void* Mat, Il2CppVector3 Axis, int32_t Index) {
		return ((T (*)(void *, void*, Il2CppVector3, int32_t))(Il2CppBase() + 0x3E64BC))(0, Mat, Axis, Index);
	}
	template <typename T = Il2CppVector3> static T GetOrigin(void* Mat) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3E6528))(0, Mat);
	}
	template <typename T = void> static T SetOrigin(void* Mat, Il2CppVector3 Origin) {
		return ((T (*)(void *, void*, Il2CppVector3))(Il2CppBase() + 0x3E655C))(0, Mat, Origin);
	}
	template <typename T = Il2CppVector3> static T GetEulerAngles(void* Mat) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3E6570))(0, Mat);
	}
	template <typename T = void> static T SetEulerAngles(void* Mat, Il2CppVector3 Angles) {
		return ((T (*)(void *, void*, Il2CppVector3))(Il2CppBase() + 0x3E6840))(0, Mat, Angles);
	}
	template <typename T = void> static T SetEulerAngles_1(void* Mat, float X, float Y, float Z) {
		return ((T (*)(void *, void*, float, float, float))(Il2CppBase() + 0x3E6860))(0, Mat, X, Y, Z);
	}
	template <typename T = Il2CppVector3> static T GetScale(void* Mat) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3E69D4))(0, Mat);
	}
	template <typename T = float> static T GetScaleX(void* Mat) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3E6B84))(0, Mat);
	}
	template <typename T = float> static T GetScaleY(void* Mat) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3E6C70))(0, Mat);
	}
	template <typename T = float> static T GetScaleZ(void* Mat) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3E6D5C))(0, Mat);
	}
	template <typename T = Il2CppVector3> static T RemoveScale(void* Mat) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3E6E48))(0, Mat);
	}
};
