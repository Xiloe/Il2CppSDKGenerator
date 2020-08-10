#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SlotViewWeapon
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79100);
	}
	// Fields
	template <typename T = void*> T& m_RootWidget() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_NameLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_WeaponSprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_UpgradeSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_LockSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_EmptyLabel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_UpgradeButton() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SlotViewWeapon*))(Il2CppBase() + 0x24743C))(this);
	}
	template <typename T = void> T InitGui(void* layout, void* btn, int32_t slotId) {
		return ((T (*)(SlotViewWeapon*, void*, void*, int32_t))(Il2CppBase() + 0x247444))(this, layout, btn, slotId);
	}
	template <typename T = void> T Show(void* id, bool locked) {
		return ((T (*)(SlotViewWeapon*, void*, bool))(Il2CppBase() + 0x247620))(this, id, locked);
	}
	template <typename T = void> T ShowEmpty(bool locked) {
		return ((T (*)(SlotViewWeapon*, bool))(Il2CppBase() + 0x247888))(this, locked);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(SlotViewWeapon*))(Il2CppBase() + 0x2479A0))(this);
	}
};
