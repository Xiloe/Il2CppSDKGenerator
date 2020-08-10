#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78D14);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<void*, void*>*> T& WeaponsCache() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<void*, void*>*> T& AmmoCache() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(WeaponManager*))(Il2CppBase() + 0x281E70))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(WeaponManager*))(Il2CppBase() + 0x281FA8))(this);
	}
	template <typename T = void*> T GetWeapon(void* id, void* upgrade, float ammoModifier) {
		return ((T (*)(WeaponManager*, void*, void*, float))(Il2CppBase() + 0x283BE0))(this, id, upgrade, ammoModifier);
	}
	template <typename T = void> T Return(void* weapon) {
		return ((T (*)(WeaponManager*, void*))(Il2CppBase() + 0x283EFC))(this, weapon);
	}
	template <typename T = void*> T GetAmmo(void* type) {
		return ((T (*)(WeaponManager*, void*))(Il2CppBase() + 0x284228))(this, type);
	}
	template <typename T = void> T Return_1(void* ammo) {
		return ((T (*)(WeaponManager*, void*))(Il2CppBase() + 0x284530))(this, ammo);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(WeaponManager*))(Il2CppBase() + 0x284850))(this);
	}
};
