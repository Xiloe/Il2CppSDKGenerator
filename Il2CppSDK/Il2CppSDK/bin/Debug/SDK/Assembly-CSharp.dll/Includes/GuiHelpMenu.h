#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiHelpMenu
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79138);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& m_HelpPivot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_HelpLayout() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiHelpMenu*))(Il2CppBase() + 0x37C050))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuiHelpMenu*))(Il2CppBase() + 0x37C058))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GuiHelpMenu*))(Il2CppBase() + 0x37C0DC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuiHelpMenu*))(Il2CppBase() + 0x37C0E0))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(GuiHelpMenu*))(Il2CppBase() + 0x37C2DC))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(GuiHelpMenu*))(Il2CppBase() + 0x37C408))(this);
	}
	template <typename T = void> T OnBackButtonDelegate(bool inside) {
		return ((T (*)(GuiHelpMenu*, bool))(Il2CppBase() + 0x37C534))(this, inside);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(GuiHelpMenu*))(Il2CppBase() + 0x37C778))(this);
	}
};
