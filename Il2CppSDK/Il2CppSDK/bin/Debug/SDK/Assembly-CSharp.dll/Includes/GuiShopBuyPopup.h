#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiShopBuyPopup
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7910C);
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
	template <typename T = void*> T& m_Buy_Button_Label() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_BigThumbnail() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_Sale_Label() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_Cost() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_BuyItemId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_CaptionID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& IsShown() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiShopBuyPopup*))(Il2CppBase() + 0x3908E0))(this);
	}
	template <typename T = bool> T get_IsShown() {
		return ((T (*)(GuiShopBuyPopup*))(Il2CppBase() + 0x3909A4))(this);
	}
	template <typename T = void> T set_IsShown(bool value) {
		return ((T (*)(GuiShopBuyPopup*, bool))(Il2CppBase() + 0x3909AC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuiShopBuyPopup*))(Il2CppBase() + 0x3909B4))(this);
	}
	template <typename T = void> T SetCaption(Il2CppString* inCaption) {
		return ((T (*)(GuiShopBuyPopup*, Il2CppString*))(Il2CppBase() + 0x390A40))(this, inCaption);
	}
	template <typename T = void> T SetText(Il2CppString* inText) {
		return ((T (*)(GuiShopBuyPopup*, Il2CppString*))(Il2CppBase() + 0x390A44))(this, inText);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(GuiShopBuyPopup*))(Il2CppBase() + 0x390A48))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(GuiShopBuyPopup*))(Il2CppBase() + 0x390F38))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(GuiShopBuyPopup*))(Il2CppBase() + 0x391890))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(GuiShopBuyPopup*))(Il2CppBase() + 0x391974))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(GuiShopBuyPopup*))(Il2CppBase() + 0x391998))(this);
	}
	template <typename T = void> T OnGUI_Enable() {
		return ((T (*)(GuiShopBuyPopup*))(Il2CppBase() + 0x3919A0))(this);
	}
	template <typename T = void> T OnGUI_Disable() {
		return ((T (*)(GuiShopBuyPopup*))(Il2CppBase() + 0x3919E0))(this);
	}
	template <typename T = int32_t> T CaptionId(void* t) {
		return ((T (*)(GuiShopBuyPopup*, void*))(Il2CppBase() + 0x391A20))(this, t);
	}
	template <typename T = void> T SetCaptionID(void* type) {
		return ((T (*)(GuiShopBuyPopup*, void*))(Il2CppBase() + 0x377290))(this, type);
	}
	template <typename T = void> T SetBuyItem(void* itemId) {
		return ((T (*)(GuiShopBuyPopup*, void*))(Il2CppBase() + 0x3773D0))(this, itemId);
	}
	template <typename T = void*> T GetBuyItem() {
		return ((T (*)(GuiShopBuyPopup*))(Il2CppBase() + 0x379408))(this);
	}
	template <typename T = void> T OnCloseButton(bool inside) {
		return ((T (*)(GuiShopBuyPopup*, bool))(Il2CppBase() + 0x391B6C))(this, inside);
	}
	template <typename T = void> T OnAcceptButton(bool inside) {
		return ((T (*)(GuiShopBuyPopup*, bool))(Il2CppBase() + 0x391C88))(this, inside);
	}
	template <typename T = void> T NoFundsResultHandler(void* inPopup, void* inResult) {
		return ((T (*)(GuiShopBuyPopup*, void*, void*))(Il2CppBase() + 0x391FAC))(this, inPopup, inResult);
	}
};
