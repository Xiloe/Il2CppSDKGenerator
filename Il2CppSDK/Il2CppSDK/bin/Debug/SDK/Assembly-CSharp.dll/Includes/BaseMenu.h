#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseMenu
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppDictionary<Il2CppString*, void*>*> T& m_Screens() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_ActiveScreens() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<void*, Il2CppString*>*> T& m_ScreensToNames_TODO() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& activeScreenName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(BaseMenu*))(Il2CppBase() + 0x1D86FC))(this);
	}
	template <typename T = void*> T get_activeScreen() {
		return ((T (*)(BaseMenu*))(Il2CppBase() + 0x1D885C))(this);
	}
	template <typename T = int32_t> T get_screenStackDepth() {
		return ((T (*)(BaseMenu*))(Il2CppBase() + 0x1D8930))(this);
	}
	template <typename T = void> T DoCommand(Il2CppString* inCommand) {
		return ((T (*)(BaseMenu*, Il2CppString*))(Il2CppBase() + 0x0))(this, inCommand);
	}
	template <typename T = void> T ShowScreen(Il2CppString* inScreenName, bool inClearStack) {
		return ((T (*)(BaseMenu*, Il2CppString*, bool))(Il2CppBase() + 0x0))(this, inScreenName, inClearStack);
	}
	template <typename T = void> T ShowPopup(Il2CppString* inPopupName, Il2CppString* inCaption, Il2CppString* inText, void* inHandler) {
		return ((T (*)(BaseMenu*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, inPopupName, inCaption, inText, inHandler);
	}
	template <typename T = void> T Back() {
		return ((T (*)(BaseMenu*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Exit() {
		return ((T (*)(BaseMenu*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsThisScreenTop(void* inScreen) {
		return ((T (*)(BaseMenu*, void*))(Il2CppBase() + 0x1D89C8))(this, inScreen);
	}
	template <typename T = void> T _RegisterScreen(Il2CppString* inScreenName, void* inScreen) {
		return ((T (*)(BaseMenu*, Il2CppString*, void*))(Il2CppBase() + 0x1D8A24))(this, inScreenName, inScreen);
	}
	template <typename T = void> T _InitScreens(void* inOwner) {
		return ((T (*)(BaseMenu*, void*))(Il2CppBase() + 0x1D8B00))(this, inOwner);
	}
	template <typename T = void> T _UpdateVisibleScreens() {
		return ((T (*)(BaseMenu*))(Il2CppBase() + 0x1D9318))(this);
	}
	template <typename T = void> T _ClearStack() {
		return ((T (*)(BaseMenu*))(Il2CppBase() + 0x1D9828))(this);
	}
	template <typename T = void> T _HideTopScreen() {
		return ((T (*)(BaseMenu*))(Il2CppBase() + 0x1D9A10))(this);
	}
	template <typename T = void> T _DisableTopScreen() {
		return ((T (*)(BaseMenu*))(Il2CppBase() + 0x1D9B10))(this);
	}
	template <typename T = void> T _ShowScreen(Il2CppString* inScreenName) {
		return ((T (*)(BaseMenu*, Il2CppString*))(Il2CppBase() + 0x1D9C68))(this, inScreenName);
	}
	template <typename T = void> T _Back() {
		return ((T (*)(BaseMenu*))(Il2CppBase() + 0x1D9E80))(this);
	}
};
