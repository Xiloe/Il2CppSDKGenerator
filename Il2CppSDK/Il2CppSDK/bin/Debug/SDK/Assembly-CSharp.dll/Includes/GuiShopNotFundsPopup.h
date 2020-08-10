#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiShopNotFundsPopup
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD789D8);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& RemoveFromTopHack() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_Layout() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_Funds_Sprite() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_FundsAdd() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_FundsConvert() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_AddFunds_Button() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_BuyFundId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_GoldsForCoversion() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& DesiredItem() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& IsUpgrade() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& RequiredFunds() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiShopNotFundsPopup*))(Il2CppBase() + 0x39742C))(this);
	}
	template <typename T = void*> T get_DesiredItem() {
		return ((T (*)(GuiShopNotFundsPopup*))(Il2CppBase() + 0x397434))(this);
	}
	template <typename T = void> T set_DesiredItem(void* value) {
		return ((T (*)(GuiShopNotFundsPopup*, void*))(Il2CppBase() + 0x391F9C))(this, value);
	}
	template <typename T = bool> T get_IsUpgrade() {
		return ((T (*)(GuiShopNotFundsPopup*))(Il2CppBase() + 0x39743C))(this);
	}
	template <typename T = void> T set_IsUpgrade(bool value) {
		return ((T (*)(GuiShopNotFundsPopup*, bool))(Il2CppBase() + 0x391FA4))(this, value);
	}
	template <typename T = void*> T get_RequiredFunds() {
		return ((T (*)(GuiShopNotFundsPopup*))(Il2CppBase() + 0x397444))(this);
	}
	template <typename T = void> T set_RequiredFunds(void* value) {
		return ((T (*)(GuiShopNotFundsPopup*, void*))(Il2CppBase() + 0x39744C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuiShopNotFundsPopup*))(Il2CppBase() + 0x397454))(this);
	}
	template <typename T = void> T SetCaption(Il2CppString* inCaption) {
		return ((T (*)(GuiShopNotFundsPopup*, Il2CppString*))(Il2CppBase() + 0x39752C))(this, inCaption);
	}
	template <typename T = void> T SetText(Il2CppString* inText) {
		return ((T (*)(GuiShopNotFundsPopup*, Il2CppString*))(Il2CppBase() + 0x397530))(this, inText);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(GuiShopNotFundsPopup*))(Il2CppBase() + 0x397534))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(GuiShopNotFundsPopup*))(Il2CppBase() + 0x397910))(this);
	}
	template <typename T = void*> T GetRequiredFunds(void** goldsForConversion) {
		return ((T (*)(GuiShopNotFundsPopup*, void**))(Il2CppBase() + 0x397A14))(this, goldsForConversion);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(GuiShopNotFundsPopup*))(Il2CppBase() + 0x397EA0))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(GuiShopNotFundsPopup*))(Il2CppBase() + 0x397FE4))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(GuiShopNotFundsPopup*))(Il2CppBase() + 0x397FEC))(this);
	}
	template <typename T = void> T OnGUI_Enable() {
		return ((T (*)(GuiShopNotFundsPopup*))(Il2CppBase() + 0x397FF4))(this);
	}
	template <typename T = void> T OnGUI_Disable() {
		return ((T (*)(GuiShopNotFundsPopup*))(Il2CppBase() + 0x398034))(this);
	}
	template <typename T = void> T ShowFundInfo(void* id, int32_t goldsForCoversion) {
		return ((T (*)(GuiShopNotFundsPopup*, void*, int32_t))(Il2CppBase() + 0x397B6C))(this, id, goldsForCoversion);
	}
	template <typename T = void> T OnButtonBack(bool inside) {
		return ((T (*)(GuiShopNotFundsPopup*, bool))(Il2CppBase() + 0x398074))(this, inside);
	}
	template <typename T = void> T OnAddFunds(bool inside) {
		return ((T (*)(GuiShopNotFundsPopup*, bool))(Il2CppBase() + 0x398238))(this, inside);
	}
	template <typename T = void> T WaitForIAPurchaseHandler(void* inPopup, void* inResult) {
		return ((T (*)(GuiShopNotFundsPopup*, void*, void*))(Il2CppBase() + 0x398834))(this, inPopup, inResult);
	}
	template <typename T = void> T NoIAPServiceHandler(void* inPopup, void* inResult) {
		return ((T (*)(GuiShopNotFundsPopup*, void*, void*))(Il2CppBase() + 0x39883C))(this, inPopup, inResult);
	}
	template <typename T = void> T Close(void* result) {
		return ((T (*)(GuiShopNotFundsPopup*, void*))(Il2CppBase() + 0x398084))(this, result);
	}
	template <typename T = void> T OnAddFundsm__37(void* result) {
		return ((T (*)(GuiShopNotFundsPopup*, void*))(Il2CppBase() + 0x398844))(this, result);
	}
};
