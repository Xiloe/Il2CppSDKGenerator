#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiCustomizeControls
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78ED0);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& m_CutomizePivot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_CutomizeLayout() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> static T& s_CutomizePivotName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& s_CutomizeLayoutName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& s_ResetButtonName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& s_ConfirmButtonName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& m_Controls() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& DragBeginPos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& DragBeginOffset() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& DraggingControl() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& isOn() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_OnHideDelegate() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiCustomizeControls*))(Il2CppBase() + 0x36E02C))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x36E0D8))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuiCustomizeControls*))(Il2CppBase() + 0x36E1BC))(this);
	}
	template <typename T = void> T InitControlsReferences() {
		return ((T (*)(GuiCustomizeControls*))(Il2CppBase() + 0x36E270))(this);
	}
	template <typename T = void> T LateInitialize() {
		return ((T (*)(GuiCustomizeControls*))(Il2CppBase() + 0x36E7A4))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(GuiCustomizeControls*))(Il2CppBase() + 0x36EEA4))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(GuiCustomizeControls*))(Il2CppBase() + 0x36F2B8))(this);
	}
	template <typename T = void> T InitTempPositions() {
		return ((T (*)(GuiCustomizeControls*))(Il2CppBase() + 0x36EF90))(this);
	}
	template <typename T = void> T CancelButtonDelegate(bool inside) {
		return ((T (*)(GuiCustomizeControls*, bool))(Il2CppBase() + 0x36F650))(this, inside);
	}
	template <typename T = void> T ResetButtonDelegate(bool inside) {
		return ((T (*)(GuiCustomizeControls*, bool))(Il2CppBase() + 0x36F718))(this, inside);
	}
	template <typename T = void> T ConfirmButtonDelegate(bool inside) {
		return ((T (*)(GuiCustomizeControls*, bool))(Il2CppBase() + 0x36FC9C))(this, inside);
	}
	template <typename T = void> T MouseTouchEvent() {
		return ((T (*)(GuiCustomizeControls*))(Il2CppBase() + 0x370AF8))(this);
	}
	template <typename T = void> T TouchBegin(Il2CppVector2 pos) {
		return ((T (*)(GuiCustomizeControls*, Il2CppVector2))(Il2CppBase() + 0x370D7C))(this, pos);
	}
	template <typename T = void> T TouchUpdate(Il2CppVector2 pos) {
		return ((T (*)(GuiCustomizeControls*, Il2CppVector2))(Il2CppBase() + 0x371050))(this, pos);
	}
	template <typename T = void> T TouchEnd(Il2CppVector2 pos) {
		return ((T (*)(GuiCustomizeControls*, Il2CppVector2))(Il2CppBase() + 0x371044))(this, pos);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GuiCustomizeControls*))(Il2CppBase() + 0x3710F4))(this);
	}
	template <typename T = void> T UpdateSpritesPos() {
		return ((T (*)(GuiCustomizeControls*))(Il2CppBase() + 0x36F39C))(this);
	}
	template <typename T = void> T RedrawSprites() {
		return ((T (*)(GuiCustomizeControls*))(Il2CppBase() + 0x36FA54))(this);
	}
	template <typename T = void> T ShowSchemeSpecificSprites() {
		return ((T (*)(GuiCustomizeControls*))(Il2CppBase() + 0x36F1E4))(this);
	}
	template <typename T = void> T HideSchemeSpecificSprites() {
		return ((T (*)(GuiCustomizeControls*))(Il2CppBase() + 0x36F398))(this);
	}
};
