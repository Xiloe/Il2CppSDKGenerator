#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiOptionsMenu
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD791B4);
	}
	// Fields
	template <typename T = void*> T& m_OnHideDelegate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_PivotOpt() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_LayoutOptButtons() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_LayoutOptSounds() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_LayoutOptControls() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_LayoutOptAbout() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_SwitchYAxis() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_SwitchLefthanded() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_SliderMusic() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_SliderSensitivity() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_CustomiseButton() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_BloodOn_Switch() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& m_ControlSchemeEnum() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_GraphicEnum() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& m_Graphic_Pivot() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& m_GpadButton() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& m_HelpLayout() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& m_HelpButton() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& m_ButtonTerms() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& m_ButtonPrivacy() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> T& m_ButtonContact() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& m_LabelOffline() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& m_IsInitialized() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& m_CurrentOptPage() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& m_RunDelegateAfterPivotHide() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& m_Visible() {
		return *(T*)((uintptr_t)this + 0x71);
	}
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& CustomiseEnabled() {
		return *(T*)((uintptr_t)this + 0x72);
	}
	template <typename T = bool> T& IsIngameMenu() {
		return *(T*)((uintptr_t)this + 0x73);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiOptionsMenu*))(Il2CppBase() + 0x38D23C))(this);
	}
	template <typename T = void*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x3844F0))(0);
	}
	template <typename T = void> static T set_Instance(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x38D244))(0, value);
	}
	template <typename T = bool> T get_CustomiseEnabled() {
		return ((T (*)(GuiOptionsMenu*))(Il2CppBase() + 0x38D2C8))(this);
	}
	template <typename T = void> T set_CustomiseEnabled(bool value) {
		return ((T (*)(GuiOptionsMenu*, bool))(Il2CppBase() + 0x388A1C))(this, value);
	}
	template <typename T = bool> T get_IsIngameMenu() {
		return ((T (*)(GuiOptionsMenu*))(Il2CppBase() + 0x38D2D0))(this);
	}
	template <typename T = void> T set_IsIngameMenu(bool value) {
		return ((T (*)(GuiOptionsMenu*, bool))(Il2CppBase() + 0x384E24))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuiOptionsMenu*))(Il2CppBase() + 0x38D2D8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GuiOptionsMenu*))(Il2CppBase() + 0x38D3E0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GuiOptionsMenu*))(Il2CppBase() + 0x38D4E4))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(GuiOptionsMenu*))(Il2CppBase() + 0x38D68C))(this);
	}
	template <typename T = void> T LateInitialize() {
		return ((T (*)(GuiOptionsMenu*))(Il2CppBase() + 0x384E2C))(this);
	}
	template <typename T = void> T PrecacheObjects() {
		return ((T (*)(GuiOptionsMenu*))(Il2CppBase() + 0x38DADC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuiOptionsMenu*))(Il2CppBase() + 0x38DC3C))(this);
	}
	template <typename T = void> T ApplyOptionsToWidgets() {
		return ((T (*)(GuiOptionsMenu*))(Il2CppBase() + 0x38E480))(this);
	}
	template <typename T = void> T ShowCurrentOptPage() {
		return ((T (*)(GuiOptionsMenu*))(Il2CppBase() + 0x38E884))(this);
	}
	template <typename T = bool> T UpdateAboutLayout() {
		return ((T (*)(GuiOptionsMenu*))(Il2CppBase() + 0x38EB90))(this);
	}
	template <typename T = void> T OnApplicationFocus(bool focus) {
		return ((T (*)(GuiOptionsMenu*, bool))(Il2CppBase() + 0x38EDC4))(this, focus);
	}
	template <typename T = void> T OnTouchButtonOptPrev(bool inside) {
		return ((T (*)(GuiOptionsMenu*, bool))(Il2CppBase() + 0x38EDE4))(this, inside);
	}
	template <typename T = void> T OnTouchButtonOptNext(bool inside) {
		return ((T (*)(GuiOptionsMenu*, bool))(Il2CppBase() + 0x38EDFC))(this, inside);
	}
	template <typename T = void> T OnMusicSliderChange(float val) {
		return ((T (*)(GuiOptionsMenu*, float))(Il2CppBase() + 0x38EE14))(this, val);
	}
	template <typename T = void> T OnSensitivitySliderChange(float val) {
		return ((T (*)(GuiOptionsMenu*, float))(Il2CppBase() + 0x38EF4C))(this, val);
	}
	template <typename T = void> T OnInvertYChange(bool switchValue) {
		return ((T (*)(GuiOptionsMenu*, bool))(Il2CppBase() + 0x38F00C))(this, switchValue);
	}
	template <typename T = void> T OnLefthandedChange(bool switchValue) {
		return ((T (*)(GuiOptionsMenu*, bool))(Il2CppBase() + 0x38F0C0))(this, switchValue);
	}
	template <typename T = void> T OnTouchButtonOptReset(bool inside) {
		return ((T (*)(GuiOptionsMenu*, bool))(Il2CppBase() + 0x38F160))(this, inside);
	}
	template <typename T = void> T OnTouchOptionsButtonBack(bool inside) {
		return ((T (*)(GuiOptionsMenu*, bool))(Il2CppBase() + 0x38D8BC))(this, inside);
	}
	template <typename T = void> T OnControlSchemeChanged(int32_t val) {
		return ((T (*)(GuiOptionsMenu*, int32_t))(Il2CppBase() + 0x38F364))(this, val);
	}
	template <typename T = void> T OnBloodToggled(bool toggle) {
		return ((T (*)(GuiOptionsMenu*, bool))(Il2CppBase() + 0x38F500))(this, toggle);
	}
	template <typename T = void> T OnGraphicChanged(int32_t val) {
		return ((T (*)(GuiOptionsMenu*, int32_t))(Il2CppBase() + 0x38F5C4))(this, val);
	}
	template <typename T = void> T ApplyGraphicsOptions() {
		return ((T (*)(GuiOptionsMenu*))(Il2CppBase() + 0x38E78C))(this);
	}
	template <typename T = void> T OnDetectGraphicButton(bool inside) {
		return ((T (*)(GuiOptionsMenu*, bool))(Il2CppBase() + 0x38F67C))(this, inside);
	}
	template <typename T = void> T CustomiseButtonDelegate(bool inside) {
		return ((T (*)(GuiOptionsMenu*, bool))(Il2CppBase() + 0x38F768))(this, inside);
	}
	template <typename T = void> T GamepadButtonDelegate(bool inside) {
		return ((T (*)(GuiOptionsMenu*, bool))(Il2CppBase() + 0x38F8AC))(this, inside);
	}
	template <typename T = void> T HelpButtonDelegate(bool inside) {
		return ((T (*)(GuiOptionsMenu*, bool))(Il2CppBase() + 0x38FA44))(this, inside);
	}
	template <typename T = void> T OnBackFromHelp(bool inside) {
		return ((T (*)(GuiOptionsMenu*, bool))(Il2CppBase() + 0x38D9E0))(this, inside);
	}
	template <typename T = void> T OnShieldHelpClose(bool inside) {
		return ((T (*)(GuiOptionsMenu*, bool))(Il2CppBase() + 0x38FC04))(this, inside);
	}
	template <typename T = void> T OnCustomizeHide() {
		return ((T (*)(GuiOptionsMenu*))(Il2CppBase() + 0x38FC34))(this);
	}
	template <typename T = void> T OnGamepadConfigHide() {
		return ((T (*)(GuiOptionsMenu*))(Il2CppBase() + 0x38FC40))(this);
	}
	template <typename T = void> T OnTouchButtonOptTerms(bool inside) {
		return ((T (*)(GuiOptionsMenu*, bool))(Il2CppBase() + 0x38FC4C))(this, inside);
	}
	template <typename T = void> T OnTouchButtonOptPrivacy(bool inside) {
		return ((T (*)(GuiOptionsMenu*, bool))(Il2CppBase() + 0x38FC7C))(this, inside);
	}
	template <typename T = void> T OnTouchButtonOptContact(bool inside) {
		return ((T (*)(GuiOptionsMenu*, bool))(Il2CppBase() + 0x38FCAC))(this, inside);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(GuiOptionsMenu*))(Il2CppBase() + 0x38F284))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(GuiOptionsMenu*))(Il2CppBase() + 0x385440))(this);
	}
};
