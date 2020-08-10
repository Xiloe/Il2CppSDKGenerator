#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiMainMenu
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD789E0);
	}
	// Fields
	template <typename T = bool> T& m_IsInitialized() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& m_OnCityMapSuspend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& m_OnCityMapResume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& m_ShopScreen() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_EquipScreen() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_ShopBuyPopup() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_ShopUpgradePopup() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_NotFundsPopup() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_ShopStatusIAP() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_ShopMessageBox() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& m_BankScreen() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_OkDialog() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& m_GuiExitConfirm() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& m_FreeGoldScreen() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& MenuCtrl() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& HACK_disableInputForOneTick() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& DisableBack() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiMainMenu*))(Il2CppBase() + 0x388280))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuiMainMenu*))(Il2CppBase() + 0x38831C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GuiMainMenu*))(Il2CppBase() + 0x3883D0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GuiMainMenu*))(Il2CppBase() + 0x388454))(this);
	}
	template <typename T = void> T InitGui() {
		return ((T (*)(GuiMainMenu*))(Il2CppBase() + 0x388890))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(GuiMainMenu*))(Il2CppBase() + 0x388A24))(this);
	}
	template <typename T = void> T ShowScreen(Il2CppString* inScreenName, bool inClearStack) {
		return ((T (*)(GuiMainMenu*, Il2CppString*, bool))(Il2CppBase() + 0x388B2C))(this, inScreenName, inClearStack);
	}
	template <typename T = void> T ShowPopup(Il2CppString* inPopupName, Il2CppString* inCaption, Il2CppString* inText, void* inHandler) {
		return ((T (*)(GuiMainMenu*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x388D1C))(this, inPopupName, inCaption, inText, inHandler);
	}
	template <typename T = void> T Back() {
		return ((T (*)(GuiMainMenu*))(Il2CppBase() + 0x388FBC))(this);
	}
	template <typename T = void> T RemoveTopFromStackHack() {
		return ((T (*)(GuiMainMenu*))(Il2CppBase() + 0x37A960))(this);
	}
	template <typename T = void> T ClosePopupScreenHack() {
		return ((T (*)(GuiMainMenu*))(Il2CppBase() + 0x389080))(this);
	}
	template <typename T = void> T DoCommand(Il2CppString* inCommand) {
		return ((T (*)(GuiMainMenu*, Il2CppString*))(Il2CppBase() + 0x3890BC))(this, inCommand);
	}
	template <typename T = void> T Exit() {
		return ((T (*)(GuiMainMenu*))(Il2CppBase() + 0x3891C0))(this);
	}
	template <typename T = bool> T IsScreenActive(Il2CppString* screenName) {
		return ((T (*)(GuiMainMenu*, Il2CppString*))(Il2CppBase() + 0x389288))(this, screenName);
	}
	template <typename T = void> T ProcessInput() {
		return ((T (*)(GuiMainMenu*))(Il2CppBase() + 0x388A8C))(this);
	}
};
