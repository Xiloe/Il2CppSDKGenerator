#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShootDispersionTimer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& Increase() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Decrease() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& Dispersion() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& LastFireTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& FireOnInterval() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& DispersionHoldTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(ShootDispersionTimer*, float))(Il2CppBase() + 0x2E2FA4))(this, deltaTime);
	}
};
