#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponWidgets
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Weapon() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_WeaponName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_WeaponAmmo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_ActiveWeaponBck() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_WeaponBlink() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(WeaponWidgets*))(Il2CppBase() + 0x3BB680))(this);
	}
};
