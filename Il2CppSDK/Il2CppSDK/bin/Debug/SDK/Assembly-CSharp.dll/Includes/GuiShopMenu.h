#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiShopMenu
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78B28);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& ScrollBarPrefab() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_ItemSelectionPanel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_CategoryTabs() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_CurrentCategory() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_LastCategory() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_Pivot() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_Layout() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_BackButton() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_PulseBackButton() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& IsShown() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& TutorialMode() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiShopMenu*))(Il2CppBase() + 0x394944))(this);
	}
	template <typename T = bool> T get_IsShown() {
		return ((T (*)(GuiShopMenu*))(Il2CppBase() + 0x3949DC))(this);
	}
	template <typename T = void> T set_IsShown(bool value) {
		return ((T (*)(GuiShopMenu*, bool))(Il2CppBase() + 0x3949E4))(this, value);
	}
	template <typename T = bool> T get_TutorialMode() {
		return ((T (*)(GuiShopMenu*))(Il2CppBase() + 0x387BBC))(this);
	}
	template <typename T = void> T set_TutorialMode(bool value) {
		return ((T (*)(GuiShopMenu*, bool))(Il2CppBase() + 0x3949EC))(this, value);
	}
	template <typename T = float> static T PulseAlpha(float startTime) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x3763E0))(0, startTime);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuiShopMenu*))(Il2CppBase() + 0x3949F4))(this);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(GuiShopMenu*))(Il2CppBase() + 0x394ADC))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(GuiShopMenu*))(Il2CppBase() + 0x394D8C))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(GuiShopMenu*))(Il2CppBase() + 0x395510))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(GuiShopMenu*))(Il2CppBase() + 0x395770))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(GuiShopMenu*))(Il2CppBase() + 0x395804))(this);
	}
	template <typename T = void> T OnGUI_Enable() {
		return ((T (*)(GuiShopMenu*))(Il2CppBase() + 0x39580C))(this);
	}
	template <typename T = void> T OnGUI_Disable() {
		return ((T (*)(GuiShopMenu*))(Il2CppBase() + 0x395940))(this);
	}
	template <typename T = void> T SwitchToCategory(void* cat, void* selId) {
		return ((T (*)(GuiShopMenu*, void*, void*))(Il2CppBase() + 0x37A968))(this, cat, selId);
	}
	template <typename T = void> T DisableBackButton(bool dis) {
		return ((T (*)(GuiShopMenu*, bool))(Il2CppBase() + 0x3959B0))(this, dis);
	}
	template <typename T = void> T StartHighlightBackButton() {
		return ((T (*)(GuiShopMenu*))(Il2CppBase() + 0x395B14))(this);
	}
	template <typename T = void> T StopHighlightBackButton() {
		return ((T (*)(GuiShopMenu*))(Il2CppBase() + 0x395B60))(this);
	}
	template <typename T = void> T OnEquipButton(bool inside) {
		return ((T (*)(GuiShopMenu*, bool))(Il2CppBase() + 0x395BA0))(this, inside);
	}
	template <typename T = void> T OnBuyButton(bool inside) {
		return ((T (*)(GuiShopMenu*, bool))(Il2CppBase() + 0x395D04))(this, inside);
	}
	template <typename T = void> T WaitForIAPurchaseHandler(void* inPopup, void* inResult) {
		return ((T (*)(GuiShopMenu*, void*, void*))(Il2CppBase() + 0x39639C))(this, inPopup, inResult);
	}
	template <typename T = void> T OnUpgradeButton(bool inside) {
		return ((T (*)(GuiShopMenu*, bool))(Il2CppBase() + 0x3963C8))(this, inside);
	}
	template <typename T = void> T OnFreeGoldButton(bool inside) {
		return ((T (*)(GuiShopMenu*, bool))(Il2CppBase() + 0x3965D8))(this, inside);
	}
	template <typename T = void> static T ShowFreeGoldOffer(void* goldId) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x39397C))(0, goldId);
	}
	template <typename T = void> T BuyResultHandler(void* inPopup, void* inResult) {
		return ((T (*)(GuiShopMenu*, void*, void*))(Il2CppBase() + 0x396614))(this, inPopup, inResult);
	}
	template <typename T = void> T UpgradeResultHandler(void* inPopup, void* inResult) {
		return ((T (*)(GuiShopMenu*, void*, void*))(Il2CppBase() + 0x3967A8))(this, inPopup, inResult);
	}
	template <typename T = Il2CppString*> T GetDBText(int32_t textId) {
		return ((T (*)(GuiShopMenu*, int32_t))(Il2CppBase() + 0x3968DC))(this, textId);
	}
	template <typename T = void> T MessageBoxResultHandler(void* inPopup, void* inResult) {
		return ((T (*)(GuiShopMenu*, void*, void*))(Il2CppBase() + 0x396918))(this, inPopup, inResult);
	}
	template <typename T = void*> T GetConfirmType() {
		return ((T (*)(GuiShopMenu*))(Il2CppBase() + 0x3962B0))(this);
	}
	template <typename T = void> T OnButtonBack(bool inside) {
		return ((T (*)(GuiShopMenu*, bool))(Il2CppBase() + 0x396A2C))(this, inside);
	}
	template <typename T = void> T TutorialBackButton() {
		return ((T (*)(GuiShopMenu*))(Il2CppBase() + 0x395314))(this);
	}
	template <typename T = void> T OnBuyButtonm__36(void* result) {
		return ((T (*)(GuiShopMenu*, void*))(Il2CppBase() + 0x396B9C))(this, result);
	}
};
