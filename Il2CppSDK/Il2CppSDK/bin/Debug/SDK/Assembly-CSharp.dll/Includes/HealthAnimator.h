#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HealthAnimator
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& decreaseTimer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& increaseTimer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& origPosition1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& origPosition2() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& sprite1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& sprite2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor(void* inSprite1, void* inSprite2) {
		return ((T (*)(HealthAnimator*, void*, void*))(Il2CppBase() + 0x3B12A4))(this, inSprite1, inSprite2);
	}
	template <typename T = void> T DecreaseHealthAnimation() {
		return ((T (*)(HealthAnimator*))(Il2CppBase() + 0x3B1448))(this);
	}
	template <typename T = void> T IncreaseHealthAnimation() {
		return ((T (*)(HealthAnimator*))(Il2CppBase() + 0x3B1568))(this);
	}
	template <typename T = void> T SetPartialHealthEffect(float ratio) {
		return ((T (*)(HealthAnimator*, float))(Il2CppBase() + 0x3B1454))(this, ratio);
	}
	template <typename T = bool> T IsPartialHealthEffectActive() {
		return ((T (*)(HealthAnimator*))(Il2CppBase() + 0x3B1514))(this);
	}
	template <typename T = void> T Update(float time) {
		return ((T (*)(HealthAnimator*, float))(Il2CppBase() + 0x3AF154))(this, time);
	}
};
