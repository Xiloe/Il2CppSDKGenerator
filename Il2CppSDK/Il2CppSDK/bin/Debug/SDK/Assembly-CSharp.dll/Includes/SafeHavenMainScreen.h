#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SafeHavenMainScreen
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& m_RequestedScreen() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_ScreenPivot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_ScreenLayout() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_FriendsButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_ArchievementsButton() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_StatisticsButton() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_LoginButton() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_BackupButton() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_BackButton() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& m_UserNameLabel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_HintLabel() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SafeHavenMainScreen*))(Il2CppBase() + 0x224070))(this);
	}
	template <typename T = void> T OnScreenShow(Il2CppString* inShowScreenName) {
		return ((T (*)(SafeHavenMainScreen*, Il2CppString*))(Il2CppBase() + 0x224134))(this, inShowScreenName);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(SafeHavenMainScreen*))(Il2CppBase() + 0x224138))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(SafeHavenMainScreen*))(Il2CppBase() + 0x22468C))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(SafeHavenMainScreen*))(Il2CppBase() + 0x224A68))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(SafeHavenMainScreen*))(Il2CppBase() + 0x224BCC))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(SafeHavenMainScreen*))(Il2CppBase() + 0x224F34))(this);
	}
	template <typename T = void> T OnGUI_Enable() {
		return ((T (*)(SafeHavenMainScreen*))(Il2CppBase() + 0x224F3C))(this);
	}
	template <typename T = void> T OnGUI_Disable() {
		return ((T (*)(SafeHavenMainScreen*))(Il2CppBase() + 0x224F88))(this);
	}
	template <typename T = void> T OnFriends(void* inWidget) {
		return ((T (*)(SafeHavenMainScreen*, void*))(Il2CppBase() + 0x224FD4))(this, inWidget);
	}
	template <typename T = void> T OnArchievements(void* inWidget) {
		return ((T (*)(SafeHavenMainScreen*, void*))(Il2CppBase() + 0x225278))(this, inWidget);
	}
	template <typename T = void> T OnStatistics(void* inWidget) {
		return ((T (*)(SafeHavenMainScreen*, void*))(Il2CppBase() + 0x22527C))(this, inWidget);
	}
	template <typename T = void> T OnLogin(void* inWidget) {
		return ((T (*)(SafeHavenMainScreen*, void*))(Il2CppBase() + 0x2253F8))(this, inWidget);
	}
	template <typename T = void> T OnBackup(void* inWidget) {
		return ((T (*)(SafeHavenMainScreen*, void*))(Il2CppBase() + 0x225740))(this, inWidget);
	}
	template <typename T = void> T OnBackButton(void* inWidget) {
		return ((T (*)(SafeHavenMainScreen*, void*))(Il2CppBase() + 0x2259E4))(this, inWidget);
	}
	template <typename T = void> T OnLogoutConfirmation(void* inPopup, void* inResult) {
		return ((T (*)(SafeHavenMainScreen*, void*, void*))(Il2CppBase() + 0x225AEC))(this, inPopup, inResult);
	}
	template <typename T = void> T UpdateGUIByConnectionStatus() {
		return ((T (*)(SafeHavenMainScreen*))(Il2CppBase() + 0x225BD0))(this);
	}
	template <typename T = void> T UpdateGUIByConnectionStatus_1(bool inDisable) {
		return ((T (*)(SafeHavenMainScreen*, bool))(Il2CppBase() + 0x2247EC))(this, inDisable);
	}
};
