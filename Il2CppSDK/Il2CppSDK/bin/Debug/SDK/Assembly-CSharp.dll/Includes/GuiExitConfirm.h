#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiExitConfirm
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
		return ((T (*)(GuiExitConfirm*))(Il2CppBase() + 0x37B8A8))(this);
	}
	template <typename T = void> T SetCaption(Il2CppString* inCaption) {
		return ((T (*)(GuiExitConfirm*, Il2CppString*))(Il2CppBase() + 0x37B8B0))(this, inCaption);
	}
	template <typename T = void> T SetText(Il2CppString* inText) {
		return ((T (*)(GuiExitConfirm*, Il2CppString*))(Il2CppBase() + 0x37B8DC))(this, inText);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(GuiExitConfirm*))(Il2CppBase() + 0x37B908))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(GuiExitConfirm*))(Il2CppBase() + 0x37BC58))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(GuiExitConfirm*))(Il2CppBase() + 0x37BD3C))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(GuiExitConfirm*))(Il2CppBase() + 0x37BE20))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(GuiExitConfirm*))(Il2CppBase() + 0x37BE28))(this);
	}
	template <typename T = void> T OnButtonOK(void* inWidget) {
		return ((T (*)(GuiExitConfirm*, void*))(Il2CppBase() + 0x37BE30))(this, inWidget);
	}
	template <typename T = void> T OnButtonCancel(void* inWidget) {
		return ((T (*)(GuiExitConfirm*, void*))(Il2CppBase() + 0x37BF40))(this, inWidget);
	}
};
