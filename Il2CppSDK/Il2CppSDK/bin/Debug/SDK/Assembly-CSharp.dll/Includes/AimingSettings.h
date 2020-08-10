#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AimingSettings
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& m_HRange() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_HSpeed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_VRange() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_VSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_FOV() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_InSightsTolerance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_TargetLostTimeout() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AimingSettings*))(Il2CppBase() + 0x276DCC))(this);
	}
};
