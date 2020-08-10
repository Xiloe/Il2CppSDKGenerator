#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WpnSettings
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& m_AmmoClip() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_AverageKilledSec() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_AverageKilledNum() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_FireRate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_FireEffectTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_ReloadDelay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_Dispersion() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_RangeEffective() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_RangeMaximal() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_ProjSpeed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_ProjImpuls() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_ProjType() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(WpnSettings*))(Il2CppBase() + 0x276E20))(this);
	}
};
