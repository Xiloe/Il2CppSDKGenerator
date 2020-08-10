#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiShopFreeGold
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Layout() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_RewardedVideoButton() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_OfferwallButton() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_AdAvailabilityCheck() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_IsRewardedVideoLoaded() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_IsOfferwallLoaded() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiShopFreeGold*))(Il2CppBase() + 0x393044))(this);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(GuiShopFreeGold*))(Il2CppBase() + 0x39304C))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(GuiShopFreeGold*))(Il2CppBase() + 0x3933E4))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(GuiShopFreeGold*))(Il2CppBase() + 0x393588))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(GuiShopFreeGold*))(Il2CppBase() + 0x393684))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(GuiShopFreeGold*))(Il2CppBase() + 0x39368C))(this);
	}
	template <typename T = void> T OnGUI_Enable() {
		return ((T (*)(GuiShopFreeGold*))(Il2CppBase() + 0x393694))(this);
	}
	template <typename T = void> T OnGUI_Disable() {
		return ((T (*)(GuiShopFreeGold*))(Il2CppBase() + 0x393784))(this);
	}
	template <typename T = void> T OnButtonBack(bool inside) {
		return ((T (*)(GuiShopFreeGold*, bool))(Il2CppBase() + 0x3937C4))(this, inside);
	}
	template <typename T = void> T OnButtonGold(bool inside) {
		return ((T (*)(GuiShopFreeGold*, bool))(Il2CppBase() + 0x3938D8))(this, inside);
	}
	template <typename T = void> T OnButtonVideo(bool inside) {
		return ((T (*)(GuiShopFreeGold*, bool))(Il2CppBase() + 0x393BE0))(this, inside);
	}
	template <typename T = void*> T CheckAvailability() {
		return ((T (*)(GuiShopFreeGold*))(Il2CppBase() + 0x3934E4))(this);
	}
};
