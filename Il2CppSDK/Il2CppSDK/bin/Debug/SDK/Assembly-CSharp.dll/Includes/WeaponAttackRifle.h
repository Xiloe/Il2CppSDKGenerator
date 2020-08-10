#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponAttackRifle
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
		return ((T (*)(WeaponAttackRifle*))(Il2CppBase() + 0x27C770))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(WeaponAttackRifle*))(Il2CppBase() + 0x27C85C))(this);
	}
	template <typename T = bool> T FireStartupDone() {
		return ((T (*)(WeaponAttackRifle*))(Il2CppBase() + 0x27C860))(this);
	}
	template <typename T = void> T Fire() {
		return ((T (*)(WeaponAttackRifle*))(Il2CppBase() + 0x27C8CC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WeaponAttackRifle*))(Il2CppBase() + 0x27D0B4))(this);
	}
	template <typename T = void> T PlaySoundFireStart() {
		return ((T (*)(WeaponAttackRifle*))(Il2CppBase() + 0x27CAF0))(this);
	}
	template <typename T = void> T PlaySoundFire() {
		return ((T (*)(WeaponAttackRifle*))(Il2CppBase() + 0x27D2E8))(this);
	}
};
