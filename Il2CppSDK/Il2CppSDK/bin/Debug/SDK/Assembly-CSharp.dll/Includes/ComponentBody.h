#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ComponentBody
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& ActionRotate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Owner() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& RightHand() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& LeftHand() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& RotationDiff() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& SmoothRotation() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ComponentBody*))(Il2CppBase() + 0x2D76D8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ComponentBody*))(Il2CppBase() + 0x2D76E8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ComponentBody*))(Il2CppBase() + 0x2D7778))(this);
	}
	template <typename T = float> T GetRotationSpeed(float angle) {
		return ((T (*)(ComponentBody*, float))(Il2CppBase() + 0x2D7FAC))(this, angle);
	}
	template <typename T = float> T GetRotationDiffLimit() {
		return ((T (*)(ComponentBody*))(Il2CppBase() + 0x2D7ED4))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(ComponentBody*))(Il2CppBase() + 0x2D8108))(this);
	}
	template <typename T = void> T EnableSmoothRotation(bool enable) {
		return ((T (*)(ComponentBody*, bool))(Il2CppBase() + 0x2D818C))(this, enable);
	}
	template <typename T = void> T UpdateAiming() {
		return ((T (*)(ComponentBody*))(Il2CppBase() + 0x2D80C0))(this);
	}
};
