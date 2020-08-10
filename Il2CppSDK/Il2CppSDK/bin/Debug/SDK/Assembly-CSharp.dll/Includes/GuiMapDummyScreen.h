#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiMapDummyScreen
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiMapDummyScreen*))(Il2CppBase() + 0x389394))(this);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(GuiMapDummyScreen*))(Il2CppBase() + 0x38939C))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(GuiMapDummyScreen*))(Il2CppBase() + 0x3893A8))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(GuiMapDummyScreen*))(Il2CppBase() + 0x3893AC))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(GuiMapDummyScreen*))(Il2CppBase() + 0x3893B0))(this);
	}
	template <typename T = void> T OnGUI_Enable() {
		return ((T (*)(GuiMapDummyScreen*))(Il2CppBase() + 0x3893B4))(this);
	}
	template <typename T = void> T OnGUI_Disable() {
		return ((T (*)(GuiMapDummyScreen*))(Il2CppBase() + 0x3893B8))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(GuiMapDummyScreen*))(Il2CppBase() + 0x3893BC))(this);
	}
};
