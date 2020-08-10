#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiOkDialog
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
		return ((T (*)(GuiOkDialog*))(Il2CppBase() + 0x38B6C8))(this);
	}
	template <typename T = void> T SetCaption(Il2CppString* inCaption) {
		return ((T (*)(GuiOkDialog*, Il2CppString*))(Il2CppBase() + 0x38B6D0))(this, inCaption);
	}
	template <typename T = void> T SetText(Il2CppString* inText) {
		return ((T (*)(GuiOkDialog*, Il2CppString*))(Il2CppBase() + 0x38B6FC))(this, inText);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(GuiOkDialog*))(Il2CppBase() + 0x38B728))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(GuiOkDialog*))(Il2CppBase() + 0x38BA00))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(GuiOkDialog*))(Il2CppBase() + 0x38BAE4))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(GuiOkDialog*))(Il2CppBase() + 0x38BBC8))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(GuiOkDialog*))(Il2CppBase() + 0x38BBD0))(this);
	}
	template <typename T = void> T OnButtonOK(void* inWidget) {
		return ((T (*)(GuiOkDialog*, void*))(Il2CppBase() + 0x38BBD8))(this, inWidget);
	}
};
