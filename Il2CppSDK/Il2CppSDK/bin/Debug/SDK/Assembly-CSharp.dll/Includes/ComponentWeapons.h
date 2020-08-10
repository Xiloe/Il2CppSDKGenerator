#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ComponentWeapons
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Hand() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_CurrentWeapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& MoveDispersion() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& ShootDispersion() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppDictionary<void*, void*>*> T& Weapons() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ComponentWeapons*))(Il2CppBase() + 0x2E1C40))(this);
	}
	template <typename T = Il2CppDictionary<void*, void*>*> T get_Weapons() {
		return ((T (*)(ComponentWeapons*))(Il2CppBase() + 0x2E1C48))(this);
	}
	template <typename T = void> T set_Weapons(Il2CppDictionary<void*, void*>* value) {
		return ((T (*)(ComponentWeapons*, Il2CppDictionary<void*, void*>*))(Il2CppBase() + 0x2E1C50))(this, value);
	}
	template <typename T = void*> T get_CurrentWeapon() {
		return ((T (*)(ComponentWeapons*))(Il2CppBase() + 0x2E1C58))(this);
	}
	template <typename T = void> T set_CurrentWeapon(void* value) {
		return ((T (*)(ComponentWeapons*, void*))(Il2CppBase() + 0x2E1C60))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ComponentWeapons*))(Il2CppBase() + 0x2E1CA8))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(ComponentWeapons*))(Il2CppBase() + 0x2E1F38))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(ComponentWeapons*))(Il2CppBase() + 0x2E1F9C))(this);
	}
	template <typename T = void*> T GetCurrentWeapon() {
		return ((T (*)(ComponentWeapons*))(Il2CppBase() + 0x2DFC90))(this);
	}
	template <typename T = void*> T GetWeapon(void* t) {
		return ((T (*)(ComponentWeapons*, void*))(Il2CppBase() + 0x2E28A8))(this, t);
	}
	template <typename T = void> T SwitchWeapons(void* weaponID) {
		return ((T (*)(ComponentWeapons*, void*))(Il2CppBase() + 0x2E2988))(this, weaponID);
	}
	template <typename T = void> T DisableCurrentWeapon(float disableTime) {
		return ((T (*)(ComponentWeapons*, float))(Il2CppBase() + 0x2E2B98))(this, disableTime);
	}
	template <typename T = void> T HandleFire() {
		return ((T (*)(ComponentWeapons*))(Il2CppBase() + 0x2E26A0))(this);
	}
	template <typename T = void> T HandleAction(void* action) {
		return ((T (*)(ComponentWeapons*, void*))(Il2CppBase() + 0x2E2C54))(this, action);
	}
	template <typename T = bool> T AddAmmoToWeapon(void* WpnID, int32_t AmmoAmount) {
		return ((T (*)(ComponentWeapons*, void*, int32_t))(Il2CppBase() + 0x2E0838))(this, WpnID, AmmoAmount);
	}
	template <typename T = void> T OnCurrentWeaponChanged() {
		return ((T (*)(ComponentWeapons*))(Il2CppBase() + 0x2E2E04))(this);
	}
	template <typename T = void> T SetDefaultWeaponToHand(void* weapon) {
		return ((T (*)(ComponentWeapons*, void*))(Il2CppBase() + 0x2E2E08))(this, weapon);
	}
};
