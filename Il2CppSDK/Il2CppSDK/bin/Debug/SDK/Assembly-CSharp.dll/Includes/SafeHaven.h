#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SafeHaven
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD796C0);
	}
	// Fields
	template <typename T = void*> static T& sInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsInitialized() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_HACK_FrameCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& MenuCtrl() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_MainScreen() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_SafeHavenScreen() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_LoginScreen() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_RegisterScreen() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_StatisticsScreen() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& m_FriendsScreen() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_BackupScreen() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& m_AuthenticationDialog() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& m_SelectFriendDialog() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& m_NewFriendDialog() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& m_ForgotPasswordDialog() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& m_ConfirmDialog() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& m_MessageBox() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> static T& OnSafeHavenShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& OnSafeHavenHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SafeHaven*))(Il2CppBase() + 0x2229B0))(this);
	}
	template <typename T = void> static T add_OnSafeHavenShow(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x222A54))(0, value);
	}
	template <typename T = void> static T remove_OnSafeHavenShow(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x222BF8))(0, value);
	}
	template <typename T = void> static T add_OnSafeHavenHide(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x222D9C))(0, value);
	}
	template <typename T = void> static T remove_OnSafeHavenHide(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x222F40))(0, value);
	}
	template <typename T = void*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x2230E4))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SafeHaven*))(Il2CppBase() + 0x223164))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SafeHaven*))(Il2CppBase() + 0x2231E8))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(SafeHaven*))(Il2CppBase() + 0x2236CC))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(SafeHaven*))(Il2CppBase() + 0x223890))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(SafeHaven*))(Il2CppBase() + 0x223A08))(this);
	}
	template <typename T = void> T ShowScreen(Il2CppString* inScreenName, bool inClearStack) {
		return ((T (*)(SafeHaven*, Il2CppString*, bool))(Il2CppBase() + 0x223AA8))(this, inScreenName, inClearStack);
	}
	template <typename T = void> T ShowPopup(Il2CppString* inPopupName, Il2CppString* inCaption, Il2CppString* inText, void* inHandler) {
		return ((T (*)(SafeHaven*, Il2CppString*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x223C18))(this, inPopupName, inCaption, inText, inHandler);
	}
	template <typename T = void> T Back() {
		return ((T (*)(SafeHaven*))(Il2CppBase() + 0x223E50))(this);
	}
	template <typename T = void> T DoCommand(Il2CppString* inCommand) {
		return ((T (*)(SafeHaven*, Il2CppString*))(Il2CppBase() + 0x223E58))(this, inCommand);
	}
	template <typename T = void> T Exit() {
		return ((T (*)(SafeHaven*))(Il2CppBase() + 0x223F5C))(this);
	}
	template <typename T = void> T ProcessInput() {
		return ((T (*)(SafeHaven*))(Il2CppBase() + 0x22372C))(this);
	}
	template <typename T = void> T UpdateSafeHavenMainBarEnableedStatus() {
		return ((T (*)(SafeHaven*))(Il2CppBase() + 0x223C14))(this);
	}
	template <typename T = void> T AuthenticationResultHandler(void* inPopup, void* inResult) {
		return ((T (*)(SafeHaven*, void*, void*))(Il2CppBase() + 0x223F60))(this, inPopup, inResult);
	}
};
