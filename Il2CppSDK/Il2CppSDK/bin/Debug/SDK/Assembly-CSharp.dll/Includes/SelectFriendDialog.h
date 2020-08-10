#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SelectFriendDialog
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7983C);
	}
	// Fields
	template <typename T = void*> T& m_FriendsView() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_ScreenPivot() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_ScreenLayout() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& selectedFriend() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SelectFriendDialog*))(Il2CppBase() + 0x22B158))(this);
	}
	template <typename T = Il2CppString*> T get_selectedFriend() {
		return ((T (*)(SelectFriendDialog*))(Il2CppBase() + 0x22B160))(this);
	}
	template <typename T = void> T set_selectedFriend(Il2CppString* value) {
		return ((T (*)(SelectFriendDialog*, Il2CppString*))(Il2CppBase() + 0x22B168))(this, value);
	}
	template <typename T = void> T SetCaption(Il2CppString* inCaption) {
		return ((T (*)(SelectFriendDialog*, Il2CppString*))(Il2CppBase() + 0x22B170))(this, inCaption);
	}
	template <typename T = void> T SetText(Il2CppString* inText) {
		return ((T (*)(SelectFriendDialog*, Il2CppString*))(Il2CppBase() + 0x22B174))(this, inText);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(SelectFriendDialog*))(Il2CppBase() + 0x22B178))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(SelectFriendDialog*))(Il2CppBase() + 0x22B5EC))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(SelectFriendDialog*))(Il2CppBase() + 0x22B710))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(SelectFriendDialog*))(Il2CppBase() + 0x22B82C))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(SelectFriendDialog*))(Il2CppBase() + 0x22B88C))(this);
	}
	template <typename T = void> T OnBack(void* inWidget) {
		return ((T (*)(SelectFriendDialog*, void*))(Il2CppBase() + 0x22B894))(this, inWidget);
	}
	template <typename T = void> T Delegate_OnSelect(Il2CppString* inFriendName) {
		return ((T (*)(SelectFriendDialog*, Il2CppString*))(Il2CppBase() + 0x22B99C))(this, inFriendName);
	}
};
