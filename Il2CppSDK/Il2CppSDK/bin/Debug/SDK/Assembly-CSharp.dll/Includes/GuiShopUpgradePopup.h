#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiShopUpgradePopup
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79110);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& m_Layout() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_Caption_Label() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_BigThumbnail() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_Sale_Label() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_Cost() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_DamageLabel() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_AccuracyLabel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_RangeLabel() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& m_ClipLabel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_DamageLabel2() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& m_AccuracyLabel2() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& m_RangeLabel2() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& m_ClipLabel2() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& m_UpgradeSprite() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& m_UpgradeSprite2() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& m_LockedSprite() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> T& m_RankLabel() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& m_AcceptButton() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> T& m_BuyItemId() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& IsShown() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiShopUpgradePopup*))(Il2CppBase() + 0x398F34))(this);
	}
	template <typename T = bool> T get_IsShown() {
		return ((T (*)(GuiShopUpgradePopup*))(Il2CppBase() + 0x398FF8))(this);
	}
	template <typename T = void> T set_IsShown(bool value) {
		return ((T (*)(GuiShopUpgradePopup*, bool))(Il2CppBase() + 0x399000))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuiShopUpgradePopup*))(Il2CppBase() + 0x399008))(this);
	}
	template <typename T = void> T SetCaption(Il2CppString* inCaption) {
		return ((T (*)(GuiShopUpgradePopup*, Il2CppString*))(Il2CppBase() + 0x399094))(this, inCaption);
	}
	template <typename T = void> T SetText(Il2CppString* inText) {
		return ((T (*)(GuiShopUpgradePopup*, Il2CppString*))(Il2CppBase() + 0x399098))(this, inText);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(GuiShopUpgradePopup*))(Il2CppBase() + 0x39909C))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(GuiShopUpgradePopup*))(Il2CppBase() + 0x3996A4))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(GuiShopUpgradePopup*))(Il2CppBase() + 0x39A080))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(GuiShopUpgradePopup*))(Il2CppBase() + 0x39A164))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(GuiShopUpgradePopup*))(Il2CppBase() + 0x39A188))(this);
	}
	template <typename T = void> T OnGUI_Enable() {
		return ((T (*)(GuiShopUpgradePopup*))(Il2CppBase() + 0x39A190))(this);
	}
	template <typename T = void> T OnGUI_Disable() {
		return ((T (*)(GuiShopUpgradePopup*))(Il2CppBase() + 0x39A1D0))(this);
	}
	template <typename T = void> T SetBuyItem(void* itemId) {
		return ((T (*)(GuiShopUpgradePopup*, void*))(Il2CppBase() + 0x378B10))(this, itemId);
	}
	template <typename T = void*> T GetBuyItem() {
		return ((T (*)(GuiShopUpgradePopup*))(Il2CppBase() + 0x378F68))(this);
	}
	template <typename T = void> T OnCloseButton(bool inside) {
		return ((T (*)(GuiShopUpgradePopup*, bool))(Il2CppBase() + 0x39A210))(this, inside);
	}
	template <typename T = void> T OnAcceptButton(bool inside) {
		return ((T (*)(GuiShopUpgradePopup*, bool))(Il2CppBase() + 0x39A32C))(this, inside);
	}
	template <typename T = void> T NoFundsResultHandler(void* inPopup, void* inResult) {
		return ((T (*)(GuiShopUpgradePopup*, void*, void*))(Il2CppBase() + 0x39A63C))(this, inPopup, inResult);
	}
};
