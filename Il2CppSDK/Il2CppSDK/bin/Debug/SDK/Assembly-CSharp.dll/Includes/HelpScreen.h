#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HelpScreen
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_ScreenLayout() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HelpScreen*))(Il2CppBase() + 0x39D098))(this);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(HelpScreen*))(Il2CppBase() + 0x39D0A0))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(HelpScreen*))(Il2CppBase() + 0x39D32C))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(HelpScreen*))(Il2CppBase() + 0x39D410))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(HelpScreen*))(Il2CppBase() + 0x39D4F4))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(HelpScreen*))(Il2CppBase() + 0x39D4FC))(this);
	}
	template <typename T = void> T OnHelpButtonBack(void* inInstigator) {
		return ((T (*)(HelpScreen*, void*))(Il2CppBase() + 0x39D504))(this, inInstigator);
	}
};
