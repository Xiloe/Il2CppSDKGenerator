#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShopItemInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79708);
	}
	// Fields
	template <typename T = bool> T& EmptySlot() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& SpriteWidget() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& NameTextId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Upgrade() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& MaxUpgrade() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& NextUpgrade() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& Owned() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& Locked() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = int32_t> T& RequiredLevel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& Equiped() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& NewInShop() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = bool> T& PriceSale() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = bool> T& JustUnlocked() {
		return *(T*)((uintptr_t)this + 0x2B);
	}
	template <typename T = Il2CppString*> T& DiscountTag() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& DiscountTagSmall() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Cost() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& CostBeforeSale() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& GoldCurrency() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& IAPCost() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& UpgradeCost() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& UpgradeGoldCurrency() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& UpgradeRank() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& UpgradeReady() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& UpgradeMaxed() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = int32_t> T& WeaponAccuracy() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& WeaponDamage() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& WeaponRange() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& WeaponClip() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& WeaponAccuracyMax() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& WeaponDamageMax() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& WeaponRangeMax() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& WeaponClipMax() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& WeaponInfParam1() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& WeaponInfParam2() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& WeaponInfParam3() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& WeaponInfParam4() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& ItemParam1() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& ItemParam1Name() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& ItemParam1Info() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& OwnedCount() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& ShopCount() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& MissionMaxCount() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& InfiniteUse() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& AddGold() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& AddMoney() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ShopItemInfo*))(Il2CppBase() + 0x2395F4))(this);
	}
};
