#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponGrenadeLauncher
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(WeaponGrenadeLauncher*))(Il2CppBase() + 0x281A30))(this);
	}
	template <typename T = void> T SpawnProjectile() {
		return ((T (*)(WeaponGrenadeLauncher*))(Il2CppBase() + 0x281A34))(this);
	}
};
