#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SafeHavenScreen
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD796C4);
	}
	// Fields
	template <typename T = void*> T& m_ScreenPivot() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_ScreenLayout() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_FriendsButton() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_ArchievementsButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_StatisticsButton() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_LoginButton() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_BackupButton() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_BackButton() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SafeHavenScreen*))(Il2CppBase() + 0x225BF4))(this);
	}
	template <typename T = void> T OnScreenShow(Il2CppString* inShowScreenName) {
		return ((T (*)(SafeHavenScreen*, Il2CppString*))(Il2CppBase() + 0x225BFC))(this, inShowScreenName);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(SafeHavenScreen*))(Il2CppBase() + 0x225F94))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(SafeHavenScreen*))(Il2CppBase() + 0x2265B4))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(SafeHavenScreen*))(Il2CppBase() + 0x2268E8))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(SafeHavenScreen*))(Il2CppBase() + 0x2269F4))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(SafeHavenScreen*))(Il2CppBase() + 0x2269FC))(this);
	}
	template <typename T = void> T OnGUI_Enable() {
		return ((T (*)(SafeHavenScreen*))(Il2CppBase() + 0x226A04))(this);
	}
	template <typename T = void> T OnGUI_Disable() {
		return ((T (*)(SafeHavenScreen*))(Il2CppBase() + 0x226A50))(this);
	}
	template <typename T = void> T OnFriends(void* inWidget) {
		return ((T (*)(SafeHavenScreen*, void*))(Il2CppBase() + 0x226A9C))(this, inWidget);
	}
	template <typename T = void> T OnArchievements(void* inWidget) {
		return ((T (*)(SafeHavenScreen*, void*))(Il2CppBase() + 0x226BD0))(this, inWidget);
	}
	template <typename T = void> T OnStatistics(void* inWidget) {
		return ((T (*)(SafeHavenScreen*, void*))(Il2CppBase() + 0x226BD4))(this, inWidget);
	}
	template <typename T = void> T OnLogin(void* inWidget) {
		return ((T (*)(SafeHavenScreen*, void*))(Il2CppBase() + 0x226D08))(this, inWidget);
	}
	template <typename T = void> T OnBackup(void* inWidget) {
		return ((T (*)(SafeHavenScreen*, void*))(Il2CppBase() + 0x226FF0))(this, inWidget);
	}
	template <typename T = void> T OnBackButton(void* inWidget) {
		return ((T (*)(SafeHavenScreen*, void*))(Il2CppBase() + 0x227124))(this, inWidget);
	}
	template <typename T = void> T OnLogoutConfirmation(void* inPopup, void* inResult) {
		return ((T (*)(SafeHavenScreen*, void*, void*))(Il2CppBase() + 0x22722C))(this, inPopup, inResult);
	}
	template <typename T = void> T UpdateButtonDownState(void* inWidget) {
		return ((T (*)(SafeHavenScreen*, void*))(Il2CppBase() + 0x225E48))(this, inWidget);
	}
	template <typename T = void> T UpdateGUIByConnectionStatus() {
		return ((T (*)(SafeHavenScreen*))(Il2CppBase() + 0x2273C0))(this);
	}
	template <typename T = void> T UpdateGUIByConnectionStatus_1(bool inDisable) {
		return ((T (*)(SafeHavenScreen*, bool))(Il2CppBase() + 0x226714))(this, inDisable);
	}
};
