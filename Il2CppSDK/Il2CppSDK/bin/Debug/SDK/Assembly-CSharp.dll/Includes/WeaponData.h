#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& m_AmmoInLevel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_AmmoInPockets() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_MaxAmmoInClip() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_MaxAmmoInWeapon() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_Evaluation() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(WeaponData*))(Il2CppBase() + 0x1F2CFC))(this);
	}
};
