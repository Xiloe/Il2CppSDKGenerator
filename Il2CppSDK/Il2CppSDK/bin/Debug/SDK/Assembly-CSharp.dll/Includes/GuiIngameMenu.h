#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiIngameMenu
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78ED4);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& m_Pivot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Layout() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_PivotLoading() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_HelpLayout() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_Exiting() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_IsInitialized() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = bool> T& m_IsVisible() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = bool> T& HACK_disableInputForOneTick() {
		return *(T*)((uintptr_t)this + 0x23);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiIngameMenu*))(Il2CppBase() + 0x384350))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuiIngameMenu*))(Il2CppBase() + 0x384358))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GuiIngameMenu*))(Il2CppBase() + 0x3843DC))(this);
	}
	template <typename T = void> T Init(void* mission) {
		return ((T (*)(GuiIngameMenu*, void*))(Il2CppBase() + 0x384584))(this, mission);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(GuiIngameMenu*))(Il2CppBase() + 0x384E5C))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(GuiIngameMenu*))(Il2CppBase() + 0x3851BC))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(GuiIngameMenu*))(Il2CppBase() + 0x3852A0))(this);
	}
	template <typename T = void> T DisableRestartButton(bool disable) {
		return ((T (*)(GuiIngameMenu*, bool))(Il2CppBase() + 0x38529C))(this, disable);
	}
	template <typename T = void*> T PrepareButton(void* layout, Il2CppString* name, void* touch, void* release) {
		return ((T (*)(GuiIngameMenu*, void*, Il2CppString*, void*, void*))(Il2CppBase() + 0x384CF4))(this, layout, name, touch, release);
	}
	template <typename T = void> T ResumeButtonDelegate(bool inside) {
		return ((T (*)(GuiIngameMenu*, bool))(Il2CppBase() + 0x384FFC))(this, inside);
	}
	template <typename T = void> T OptButtonDelegate(bool inside) {
		return ((T (*)(GuiIngameMenu*, bool))(Il2CppBase() + 0x385380))(this, inside);
	}
	template <typename T = void> T OnOptionsHide() {
		return ((T (*)(GuiIngameMenu*))(Il2CppBase() + 0x38544C))(this);
	}
	template <typename T = void> T CustomiseButtonDelegate(bool inside) {
		return ((T (*)(GuiIngameMenu*, bool))(Il2CppBase() + 0x385488))(this, inside);
	}
	template <typename T = void> T ExitButtonDelegate(bool inside) {
		return ((T (*)(GuiIngameMenu*, bool))(Il2CppBase() + 0x385568))(this, inside);
	}
	template <typename T = void> T HelpButtonDelegate(bool inside) {
		return ((T (*)(GuiIngameMenu*, bool))(Il2CppBase() + 0x385654))(this, inside);
	}
	template <typename T = void> T OnBackFromHelp(bool inside) {
		return ((T (*)(GuiIngameMenu*, bool))(Il2CppBase() + 0x3850D0))(this, inside);
	}
	template <typename T = void> T OnShieldHelpBack(bool inside) {
		return ((T (*)(GuiIngameMenu*, bool))(Il2CppBase() + 0x3859A8))(this, inside);
	}
	template <typename T = void> T RestartButtonDelegate(bool inside) {
		return ((T (*)(GuiIngameMenu*, bool))(Il2CppBase() + 0x3859B4))(this, inside);
	}
	template <typename T = void*> T RestartCheckpoint() {
		return ((T (*)(GuiIngameMenu*))(Il2CppBase() + 0x3859E0))(this);
	}
	template <typename T = void> T ExitToMainMenu() {
		return ((T (*)(GuiIngameMenu*))(Il2CppBase() + 0x385588))(this);
	}
	template <typename T = void> T ShowLoadingScreen() {
		return ((T (*)(GuiIngameMenu*))(Il2CppBase() + 0x385A74))(this);
	}
};
