#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiEquipMenu
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD789F4);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& m_Pivot() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_Layout() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_HighlightSprite() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_AmmoUpg_Button() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_HealthUpg_Button() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_RadarUpg_Button() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_AutohealUpg_Button() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_TutorialEquip() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_BackButton() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_PulseBackButton() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_OnHideDelegate() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& m_WeaponSlots() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& m_ItemSlots() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& m_CurrentSlotType() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_CurrentSlotIndex() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<void*>*> T& m_BuySlotGun() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<void*>*> T& m_BuySlotItem() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<void*>*> T& m_OnUpgrade() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<void*>*> T& m_OnBuyMore() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& IsShown() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& TutorialMode() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x373B6C))(this);
	}
	template <typename T = bool> T get_IsShown() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x373D20))(this);
	}
	template <typename T = void> T set_IsShown(bool value) {
		return ((T (*)(GuiEquipMenu*, bool))(Il2CppBase() + 0x373D28))(this, value);
	}
	template <typename T = bool> T get_TutorialMode() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x373D30))(this);
	}
	template <typename T = void> T set_TutorialMode(bool value) {
		return ((T (*)(GuiEquipMenu*, bool))(Il2CppBase() + 0x373D38))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x373D40))(this);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x373E64))(this);
	}
	template <typename T = void> T OnUpdatePPIInfo() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x3755D0))(this);
	}
	template <typename T = void> T SyncSlotsWithPPI() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x375610))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x375AF0))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x375F68))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x376370))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x3764D8))(this);
	}
	template <typename T = void> T OnGUI_Enable() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x3764E0))(this);
	}
	template <typename T = void> T OnGUI_Disable() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x376530))(this);
	}
	template <typename T = void> T UpdateLockedSlots() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x375364))(this);
	}
	template <typename T = void> T OnButtonBack(bool inside) {
		return ((T (*)(GuiEquipMenu*, bool))(Il2CppBase() + 0x3767D4))(this, inside);
	}
	template <typename T = void> T SelectSlot(void* slotType, int32_t slotIndex) {
		return ((T (*)(GuiEquipMenu*, void*, int32_t))(Il2CppBase() + 0x375D2C))(this, slotType, slotIndex);
	}
	template <typename T = void> T OnButtonUpgRadar(bool inside) {
		return ((T (*)(GuiEquipMenu*, bool))(Il2CppBase() + 0x37699C))(this, inside);
	}
	template <typename T = void> T OnButtonUpgAmmo(bool inside) {
		return ((T (*)(GuiEquipMenu*, bool))(Il2CppBase() + 0x376D10))(this, inside);
	}
	template <typename T = void> T OnButtonUpgAutoheal(bool inside) {
		return ((T (*)(GuiEquipMenu*, bool))(Il2CppBase() + 0x376DC8))(this, inside);
	}
	template <typename T = void> T OnButtonUpgHealth(bool inside) {
		return ((T (*)(GuiEquipMenu*, bool))(Il2CppBase() + 0x376E80))(this, inside);
	}
	template <typename T = void> T OnBuySlotGun2(bool inside) {
		return ((T (*)(GuiEquipMenu*, bool))(Il2CppBase() + 0x376F38))(this, inside);
	}
	template <typename T = void> T OnBuySlotGun3(bool inside) {
		return ((T (*)(GuiEquipMenu*, bool))(Il2CppBase() + 0x376FE4))(this, inside);
	}
	template <typename T = void> T OnBuySlotItem2(bool inside) {
		return ((T (*)(GuiEquipMenu*, bool))(Il2CppBase() + 0x3770E4))(this, inside);
	}
	template <typename T = void> T OnBuySlotItem3(bool inside) {
		return ((T (*)(GuiEquipMenu*, bool))(Il2CppBase() + 0x377190))(this, inside);
	}
	template <typename T = void> T BuyDirectly(void* selId) {
		return ((T (*)(GuiEquipMenu*, void*))(Il2CppBase() + 0x376A54))(this, selId);
	}
	template <typename T = void> T OnWeaponSelected(int32_t slotIndex) {
		return ((T (*)(GuiEquipMenu*, int32_t))(Il2CppBase() + 0x3773D8))(this, slotIndex);
	}
	template <typename T = void> T OnItemSelected(int32_t slotIndex) {
		return ((T (*)(GuiEquipMenu*, int32_t))(Il2CppBase() + 0x3773DC))(this, slotIndex);
	}
	template <typename T = void> T HighlightSlot(void* slotType, int32_t slotIndex) {
		return ((T (*)(GuiEquipMenu*, void*, int32_t))(Il2CppBase() + 0x3773E0))(this, slotType, slotIndex);
	}
	template <typename T = bool> T ShopAvailable() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x377618))(this);
	}
	template <typename T = void> T UpdateUpgradesButtons() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x375D98))(this);
	}
	template <typename T = void> T UpdateAmmoUpg() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x3776EC))(this);
	}
	template <typename T = void> T UpdateHealthUpg() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x37797C))(this);
	}
	template <typename T = void> T UpdateRadarUpg() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x377BEC))(this);
	}
	template <typename T = void> T UpdateAutohealUpg() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x377E5C))(this);
	}
	template <typename T = void> T TryEquipBoughtItem(void* item) {
		return ((T (*)(GuiEquipMenu*, void*))(Il2CppBase() + 0x377FC4))(this, item);
	}
	template <typename T = void> T OnBuyUpgrade0(bool inside) {
		return ((T (*)(GuiEquipMenu*, bool))(Il2CppBase() + 0x3782F8))(this, inside);
	}
	template <typename T = void> T OnBuyUpgrade1(bool inside) {
		return ((T (*)(GuiEquipMenu*, bool))(Il2CppBase() + 0x378764))(this, inside);
	}
	template <typename T = void> T OnBuyUpgrade2(bool inside) {
		return ((T (*)(GuiEquipMenu*, bool))(Il2CppBase() + 0x378774))(this, inside);
	}
	template <typename T = void> T OnBuyUpgrade3(bool inside) {
		return ((T (*)(GuiEquipMenu*, bool))(Il2CppBase() + 0x378784))(this, inside);
	}
	template <typename T = void> T BuyUpgrade(int32_t slot) {
		return ((T (*)(GuiEquipMenu*, int32_t))(Il2CppBase() + 0x378308))(this, slot);
	}
	template <typename T = void> T OnBuyMore0(bool inside) {
		return ((T (*)(GuiEquipMenu*, bool))(Il2CppBase() + 0x378B18))(this, inside);
	}
	template <typename T = void> T OnBuyMore1(bool inside) {
		return ((T (*)(GuiEquipMenu*, bool))(Il2CppBase() + 0x378D7C))(this, inside);
	}
	template <typename T = void> T OnBuyMore2(bool inside) {
		return ((T (*)(GuiEquipMenu*, bool))(Il2CppBase() + 0x378D8C))(this, inside);
	}
	template <typename T = void> T OnBuyMore3(bool inside) {
		return ((T (*)(GuiEquipMenu*, bool))(Il2CppBase() + 0x378D9C))(this, inside);
	}
	template <typename T = void> T BuyMore(int32_t slot) {
		return ((T (*)(GuiEquipMenu*, int32_t))(Il2CppBase() + 0x378B28))(this, slot);
	}
	template <typename T = void> T UpgradeResultHandler(void* inPopup, void* inResult) {
		return ((T (*)(GuiEquipMenu*, void*, void*))(Il2CppBase() + 0x378DAC))(this, inPopup, inResult);
	}
	template <typename T = void> T BuyResultHandler(void* inPopup, void* inResult) {
		return ((T (*)(GuiEquipMenu*, void*, void*))(Il2CppBase() + 0x37920C))(this, inPopup, inResult);
	}
	template <typename T = void> T DisableByTutorial(bool dis) {
		return ((T (*)(GuiEquipMenu*, bool))(Il2CppBase() + 0x375DC4))(this, dis);
	}
	template <typename T = void> T StartHighlightBackButton() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x375F1C))(this);
	}
	template <typename T = void> T StopHighlightBackButton() {
		return ((T (*)(GuiEquipMenu*))(Il2CppBase() + 0x376958))(this);
	}
};
