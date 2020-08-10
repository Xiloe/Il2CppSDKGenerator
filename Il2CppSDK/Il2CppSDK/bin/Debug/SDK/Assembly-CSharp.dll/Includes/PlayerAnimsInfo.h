#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerAnimsInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Run() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& Walk() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& Idle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Fire() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& Reload() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& Arm() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& Disarm() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& InjuryL() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& InjuryR() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& InjuryFrontL() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& InjuryFrontR() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& Death() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& StrafeL() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& StrafeR() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& AimIdle() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& AimFire() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& AimWalk() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PlayerAnimsInfo*))(Il2CppBase() + 0x27D400))(this);
	}
};
