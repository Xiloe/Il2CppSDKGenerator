#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponSMG
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(WeaponSMG*))(Il2CppBase() + 0x285B38))(this);
	}
};
