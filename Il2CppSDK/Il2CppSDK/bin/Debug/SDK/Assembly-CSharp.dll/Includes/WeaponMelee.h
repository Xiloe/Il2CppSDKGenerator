#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponMelee
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& m_Firing() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& m_StartFire() {
		return *(T*)((uintptr_t)this + 0x6D);
	}
	template <typename T = float> T& m_FireTimer() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(WeaponMelee*))(Il2CppBase() + 0x28490C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(WeaponMelee*))(Il2CppBase() + 0x284918))(this);
	}
	template <typename T = bool> T FireStartupDone() {
		return ((T (*)(WeaponMelee*))(Il2CppBase() + 0x28491C))(this);
	}
	template <typename T = void> T Fire() {
		return ((T (*)(WeaponMelee*))(Il2CppBase() + 0x284964))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WeaponMelee*))(Il2CppBase() + 0x284C70))(this);
	}
	template <typename T = void> T PlaySoundFireStart() {
		return ((T (*)(WeaponMelee*))(Il2CppBase() + 0x284B88))(this);
	}
	template <typename T = bool> T IsPlayingIdleSound() {
		return ((T (*)(WeaponMelee*))(Il2CppBase() + 0x284F48))(this);
	}
	template <typename T = void> T PlaySoundIdle() {
		return ((T (*)(WeaponMelee*))(Il2CppBase() + 0x284FC4))(this);
	}
	template <typename T = bool> T IsPlayingFireSound() {
		return ((T (*)(WeaponMelee*))(Il2CppBase() + 0x2850AC))(this);
	}
	template <typename T = void> T PlaySoundFire() {
		return ((T (*)(WeaponMelee*))(Il2CppBase() + 0x285188))(this);
	}
};
