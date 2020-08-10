#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiBaseUtils
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiBaseUtils*))(Il2CppBase() + 0x36BA00))(this);
	}
	template <typename T = void> static T RegisterButtonDelegate(void* pivot, Il2CppString* layoutName, Il2CppString* buttonName, void* touch, void* release) {
		return ((T (*)(void *, void*, Il2CppString*, Il2CppString*, void*, void*))(Il2CppBase() + 0x36BA08))(0, pivot, layoutName, buttonName, touch, release);
	}
	template <typename T = void*> static T GetLayout(Il2CppString* layoutName, void* pivot) {
		return ((T (*)(void *, Il2CppString*, void*))(Il2CppBase() + 0x36BB7C))(0, layoutName, pivot);
	}
	template <typename T = void*> static T RegisterButtonDelegate_1(void* layout, Il2CppString* buttonName, void* touch, void* release) {
		return ((T (*)(void *, void*, Il2CppString*, void*, void*))(Il2CppBase() + 0x36BD98))(0, layout, buttonName, touch, release);
	}
	template <typename T = void*> static T RegisterButtonDelegate_2(void* layout, Il2CppString* buttonName, void* touch, void* release, void* cancel) {
		return ((T (*)(void *, void*, Il2CppString*, void*, void*, void*))(Il2CppBase() + 0x36BFE8))(0, layout, buttonName, touch, release, cancel);
	}
	template <typename T = void*> static T GetButton(void* layout, Il2CppString* buttonName) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x36C24C))(0, layout, buttonName);
	}
	template <typename T = void*> static T GetSwitch(void* layout, Il2CppString* switchName) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x36C3D4))(0, layout, switchName);
	}
	template <typename T = void*> static T RegisterSliderDelegate(void* layout, Il2CppString* sliderName, void* d) {
		return ((T (*)(void *, void*, Il2CppString*, void*))(Il2CppBase() + 0x36C55C))(0, layout, sliderName, d);
	}
	template <typename T = void*> static T RegisterSwitchDelegate(void* layout, Il2CppString* switchName, void* d) {
		return ((T (*)(void *, void*, Il2CppString*, void*))(Il2CppBase() + 0x36C714))(0, layout, switchName, d);
	}
	template <typename T = void*> static T PrepareSprite(void* layout, Il2CppString* name) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x36C8CC))(0, layout, name);
	}
	template <typename T = void*> static T PrepareLabel(void* layout, Il2CppString* name) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x36CA54))(0, layout, name);
	}
	template <typename T = void*> static T PrepareTextArea(void* layout, Il2CppString* name) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x36CBDC))(0, layout, name);
	}
	template <typename T = void> static T RegisterFocusDelegate(void* pivot, Il2CppString* layoutName, void* d) {
		return ((T (*)(void *, void*, Il2CppString*, void*))(Il2CppBase() + 0x36CD64))(0, pivot, layoutName, d);
	}
	template <typename T = void> static T RegisterFocusDelegate_1(void* layout, void* d) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x36CEC0))(0, layout, d);
	}
	template <typename T = void*> static T PrepareNumber(void* layout, Il2CppString* name) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x36CF0C))(0, layout, name);
	}
	template <typename T = void*> static T PrepareProgressBar(void* layout, Il2CppString* name) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x36D094))(0, layout, name);
	}
	template <typename T = void*> static T PrepareEnum(void* layout, Il2CppString* name, void* d) {
		return ((T (*)(void *, void*, Il2CppString*, void*))(Il2CppBase() + 0x36D21C))(0, layout, name, d);
	}
	template <typename T = void*> static T GetChildLabel(void* w, Il2CppString* name) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x36D3C0))(0, w, name);
	}
	template <typename T = void*> static T GetChildSprite(void* w, Il2CppString* name) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x36D5B4))(0, w, name);
	}
	template <typename T = void*> static T GetChildCounter(void* w, Il2CppString* name) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x36D7A8))(0, w, name);
	}
	template <typename T = void*> static T GetChildButton(void* w, Il2CppString* name) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x36D99C))(0, w, name);
	}
	template <typename T = void*> static T GetChildNumber(void* btn, Il2CppString* name) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x36DB90))(0, btn, name);
	}
	template <typename T = void*> static T GetChildNumber_1(void* w, Il2CppString* name) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x36DD40))(0, w, name);
	}
	template <typename T = void> static T ShowPivotWidgets(void* p, bool show) {
		return ((T (*)(void *, void*, bool))(Il2CppBase() + 0x36DF34))(0, p, show);
	}
};
