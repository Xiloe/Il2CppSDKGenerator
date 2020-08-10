#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiItemInfoPanel
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79388);
	}
	// Fields
	template <typename T = void*> T& m_Layout() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_Pivot() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_NameLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_BigSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_BuyButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Buy_Button_Label() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_Buy_Button_BG() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_UpgradeButton() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_UpgradeBtn_Label() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_UpgradeButton_BG() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_Upgrage_Locked() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_UpgradeLockedRank_Label() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_Cost_Sprite() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_Cost_Label() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& m_Cost_Label2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_CostSpriteGold() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& m_CostSpriteMoney() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& m_LockedSprite() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& m_LockedLabel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& m_RankLabel() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& m_EarnGoldButton() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& m_SaleLabel() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> T& m_IAP_Label() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& m_WeaponInfo_Pivot() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> T& m_WeaponDesc() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = void*> T& m_DamageLabel() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = void*> T& m_AccuracyLabel() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = void*> T& m_RangeLabel() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = void*> T& m_ClipLabel() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> T& m_UpgradeSprite() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = void*> T& m_ItemInfo_Pivot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = void*> T& m_ItemDesc() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = void*> T& m_OwnedCount() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = void*> T& m_InfiniteSprite() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = void*> T& m_FundInfo_Pivot() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = void*> T& m_FundDesc() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = void*> T& m_CapInfo_Pivot() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = void*> T& m_CapDesc() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = void*> T& m_SkinInfo_Pivot() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = void*> T& m_SkinDesc() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = void*> T& m_UpgradeInfo_Pivot() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = void*> T& m_UpgradeDesc() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = void*> T& m_OwnedSprite() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& EnableUpgradeButton() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& m_PulseUpgradeStartTime() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& m_PulseBuyStartTime() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiItemInfoPanel*))(Il2CppBase() + 0x385E34))(this);
	}
	template <typename T = void> T InitGui(void* layout, void* pivot) {
		return ((T (*)(GuiItemInfoPanel*, void*, void*))(Il2CppBase() + 0x385E44))(this, layout, pivot);
	}
	template <typename T = void> T Show(void* itemId, void* OnBuyButton, void* OnUpgradeButton, void* OnEquipButton, void* OnEarnGoldButton) {
		return ((T (*)(GuiItemInfoPanel*, void*, void*, void*, void*, void*))(Il2CppBase() + 0x3865B8))(this, itemId, OnBuyButton, OnUpgradeButton, OnEquipButton, OnEarnGoldButton);
	}
	template <typename T = void> T ShowEmptySelection() {
		return ((T (*)(GuiItemInfoPanel*))(Il2CppBase() + 0x3875F4))(this);
	}
	template <typename T = void> T HideSelectionSpecificInfo() {
		return ((T (*)(GuiItemInfoPanel*))(Il2CppBase() + 0x3877E8))(this);
	}
	template <typename T = void> T ShowWeaponInfo(void* inf) {
		return ((T (*)(GuiItemInfoPanel*, void*))(Il2CppBase() + 0x387828))(this, inf);
	}
	template <typename T = void> T HideWeaponInfo() {
		return ((T (*)(GuiItemInfoPanel*))(Il2CppBase() + 0x387B38))(this);
	}
	template <typename T = void> T ShowItemInfo(void* inf) {
		return ((T (*)(GuiItemInfoPanel*, void*))(Il2CppBase() + 0x387948))(this, inf);
	}
	template <typename T = void> T HideItemInfo() {
		return ((T (*)(GuiItemInfoPanel*))(Il2CppBase() + 0x387B44))(this);
	}
	template <typename T = void> T ShowFundInfo(void* inf) {
		return ((T (*)(GuiItemInfoPanel*, void*))(Il2CppBase() + 0x387AB0))(this, inf);
	}
	template <typename T = void> T HideFundInfo() {
		return ((T (*)(GuiItemInfoPanel*))(Il2CppBase() + 0x387B50))(this);
	}
	template <typename T = void> T ShowUpgradeInfo(void* inf) {
		return ((T (*)(GuiItemInfoPanel*, void*))(Il2CppBase() + 0x387AF4))(this, inf);
	}
	template <typename T = void> T HideUpgradeInfo() {
		return ((T (*)(GuiItemInfoPanel*))(Il2CppBase() + 0x387B5C))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(GuiItemInfoPanel*))(Il2CppBase() + 0x387BC4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GuiItemInfoPanel*))(Il2CppBase() + 0x387CB4))(this);
	}
	template <typename T = void> T StartHighlightBuy() {
		return ((T (*)(GuiItemInfoPanel*))(Il2CppBase() + 0x387718))(this);
	}
	template <typename T = void> T StopHighlightBuy() {
		return ((T (*)(GuiItemInfoPanel*))(Il2CppBase() + 0x387784))(this);
	}
};
