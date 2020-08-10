#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Throw
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79490);
	}
	// Fields
	template <typename T = Il2CppVector3> static T& m_Gravity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x26D608))(0);
	}
	template <typename T = Il2CppVector3> static T ComputePosition(Il2CppVector3 SrcPos, Il2CppVector3 Velocity, float ElapsedTime) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x26D6AC))(0, SrcPos, Velocity, ElapsedTime);
	}
	template <typename T = float> static T ComputeDuration(Il2CppVector3 SrcPos, Il2CppVector3 DstPos, Il2CppVector3 Velocity) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x26D858))(0, SrcPos, DstPos, Velocity);
	}
	template <typename T = float> static T ComputeMinSpeed(Il2CppVector3 SrcPos, Il2CppVector3 DstPos) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x26DC90))(0, SrcPos, DstPos);
	}
	template <typename T = bool> static T ComputeVelocity(Il2CppVector3 SrcPos, Il2CppVector3 DstPos, float Speed, void* Velocity) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, void*))(Il2CppBase() + 0x26DEA0))(0, SrcPos, DstPos, Speed, Velocity);
	}
	template <typename T = bool> static T ComputeVelocity_1(Il2CppVector3 SrcPos, Il2CppVector3 DstPos, float Speed, bool PreferShorterTrajectory, void* Velocity) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, bool, void*))(Il2CppBase() + 0x26DF98))(0, SrcPos, DstPos, Speed, PreferShorterTrajectory, Velocity);
	}
	template <typename T = void> static T ComputeTrajectory(Il2CppVector3 SrcPos, Il2CppVector3 Velocity, float Duration, float MaxError, Il2CppList<Il2CppVector3>* Trajectory) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, float, Il2CppList<Il2CppVector3>*))(Il2CppBase() + 0x26E31C))(0, SrcPos, Velocity, Duration, MaxError, Trajectory);
	}
	template <typename T = void> static T GeneratePoints(Il2CppVector3 SrcPos, Il2CppVector3 Velocity, float SqrMaxError, float T0, float T1, Il2CppVector3 P0, Il2CppVector3 P1, void* Trajectory) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, float, float, Il2CppVector3, Il2CppVector3, void*))(Il2CppBase() + 0x26E51C))(0, SrcPos, Velocity, SqrMaxError, T0, T1, P0, P1, Trajectory);
	}
	template <typename T = bool> static T ClipTrajectoryToFirstHit(Il2CppList<Il2CppVector3>* Trajectory, int32_t ClipLayersMask) {
		return ((T (*)(void *, Il2CppList<Il2CppVector3>*, int32_t))(Il2CppBase() + 0x26E7D4))(0, Trajectory, ClipLayersMask);
	}
	template <typename T = float> static T ComputeTrajectoryLength(Il2CppList<Il2CppVector3>* Trajectory) {
		return ((T (*)(void *, Il2CppList<Il2CppVector3>*))(Il2CppBase() + 0x26EB64))(0, Trajectory);
	}
};
