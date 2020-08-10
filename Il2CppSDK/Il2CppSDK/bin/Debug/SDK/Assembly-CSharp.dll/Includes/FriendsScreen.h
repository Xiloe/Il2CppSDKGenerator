#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FriendsScreen
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_PendingFriendsView() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_FriendsView() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_ActiveView() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_ScreenPivot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_ScreenLayout() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_ActiveButton() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_PendingButton() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(FriendsScreen*))(Il2CppBase() + 0x31FF18))(this);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(FriendsScreen*))(Il2CppBase() + 0x31FF20))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(FriendsScreen*))(Il2CppBase() + 0x3206A8))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(FriendsScreen*))(Il2CppBase() + 0x3209A0))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(FriendsScreen*))(Il2CppBase() + 0x320A84))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(FriendsScreen*))(Il2CppBase() + 0x320B00))(this);
	}
	template <typename T = void> T OnGUI_Enable() {
		return ((T (*)(FriendsScreen*))(Il2CppBase() + 0x320B08))(this);
	}
	template <typename T = void> T OnGUI_Disable() {
		return ((T (*)(FriendsScreen*))(Il2CppBase() + 0x320B38))(this);
	}
	template <typename T = void> T OnActive(void* inWidget) {
		return ((T (*)(FriendsScreen*, void*))(Il2CppBase() + 0x320B68))(this, inWidget);
	}
	template <typename T = void> T OnPending(void* inWidget) {
		return ((T (*)(FriendsScreen*, void*))(Il2CppBase() + 0x320B6C))(this, inWidget);
	}
	template <typename T = void> T OnPrev(void* inWidget) {
		return ((T (*)(FriendsScreen*, void*))(Il2CppBase() + 0x320B70))(this, inWidget);
	}
	template <typename T = void> T OnNext(void* inWidget) {
		return ((T (*)(FriendsScreen*, void*))(Il2CppBase() + 0x320B74))(this, inWidget);
	}
	template <typename T = void> T OnAddNewFriend(void* inWidget) {
		return ((T (*)(FriendsScreen*, void*))(Il2CppBase() + 0x320B78))(this, inWidget);
	}
	template <typename T = void> T OnBack(void* inWidget) {
		return ((T (*)(FriendsScreen*, void*))(Il2CppBase() + 0x320D34))(this, inWidget);
	}
	template <typename T = void> T ShowActive() {
		return ((T (*)(FriendsScreen*))(Il2CppBase() + 0x320804))(this);
	}
	template <typename T = void> T ShowPending() {
		return ((T (*)(FriendsScreen*))(Il2CppBase() + 0x3208C8))(this);
	}
	template <typename T = void> T OnAddFrend(void* inPopup, void* inResult) {
		return ((T (*)(FriendsScreen*, void*, void*))(Il2CppBase() + 0x320E3C))(this, inPopup, inResult);
	}
};
