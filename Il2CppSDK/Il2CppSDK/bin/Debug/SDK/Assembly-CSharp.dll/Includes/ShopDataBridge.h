#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShopDataBridge
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD789DC);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& MissingWidget() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x239330))(this);
	}
	template <typename T = void*> T get_PPI() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x239338))(this);
	}
	template <typename T = void*> T get_MissingWidget() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x2393EC))(this);
	}
	template <typename T = void> T set_MissingWidget(void* value) {
		return ((T (*)(ShopDataBridge*, void*))(Il2CppBase() + 0x2393F4))(this, value);
	}
	template <typename T = void> static T CreateInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x2393FC))(0);
	}
	template <typename T = void*> T CreateEmptySlotInfo() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x239544))(this);
	}
	template <typename T = Il2CppList<void*>*> T GetOwnedWeapons() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x2395FC))(this);
	}
	template <typename T = Il2CppList<void*>*> T GetOwnedItems(bool excludeBoosters) {
		return ((T (*)(ShopDataBridge*, bool))(Il2CppBase() + 0x239954))(this, excludeBoosters);
	}
	template <typename T = Il2CppList<void*>*> T GetWeapons() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x239D34))(this);
	}
	template <typename T = Il2CppList<void*>*> T GetItems() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x239F08))(this);
	}
	template <typename T = Il2CppList<void*>*> T GetItemsTutorial() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x23A0EC))(this);
	}
	template <typename T = Il2CppList<void*>*> T GetFunds() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x23A1F4))(this);
	}
	template <typename T = Il2CppList<void*>*> T GetUpgrades() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x23A3D8))(this);
	}
	template <typename T = void*> T GetItemInfo(void* itemId) {
		return ((T (*)(ShopDataBridge*, void*))(Il2CppBase() + 0x23A6F0))(this, itemId);
	}
	template <typename T = void*> T GetOwnedWeaponData(void* id) {
		return ((T (*)(ShopDataBridge*, void*))(Il2CppBase() + 0x23BEC4))(this, id);
	}
	template <typename T = void> T SetOwnedWeaponUpgrade(void* id, int32_t upgLevel) {
		return ((T (*)(ShopDataBridge*, void*, int32_t))(Il2CppBase() + 0x23C24C))(this, id, upgLevel);
	}
	template <typename T = void> T SetWeaponSlot(void* id, int32_t slot) {
		return ((T (*)(ShopDataBridge*, void*, int32_t))(Il2CppBase() + 0x23C538))(this, id, slot);
	}
	template <typename T = void*> T GetOwnedItemData(void* id) {
		return ((T (*)(ShopDataBridge*, void*))(Il2CppBase() + 0x23C754))(this, id);
	}
	template <typename T = void> T SetOwnedItemCount(void* id, int32_t newCount) {
		return ((T (*)(ShopDataBridge*, void*, int32_t))(Il2CppBase() + 0x23CA94))(this, id, newCount);
	}
	template <typename T = void> T SetItemSlot(void* id, int32_t slot) {
		return ((T (*)(ShopDataBridge*, void*, int32_t))(Il2CppBase() + 0x23CD84))(this, id, slot);
	}
	template <typename T = bool> T HasOwnedUpgrade(void* id) {
		return ((T (*)(ShopDataBridge*, void*))(Il2CppBase() + 0x23CF9C))(this, id);
	}
	template <typename T = int32_t> T DmgPerSec(void* wpnData) {
		return ((T (*)(ShopDataBridge*, void*))(Il2CppBase() + 0x23D200))(this, wpnData);
	}
	template <typename T = int32_t> T Accuracy(void* wpnData) {
		return ((T (*)(ShopDataBridge*, void*))(Il2CppBase() + 0x23D2A8))(this, wpnData);
	}
	template <typename T = int32_t> T Range(void* wpnData) {
		return ((T (*)(ShopDataBridge*, void*))(Il2CppBase() + 0x23D3E0))(this, wpnData);
	}
	template <typename T = void*> T GetShopWeaponInfo(int32_t id) {
		return ((T (*)(ShopDataBridge*, int32_t))(Il2CppBase() + 0x23A930))(this, id);
	}
	template <typename T = void*> T GetShopItemInfo(int32_t id) {
		return ((T (*)(ShopDataBridge*, int32_t))(Il2CppBase() + 0x23B044))(this, id);
	}
	template <typename T = void*> T GetShopUpgradeInfo(int32_t id) {
		return ((T (*)(ShopDataBridge*, int32_t))(Il2CppBase() + 0x23BA30))(this, id);
	}
	template <typename T = void*> T GetShopFundInfo(int32_t id) {
		return ((T (*)(ShopDataBridge*, int32_t))(Il2CppBase() + 0x23B52C))(this, id);
	}
	template <typename T = bool> T IsWeaponSlotLocked(int32_t slotIndex) {
		return ((T (*)(ShopDataBridge*, int32_t))(Il2CppBase() + 0x23D5BC))(this, slotIndex);
	}
	template <typename T = bool> T IsItemSlotLocked(int32_t slotIndex) {
		return ((T (*)(ShopDataBridge*, int32_t))(Il2CppBase() + 0x23D5FC))(this, slotIndex);
	}
	template <typename T = bool> T HaveEnoughMoney(void* itemId, float discount) {
		return ((T (*)(ShopDataBridge*, void*, float))(Il2CppBase() + 0x23D63C))(this, itemId, discount);
	}
	template <typename T = bool> T HaveEnoughMoneyForUpgrade(void* itemId) {
		return ((T (*)(ShopDataBridge*, void*))(Il2CppBase() + 0x23D7D4))(this, itemId);
	}
	template <typename T = void> T RequiredFunds(void* itemId, void** fundsNeeded, void** isGold) {
		return ((T (*)(ShopDataBridge*, void*, void**, void**))(Il2CppBase() + 0x23D8FC))(this, itemId, fundsNeeded, isGold);
	}
	template <typename T = void> T RequiredFundsForUpgrade(void* itemId, void** fundsNeeded, void** isGold) {
		return ((T (*)(ShopDataBridge*, void*, void**, void**))(Il2CppBase() + 0x23D934))(this, itemId, fundsNeeded, isGold);
	}
	template <typename T = void> T MissingFunds(void* itemId, void** fundsMissing, void** isGold, float discount) {
		return ((T (*)(ShopDataBridge*, void*, void**, void**, float))(Il2CppBase() + 0x23D67C))(this, itemId, fundsMissing, isGold, discount);
	}
	template <typename T = void> T MissingFundsForUpgrade(void* itemId, void** fundsMissing, void** isGold) {
		return ((T (*)(ShopDataBridge*, void*, void**, void**))(Il2CppBase() + 0x23D810))(this, itemId, fundsMissing, isGold);
	}
	template <typename T = void*> T FindFundsItem(int32_t fundsRequest, bool isGold, bool useConversion, void** convertGoldsRequired) {
		return ((T (*)(ShopDataBridge*, int32_t, bool, bool, void**))(Il2CppBase() + 0x23D9C4))(this, fundsRequest, isGold, useConversion, convertGoldsRequired);
	}
	template <typename T = void> T AddToPlayerInventory(void* itemId) {
		return ((T (*)(ShopDataBridge*, void*))(Il2CppBase() + 0x23DF88))(this, itemId);
	}
	template <typename T = void> T SynchroniseBoughtItem(void* itemId, float discount) {
		return ((T (*)(ShopDataBridge*, void*, float))(Il2CppBase() + 0x23E478))(this, itemId, discount);
	}
	template <typename T = void> T UpgradeWeapon(void* itemId) {
		return ((T (*)(ShopDataBridge*, void*))(Il2CppBase() + 0x23E614))(this, itemId);
	}
	template <typename T = void> T RemoveFunds(void* itemId, float discount) {
		return ((T (*)(ShopDataBridge*, void*, float))(Il2CppBase() + 0x23E494))(this, itemId, discount);
	}
	template <typename T = void> T RemoveUpgradeFunds(void* itemId) {
		return ((T (*)(ShopDataBridge*, void*))(Il2CppBase() + 0x23E8F0))(this, itemId);
	}
	template <typename T = int32_t> T EquippedWeaponsCount() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x23E944))(this);
	}
	template <typename T = void> T Debug_LogEquipedWeapons() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x23E9F0))(this);
	}
	template <typename T = void> T Debug_LogOwnedWeapons() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x23EF88))(this);
	}
	template <typename T = void> T Debug_LogOwnedItems() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x23F32C))(this);
	}
	template <typename T = void> T Debug_LogEquipedItems() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x23F8B0))(this);
	}
	template <typename T = bool> T IsWeaponEquiped(int32_t id) {
		return ((T (*)(ShopDataBridge*, int32_t))(Il2CppBase() + 0x23FF20))(this, id);
	}
	template <typename T = bool> T IsItemEquiped(int32_t id) {
		return ((T (*)(ShopDataBridge*, int32_t))(Il2CppBase() + 0x2401C8))(this, id);
	}
	template <typename T = bool> T IsEquiped(void* itemId) {
		return ((T (*)(ShopDataBridge*, void*))(Il2CppBase() + 0x240448))(this, itemId);
	}
	template <typename T = int32_t> T get_PlayerXP() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x240494))(this);
	}
	template <typename T = int32_t> T get_PlayerLevel() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x23D420))(this);
	}
	template <typename T = int32_t> T get_PlayerGold() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x23D96C))(this);
	}
	template <typename T = int32_t> T get_PlayerMoney() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x23D998))(this);
	}
	template <typename T = int32_t> T GetShopItemGUID(void* itm) {
		return ((T (*)(ShopDataBridge*, void*))(Il2CppBase() + 0x23D454))(this, itm);
	}
	template <typename T = void*> T FindFundSettings(int32_t guid) {
		return ((T (*)(ShopDataBridge*, int32_t))(Il2CppBase() + 0x2404C0))(this, guid);
	}
	template <typename T = void*> T GetWeaponInSlot(int32_t slotIdx) {
		return ((T (*)(ShopDataBridge*, int32_t))(Il2CppBase() + 0x2405F8))(this, slotIdx);
	}
	template <typename T = void*> T GetItemInSlot(int32_t slotIdx) {
		return ((T (*)(ShopDataBridge*, int32_t))(Il2CppBase() + 0x240930))(this, slotIdx);
	}
	template <typename T = void> T Action_EquipBooster(void* item) {
		return ((T (*)(ShopDataBridge*, void*))(Il2CppBase() + 0x240C44))(this, item);
	}
	template <typename T = void> T Action_Equip(void* item, int32_t slot) {
		return ((T (*)(ShopDataBridge*, void*, int32_t))(Il2CppBase() + 0x240F80))(this, item, slot);
	}
	template <typename T = void> T Action_UnEquip(void* item, int32_t slot) {
		return ((T (*)(ShopDataBridge*, void*, int32_t))(Il2CppBase() + 0x242120))(this, item, slot);
	}
	template <typename T = int32_t> static T CompareWeaponData(void* x, void* y) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x24301C))(0, x, y);
	}
	template <typename T = int32_t> static T CompareItemData(void* x, void* y) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x243060))(0, x, y);
	}
	template <typename T = void> T EquipWeapon(void* id, int32_t slot) {
		return ((T (*)(ShopDataBridge*, void*, int32_t))(Il2CppBase() + 0x240FC8))(this, id, slot);
	}
	template <typename T = void> T EquipBooster(void* id) {
		return ((T (*)(ShopDataBridge*, void*))(Il2CppBase() + 0x240C78))(this, id);
	}
	template <typename T = void> T EquipItem(void* id, int32_t slot) {
		return ((T (*)(ShopDataBridge*, void*, int32_t))(Il2CppBase() + 0x241854))(this, id, slot);
	}
	template <typename T = void> T UnEquipWeapon(void* id, int32_t slot) {
		return ((T (*)(ShopDataBridge*, void*, int32_t))(Il2CppBase() + 0x242168))(this, id, slot);
	}
	template <typename T = void> T UnEquipItem(void* id, int32_t slot) {
		return ((T (*)(ShopDataBridge*, void*, int32_t))(Il2CppBase() + 0x242940))(this, id, slot);
	}
	template <typename T = bool> T IAPServiceAvailable() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x2430C0))(this);
	}
	template <typename T = void> T InitializeIAPS() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x243168))(this);
	}
	template <typename T = void> T IAPRequestPurchase(void* item, void* callback) {
		return ((T (*)(ShopDataBridge*, void*, void*))(Il2CppBase() + 0x2432C0))(this, item, callback);
	}
	template <typename T = void*> T IAPInitialize_Coroutine() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x243234))(this);
	}
	template <typename T = void*> T IAPRequestPurchase_Coroutine(void* product, void* callback) {
		return ((T (*)(ShopDataBridge*, void*, void*))(Il2CppBase() + 0x2434B0))(this, product, callback);
	}
	template <typename T = void> T IAPProcessBoughtItem(int32_t guid) {
		return ((T (*)(ShopDataBridge*, int32_t))(Il2CppBase() + 0x243574))(this, guid);
	}
	template <typename T = bool> T IsIAPFund(void* itemId) {
		return ((T (*)(ShopDataBridge*, void*))(Il2CppBase() + 0x2438A8))(this, itemId);
	}
	template <typename T = void*> T AmmoUpgInfo() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x243934))(this);
	}
	template <typename T = void*> T HealthUpgInfo() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x243A44))(this);
	}
	template <typename T = void*> T RadarUpgInfo() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x243BB4))(this);
	}
	template <typename T = void*> T AutohealUpgInfo() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x243CA0))(this);
	}
	template <typename T = void*> T NextAmmoUpg() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x243D80))(this);
	}
	template <typename T = void*> T NextHealthUpg() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x243E98))(this);
	}
	template <typename T = void*> T NextRadarUpg() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x243FB0))(this);
	}
	template <typename T = void*> T NextAutohealUpg() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x24409C))(this);
	}
	template <typename T = Il2CppString*> static T FormatDamage(int32_t dmg) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x244188))(0, dmg);
	}
	template <typename T = bool> T IsFreeGold(void* item) {
		return ((T (*)(ShopDataBridge*, void*))(Il2CppBase() + 0x2438F0))(this, item);
	}
	template <typename T = bool> T NewItemsUnlocked(int32_t rank) {
		return ((T (*)(ShopDataBridge*, int32_t))(Il2CppBase() + 0x2442B0))(this, rank);
	}
	template <typename T = void*> T GetUnequipedItem() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x24455C))(this);
	}
	template <typename T = void*> T GetUnequipedWeapon() {
		return ((T (*)(ShopDataBridge*))(Il2CppBase() + 0x244870))(this);
	}
	template <typename T = bool> T HasWeaponUpgradeAvailable(void* weaponId) {
		return ((T (*)(ShopDataBridge*, void*))(Il2CppBase() + 0x244BA4))(this, weaponId);
	}
	template <typename T = bool> T BuyMoreAdvised(void* itemId) {
		return ((T (*)(ShopDataBridge*, void*))(Il2CppBase() + 0x244C70))(this, itemId);
	}
	template <typename T = int32_t> static T CompareEquip(void* first, void* second) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x244D60))(0, first, second);
	}
	template <typename T = int32_t> static T CompareShop(void* first, void* second) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x244F6C))(0, first, second);
	}
};
