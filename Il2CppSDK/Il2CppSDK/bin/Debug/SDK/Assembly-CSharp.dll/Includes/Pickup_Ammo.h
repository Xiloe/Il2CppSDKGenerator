#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PickupAmmo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78CF8);
	}
	// Fields
	template <typename T = int32_t> T& m_Amount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_WeaponID() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PickupAmmo*))(Il2CppBase() + 0x1F0868))(this);
	}
	template <typename T = void*> T GetID() {
		return ((T (*)(PickupAmmo*))(Il2CppBase() + 0x1F086C))(this);
	}
	template <typename T = void> T OnExpiration() {
		return ((T (*)(PickupAmmo*))(Il2CppBase() + 0x1F0874))(this);
	}
};
