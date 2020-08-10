#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StaticWeaponController
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_AimSystem() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(StaticWeaponController*))(Il2CppBase() + 0x25E32C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(StaticWeaponController*))(Il2CppBase() + 0x25E334))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(StaticWeaponController*))(Il2CppBase() + 0x25E3BC))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(StaticWeaponController*))(Il2CppBase() + 0x25E72C))(this);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(StaticWeaponController*))(Il2CppBase() + 0x25E8CC))(this);
	}
};
