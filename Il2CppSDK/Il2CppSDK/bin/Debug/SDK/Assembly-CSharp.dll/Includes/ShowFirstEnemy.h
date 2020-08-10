#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowFirstEnemy
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& Camera() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& CameraAnim() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& FadeOutTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& FadeInTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& PlayerFinalPos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& Enemy() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ShowFirstEnemy*))(Il2CppBase() + 0x2566D8))(this);
	}
};
