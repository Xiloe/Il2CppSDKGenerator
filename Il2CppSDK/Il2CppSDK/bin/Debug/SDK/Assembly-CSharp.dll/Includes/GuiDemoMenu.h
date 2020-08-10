#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiDemoMenu
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD790EC);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsInitialized() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_Shown() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = void*> T& m_PivotMain() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_PivotLoading() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_LayoutPlay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& TimeSinceStartup() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& m_Level() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiDemoMenu*))(Il2CppBase() + 0x371328))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuiDemoMenu*))(Il2CppBase() + 0x3713EC))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(GuiDemoMenu*))(Il2CppBase() + 0x371478))(this);
	}
	template <typename T = void> T InitGui() {
		return ((T (*)(GuiDemoMenu*))(Il2CppBase() + 0x3715CC))(this);
	}
	template <typename T = void> T OnTouchPlayLevel1_1(bool inside) {
		return ((T (*)(GuiDemoMenu*, bool))(Il2CppBase() + 0x37190C))(this, inside);
	}
	template <typename T = void> T OnTouchPlayLevel1_2(bool inside) {
		return ((T (*)(GuiDemoMenu*, bool))(Il2CppBase() + 0x371AFC))(this, inside);
	}
	template <typename T = void> T OnTouchPlayLevel1_3(bool inside) {
		return ((T (*)(GuiDemoMenu*, bool))(Il2CppBase() + 0x371CEC))(this, inside);
	}
	template <typename T = void> T OnTouchPlayLevel2_1(bool inside) {
		return ((T (*)(GuiDemoMenu*, bool))(Il2CppBase() + 0x371EDC))(this, inside);
	}
	template <typename T = void> T OnTouchPlayLevel2_2(bool inside) {
		return ((T (*)(GuiDemoMenu*, bool))(Il2CppBase() + 0x3720CC))(this, inside);
	}
	template <typename T = void> T OnTouchPlayLevel2_3(bool inside) {
		return ((T (*)(GuiDemoMenu*, bool))(Il2CppBase() + 0x3722BC))(this, inside);
	}
	template <typename T = void> T LoadDemoLevel() {
		return ((T (*)(GuiDemoMenu*))(Il2CppBase() + 0x3724AC))(this);
	}
};
