#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShopItemId
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD789F8);
	}
	// Fields
	template <typename T = void*> static T& EmptyId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& ItemType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor(int32_t id, void* type) {
		return ((T (*)(ShopItemId*, int32_t, void*))(Il2CppBase() + 0x23992C))(this, id, type);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2457D8))(0);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(ShopItemId*))(Il2CppBase() + 0x23A928))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(ShopItemId*, int32_t))(Il2CppBase() + 0x2457C8))(this, value);
	}
	template <typename T = void*> T get_ItemType() {
		return ((T (*)(ShopItemId*))(Il2CppBase() + 0x23A920))(this);
	}
	template <typename T = void> T set_ItemType(void* value) {
		return ((T (*)(ShopItemId*, void*))(Il2CppBase() + 0x2457D0))(this, value);
	}
	template <typename T = bool> T IsEmpty() {
		return ((T (*)(ShopItemId*))(Il2CppBase() + 0x24587C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ShopItemId*))(Il2CppBase() + 0x24593C))(this);
	}
	template <typename T = int32_t> T CompareTo(void* other) {
		return ((T (*)(ShopItemId*, void*))(Il2CppBase() + 0x245BDC))(this, other);
	}
	template <typename T = int32_t> T CompareByPrice(void* other) {
		return ((T (*)(ShopItemId*, void*))(Il2CppBase() + 0x244F98))(this, other);
	}
	template <typename T = int32_t> T CompareByType(void* other) {
		return ((T (*)(ShopItemId*, void*))(Il2CppBase() + 0x244D8C))(this, other);
	}
	template <typename T = int32_t> T CompareWeapon_ByPrice(int32_t otherId) {
		return ((T (*)(ShopItemId*, int32_t))(Il2CppBase() + 0x245BE0))(this, otherId);
	}
	template <typename T = uint32_t> T GetWeaponCost(void* inf) {
		return ((T (*)(ShopItemId*, void*))(Il2CppBase() + 0x246820))(this, inf);
	}
	template <typename T = int32_t> T CompareItem_ByPrice(int32_t otherId) {
		return ((T (*)(ShopItemId*, int32_t))(Il2CppBase() + 0x245E94))(this, otherId);
	}
	template <typename T = int32_t> T CompareWeapon_ByType(int32_t otherId) {
		return ((T (*)(ShopItemId*, int32_t))(Il2CppBase() + 0x246470))(this, otherId);
	}
	template <typename T = int32_t> T CompareItem_ByType(int32_t otherId) {
		return ((T (*)(ShopItemId*, int32_t))(Il2CppBase() + 0x246698))(this, otherId);
	}
	template <typename T = int32_t> T CompareUpgrade(int32_t otherId) {
		return ((T (*)(ShopItemId*, int32_t))(Il2CppBase() + 0x24601C))(this, otherId);
	}
	template <typename T = int32_t> T UpgradeTypeOrder(void* type) {
		return ((T (*)(ShopItemId*, void*))(Il2CppBase() + 0x24686C))(this, type);
	}
	template <typename T = int32_t> T CompareFund(int32_t otherId) {
		return ((T (*)(ShopItemId*, int32_t))(Il2CppBase() + 0x2462F0))(this, otherId);
	}
	template <typename T = bool> T Equals(void* other) {
		return ((T (*)(ShopItemId*, void*))(Il2CppBase() + 0x24688C))(this, other);
	}
	template <typename T = bool> T Equals_1(void* obj) {
		return ((T (*)(ShopItemId*, void*))(Il2CppBase() + 0x2468C4))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ShopItemId*))(Il2CppBase() + 0x2469B0))(this);
	}
};
