#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiShopMessageBox
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_ScreenPivot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_ScreenLayout() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_StatusLabel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_CaptionLabel() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiShopMessageBox*))(Il2CppBase() + 0x396E0C))(this);
	}
	template <typename T = void> T SetCaption(Il2CppString* inCaption) {
		return ((T (*)(GuiShopMessageBox*, Il2CppString*))(Il2CppBase() + 0x396E14))(this, inCaption);
	}
	template <typename T = void> T SetText(Il2CppString* inText) {
		return ((T (*)(GuiShopMessageBox*, Il2CppString*))(Il2CppBase() + 0x396E40))(this, inText);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(GuiShopMessageBox*))(Il2CppBase() + 0x396E6C))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(GuiShopMessageBox*))(Il2CppBase() + 0x397144))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(GuiShopMessageBox*))(Il2CppBase() + 0x397228))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(GuiShopMessageBox*))(Il2CppBase() + 0x39730C))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(GuiShopMessageBox*))(Il2CppBase() + 0x397314))(this);
	}
	template <typename T = void> T OnButtonOK(void* inWidget) {
		return ((T (*)(GuiShopMessageBox*, void*))(Il2CppBase() + 0x39731C))(this, inWidget);
	}
};
