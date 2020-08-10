#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SensorEyesPlayer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& EyeRange() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& FieldOfView() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor(void* owner) {
		return ((T (*)(SensorEyesPlayer*, void*))(Il2CppBase() + 0x230EEC))(this, owner);
	}
	template <typename T = float> T get_sqrEyeRange() {
		return ((T (*)(SensorEyesPlayer*))(Il2CppBase() + 0x230F28))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SensorEyesPlayer*))(Il2CppBase() + 0x230F38))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SensorEyesPlayer*))(Il2CppBase() + 0x23126C))(this);
	}
};
