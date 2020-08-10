#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiShopStatusIAP
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
	template <typename T = void*> T& m_Result() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiShopStatusIAP*))(Il2CppBase() + 0x398AB4))(this);
	}
	template <typename T = void> T SetCaption(Il2CppString* inCaption) {
		return ((T (*)(GuiShopStatusIAP*, Il2CppString*))(Il2CppBase() + 0x398ABC))(this, inCaption);
	}
	template <typename T = void> T SetText(Il2CppString* inText) {
		return ((T (*)(GuiShopStatusIAP*, Il2CppString*))(Il2CppBase() + 0x398AE8))(this, inText);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(GuiShopStatusIAP*))(Il2CppBase() + 0x398B14))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(GuiShopStatusIAP*))(Il2CppBase() + 0x398D64))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(GuiShopStatusIAP*))(Il2CppBase() + 0x398E48))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(GuiShopStatusIAP*))(Il2CppBase() + 0x398F2C))(this);
	}
};
