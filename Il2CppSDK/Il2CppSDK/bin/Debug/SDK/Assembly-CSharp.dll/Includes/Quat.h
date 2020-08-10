#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Quat
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Quat*))(Il2CppBase() + 0x21A0A8))(this);
	}
	template <typename T = Il2CppQuaternion> static T Create(void* Mat) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x21A0B0))(0, Mat);
	}
	template <typename T = Il2CppVector3> static T GetAxis(Il2CppQuaternion Q, int32_t AxisIndex) {
		return ((T (*)(void *, Il2CppQuaternion, int32_t))(Il2CppBase() + 0x21A378))(0, Q, AxisIndex);
	}
	template <typename T = Il2CppVector3> static T GetAxisX(Il2CppQuaternion Q) {
		return ((T (*)(void *, Il2CppQuaternion))(Il2CppBase() + 0x21A3DC))(0, Q);
	}
	template <typename T = Il2CppVector3> static T GetAxisY(Il2CppQuaternion Q) {
		return ((T (*)(void *, Il2CppQuaternion))(Il2CppBase() + 0x21A45C))(0, Q);
	}
	template <typename T = Il2CppVector3> static T GetAxisZ(Il2CppQuaternion Q) {
		return ((T (*)(void *, Il2CppQuaternion))(Il2CppBase() + 0x21A4DC))(0, Q);
	}
	template <typename T = void> static T GetAxis_1(Il2CppQuaternion Q, void* AxisX, void* AxisY, void* AxisZ) {
		return ((T (*)(void *, Il2CppQuaternion, void*, void*, void*))(Il2CppBase() + 0x21A558))(0, Q, AxisX, AxisY, AxisZ);
	}
};
