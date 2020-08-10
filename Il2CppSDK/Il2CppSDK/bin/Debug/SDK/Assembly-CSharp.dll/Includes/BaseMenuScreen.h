#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseMenuScreen
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_OwnerMenu() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_ActiveInput() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& isInitialized() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isVisible() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& isEnabled() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(BaseMenuScreen*))(Il2CppBase() + 0x1D5D28))(this);
	}
	template <typename T = bool> T get_isInitialized() {
		return ((T (*)(BaseMenuScreen*))(Il2CppBase() + 0x1D9FE4))(this);
	}
	template <typename T = void> T set_isInitialized(bool value) {
		return ((T (*)(BaseMenuScreen*, bool))(Il2CppBase() + 0x1D47C0))(this, value);
	}
	template <typename T = bool> T get_isVisible() {
		return ((T (*)(BaseMenuScreen*))(Il2CppBase() + 0x1D4DE0))(this);
	}
	template <typename T = void> T set_isVisible(bool value) {
		return ((T (*)(BaseMenuScreen*, bool))(Il2CppBase() + 0x1D9FEC))(this, value);
	}
	template <typename T = bool> T get_isEnabled() {
		return ((T (*)(BaseMenuScreen*))(Il2CppBase() + 0x1D9954))(this);
	}
	template <typename T = void> T set_isEnabled(bool value) {
		return ((T (*)(BaseMenuScreen*, bool))(Il2CppBase() + 0x1D9FF4))(this, value);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(BaseMenuScreen*))(Il2CppBase() + 0x1D4490))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(BaseMenuScreen*))(Il2CppBase() + 0x1D4904))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(BaseMenuScreen*))(Il2CppBase() + 0x1D4A8C))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(BaseMenuScreen*))(Il2CppBase() + 0x1D4F0C))(this);
	}
	template <typename T = void> T OnGUI_Enable() {
		return ((T (*)(BaseMenuScreen*))(Il2CppBase() + 0x1D6AEC))(this);
	}
	template <typename T = void> T OnGUI_Disable() {
		return ((T (*)(BaseMenuScreen*))(Il2CppBase() + 0x1D6B20))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(BaseMenuScreen*))(Il2CppBase() + 0x1D4F14))(this);
	}
	template <typename T = void> T Screen_Init(void* inOwner) {
		return ((T (*)(BaseMenuScreen*, void*))(Il2CppBase() + 0x1D8D6C))(this, inOwner);
	}
	template <typename T = void> T Screen_Show() {
		return ((T (*)(BaseMenuScreen*))(Il2CppBase() + 0x1D9E24))(this);
	}
	template <typename T = void> T Screen_Hide() {
		return ((T (*)(BaseMenuScreen*))(Il2CppBase() + 0x1D99B8))(this);
	}
	template <typename T = void> T Screen_Update() {
		return ((T (*)(BaseMenuScreen*))(Il2CppBase() + 0x1D97D8))(this);
	}
	template <typename T = void> T Screen_Enable() {
		return ((T (*)(BaseMenuScreen*))(Il2CppBase() + 0x1D995C))(this);
	}
	template <typename T = void> T Screen_Disable() {
		return ((T (*)(BaseMenuScreen*))(Il2CppBase() + 0x1D9C10))(this);
	}
	template <typename T = void> T Screen_Destroy() {
		return ((T (*)(BaseMenuScreen*))(Il2CppBase() + 0x1D9FFC))(this);
	}
	template <typename T = void*> T GetPivot(Il2CppString* inPivotName) {
		return ((T (*)(BaseMenuScreen*, Il2CppString*))(Il2CppBase() + 0x1D6110))(this, inPivotName);
	}
	template <typename T = void*> T GetLayout(Il2CppString* inPivotName, Il2CppString* inLayoutName) {
		return ((T (*)(BaseMenuScreen*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1D62BC))(this, inPivotName, inLayoutName);
	}
	template <typename T = void*> T GetWidget(void* inLayout, Il2CppString* inName) {
		return ((T (*)(BaseMenuScreen*, void*, Il2CppString*))(Il2CppBase() + 0x1D6524))(this, inLayout, inName);
	}
	template <typename T = void*> T PrepareButton(void* inLayout, Il2CppString* inName, void* inTouchDlgt, void* inRreleaseDlgt) {
		return ((T (*)(BaseMenuScreen*, void*, Il2CppString*, void*, void*))(Il2CppBase() + 0x1D4494))(this, inLayout, inName, inTouchDlgt, inRreleaseDlgt);
	}
	template <typename T = void*> T PrepareSwitch(void* inLayout, Il2CppString* inName, void* inSwitchDlgt) {
		return ((T (*)(BaseMenuScreen*, void*, Il2CppString*, void*))(Il2CppBase() + 0x1DA040))(this, inLayout, inName, inSwitchDlgt);
	}
	template <typename T = void*> T PrepareLabel(void* inLayout, Il2CppString* inName) {
		return ((T (*)(BaseMenuScreen*, void*, Il2CppString*))(Il2CppBase() + 0x1D4644))(this, inLayout, inName);
	}
	template <typename T = void*> T PrepareTextArea(void* inLayout, Il2CppString* inName) {
		return ((T (*)(BaseMenuScreen*, void*, Il2CppString*))(Il2CppBase() + 0x1DA1DC))(this, inLayout, inName);
	}
	template <typename T = void*> T PrepareNumber(void* inLayout, Il2CppString* inName) {
		return ((T (*)(BaseMenuScreen*, void*, Il2CppString*))(Il2CppBase() + 0x1DA358))(this, inLayout, inName);
	}
	template <typename T = void> T ButtonDisable(void* inLayout, Il2CppString* inName, bool inDisable) {
		return ((T (*)(BaseMenuScreen*, void*, Il2CppString*, bool))(Il2CppBase() + 0x1DA4D4))(this, inLayout, inName, inDisable);
	}
	template <typename T = bool> T get_isInputActive() {
		return ((T (*)(BaseMenuScreen*))(Il2CppBase() + 0x1DA66C))(this);
	}
	template <typename T = bool> T ShowKeyboard(void* inInput, void* inMode, void* inCloseDelegate, Il2CppString* inText, int32_t inMaxTextLength) {
		return ((T (*)(BaseMenuScreen*, void*, void*, void*, Il2CppString*, int32_t))(Il2CppBase() + 0x1DA680))(this, inInput, inMode, inCloseDelegate, inText, inMaxTextLength);
	}
	template <typename T = bool> T ShowKeyboard_1(void* inInput, void* inMode, void* inCloseDelegate, Il2CppString* inText, Il2CppString* inPlaceholder, int32_t inMaxTextLength) {
		return ((T (*)(BaseMenuScreen*, void*, void*, void*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x1DA76C))(this, inInput, inMode, inCloseDelegate, inText, inPlaceholder, inMaxTextLength);
	}
	template <typename T = bool> T ShowTouchScreenKeyboard(void* inInput, void* inMode, void* inCloseDelegate, Il2CppString* inText, Il2CppString* inPlaceholder, int32_t inMaxTextLength) {
		return ((T (*)(BaseMenuScreen*, void*, void*, void*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x1DA798))(this, inInput, inMode, inCloseDelegate, inText, inPlaceholder, inMaxTextLength);
	}
	template <typename T = void*> T ProcessKeyboardInput(void* inKeyboard, void* inCloseDelegate, Il2CppString* inText, int32_t inMaxTextLength) {
		return ((T (*)(BaseMenuScreen*, void*, void*, Il2CppString*, int32_t))(Il2CppBase() + 0x1DA88C))(this, inKeyboard, inCloseDelegate, inText, inMaxTextLength);
	}
};
