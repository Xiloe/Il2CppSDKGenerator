#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RigidBodyExtensions
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> static T SetSleepKineticEnergy(void* rbody, float linVelocity, float angVelocity, bool normalized) {
		return ((T (*)(void *, void*, float, float, bool))(Il2CppBase() + 0x221CC0))(0, rbody, linVelocity, angVelocity, normalized);
	}
	template <typename T = float> static T GetSleepKineticEnergy(void* rbody) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x221DA0))(0, rbody);
	}
	template <typename T = float> static T GetKineticEnergy(void* rbody, bool normalized) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0x221DCC))(0, rbody, normalized);
	}
};
