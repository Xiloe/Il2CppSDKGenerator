#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class Item2InventoryConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "Item2InventoryConfig"));
	}

	template <typename T = uintptr_t> T& EWeaponName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& WeaponName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& ConfigFilePath() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& ConfigFilePath_BR() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& ConfigFilePath_PVE() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& AssetName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& WeaponAssetGroupID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& AnimationTemplateItemID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfigFilePathType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfigFilePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_EWeaponName() {
		return ((T (*)(Item2InventoryConfig*))(Il2CppBase() + 0x3765F00))(this);
	}
	template <typename T = void> T set_EWeaponName(uintptr_t value) {
		return ((T (*)(Item2InventoryConfig*, uintptr_t))(Il2CppBase() + 0x3765F08))(this, value);
	}
	template <typename T = void> T PostInit() {
		return ((T (*)(Item2InventoryConfig*))(Il2CppBase() + 0x3765F10))(this);
	}
	template <typename T = uintptr_t> T GetConfigFilePathType() {
		return ((T (*)(Item2InventoryConfig*))(Il2CppBase() + 0x376601C))(this);
	}
	template <typename T = Il2CppString*> T get_WeaponConfigFilePath() {
		return ((T (*)(Item2InventoryConfig*))(Il2CppBase() + 0x3766228))(this);
	}
	template <typename T = Il2CppString*> T GetConfigFilePath(uintptr_t filePathType) {
		return ((T (*)(Item2InventoryConfig*, uintptr_t))(Il2CppBase() + 0x3766318))(this, filePathType);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(Item2InventoryConfig*))(Il2CppBase() + 0x3766434))(this);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(Item2InventoryConfig*))(Il2CppBase() + 0x37664D4))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(Item2InventoryConfig*, int32_t))(Il2CppBase() + 0x37664DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_WeaponName() {
		return ((T (*)(Item2InventoryConfig*))(Il2CppBase() + 0x3766014))(this);
	}
	template <typename T = void> T set_WeaponName(Il2CppString* value) {
		return ((T (*)(Item2InventoryConfig*, Il2CppString*))(Il2CppBase() + 0x37664E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ConfigFilePath() {
		return ((T (*)(Item2InventoryConfig*))(Il2CppBase() + 0x3766300))(this);
	}
	template <typename T = void> T set_ConfigFilePath(Il2CppString* value) {
		return ((T (*)(Item2InventoryConfig*, Il2CppString*))(Il2CppBase() + 0x37664EC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ConfigFilePath_BR() {
		return ((T (*)(Item2InventoryConfig*))(Il2CppBase() + 0x3766308))(this);
	}
	template <typename T = void> T set_ConfigFilePath_BR(Il2CppString* value) {
		return ((T (*)(Item2InventoryConfig*, Il2CppString*))(Il2CppBase() + 0x37664F4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ConfigFilePath_PVE() {
		return ((T (*)(Item2InventoryConfig*))(Il2CppBase() + 0x3766310))(this);
	}
	template <typename T = void> T set_ConfigFilePath_PVE(Il2CppString* value) {
		return ((T (*)(Item2InventoryConfig*, Il2CppString*))(Il2CppBase() + 0x37664FC))(this, value);
	}
	template <typename T = Il2CppString*> T get_AssetName() {
		return ((T (*)(Item2InventoryConfig*))(Il2CppBase() + 0x3766504))(this);
	}
	template <typename T = void> T set_AssetName(Il2CppString* value) {
		return ((T (*)(Item2InventoryConfig*, Il2CppString*))(Il2CppBase() + 0x376650C))(this, value);
	}
	template <typename T = int32_t> T get_WeaponAssetGroupID() {
		return ((T (*)(Item2InventoryConfig*))(Il2CppBase() + 0x3766514))(this);
	}
	template <typename T = void> T set_WeaponAssetGroupID(int32_t value) {
		return ((T (*)(Item2InventoryConfig*, int32_t))(Il2CppBase() + 0x376651C))(this, value);
	}
	template <typename T = int32_t> T get_AnimationTemplateItemID() {
		return ((T (*)(Item2InventoryConfig*))(Il2CppBase() + 0x3766524))(this);
	}
	template <typename T = void> T set_AnimationTemplateItemID(int32_t value) {
		return ((T (*)(Item2InventoryConfig*, int32_t))(Il2CppBase() + 0x376652C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(Item2InventoryConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3766534))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(Item2InventoryConfig*))(Il2CppBase() + 0x37666EC))(this);
	}

};

}
