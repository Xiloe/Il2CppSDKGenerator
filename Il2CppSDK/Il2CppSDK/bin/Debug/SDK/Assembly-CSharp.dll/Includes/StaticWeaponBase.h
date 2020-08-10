#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StaticWeaponBase
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_AimSystem() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(StaticWeaponBase*))(Il2CppBase() + 0x25E324))(this);
	}
};
