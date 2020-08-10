#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FriendList
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& m_Friends() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& m_PendingFriends() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_GetFriendListAction() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_LastSyncTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& FriendListChanged() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& PendingFriendListChanged() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(FriendList*))(Il2CppBase() + 0x31A358))(this);
	}
	template <typename T = void> T add_FriendListChanged(void* value) {
		return ((T (*)(FriendList*, void*))(Il2CppBase() + 0x31A438))(this, value);
	}
	template <typename T = void> T remove_FriendListChanged(void* value) {
		return ((T (*)(FriendList*, void*))(Il2CppBase() + 0x31A5C4))(this, value);
	}
	template <typename T = void> T add_PendingFriendListChanged(void* value) {
		return ((T (*)(FriendList*, void*))(Il2CppBase() + 0x31A750))(this, value);
	}
	template <typename T = void> T remove_PendingFriendListChanged(void* value) {
		return ((T (*)(FriendList*, void*))(Il2CppBase() + 0x31A8DC))(this, value);
	}
	template <typename T = Il2CppList<void*>*> T get_friends() {
		return ((T (*)(FriendList*))(Il2CppBase() + 0x31AA68))(this);
	}
	template <typename T = Il2CppList<void*>*> T get_pendingFriends() {
		return ((T (*)(FriendList*))(Il2CppBase() + 0x31AA70))(this);
	}
	template <typename T = void> T RetriveFriendListFromCloud(bool inSkipTimeOutCheck) {
		return ((T (*)(FriendList*, bool))(Il2CppBase() + 0x31AA78))(this, inSkipTimeOutCheck);
	}
	template <typename T = void> T AddNewFriend(Il2CppString* inFriendName) {
		return ((T (*)(FriendList*, Il2CppString*))(Il2CppBase() + 0x31ADEC))(this, inFriendName);
	}
	template <typename T = void> T AcceptFriendRequest(Il2CppString* inFriendName) {
		return ((T (*)(FriendList*, Il2CppString*))(Il2CppBase() + 0x31B500))(this, inFriendName);
	}
	template <typename T = void> T RejectFriendRequest(Il2CppString* inFriendName) {
		return ((T (*)(FriendList*, Il2CppString*))(Il2CppBase() + 0x31B844))(this, inFriendName);
	}
	template <typename T = void> T ProcessMessage(void* inMessage) {
		return ((T (*)(FriendList*, void*))(Il2CppBase() + 0x31BC7C))(this, inMessage);
	}
	template <typename T = void> T OnUserAuthenticate() {
		return ((T (*)(FriendList*))(Il2CppBase() + 0x31C63C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(FriendList*))(Il2CppBase() + 0x31CBB0))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(FriendList*))(Il2CppBase() + 0x31CBB4))(this);
	}
	template <typename T = void> T OnPendingFriendListChanged() {
		return ((T (*)(FriendList*))(Il2CppBase() + 0x31B210))(this);
	}
	template <typename T = void> T OnFriendListChanged() {
		return ((T (*)(FriendList*))(Il2CppBase() + 0x31CBC0))(this);
	}
	template <typename T = void*> T GetFriendListFromCloud_Corutine() {
		return ((T (*)(FriendList*))(Il2CppBase() + 0x31AD48))(this);
	}
	template <typename T = void> T Save() {
		return ((T (*)(FriendList*))(Il2CppBase() + 0x31B2E0))(this);
	}
	template <typename T = void> T Load() {
		return ((T (*)(FriendList*))(Il2CppBase() + 0x31C640))(this);
	}
	template <typename T = void> T RegenerateFriendList(Il2CppString* inFriendListInJSON) {
		return ((T (*)(FriendList*, Il2CppString*))(Il2CppBase() + 0x31CC98))(this, inFriendListInJSON);
	}
	template <typename T = void*> T UpdateFriendsData_Corutine(Il2CppList<Il2CppString*>* inFriends) {
		return ((T (*)(FriendList*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x31D4F4))(this, inFriends);
	}
	template <typename T = void> T ProcessFriendsDetails(Il2CppString* inFriendsDetails) {
		return ((T (*)(FriendList*, Il2CppString*))(Il2CppBase() + 0x31D5AC))(this, inFriendsDetails);
	}
	template <typename T = void*> T InitPlayerDataFromStr(Il2CppString* jsonStr) {
		return ((T (*)(FriendList*, Il2CppString*))(Il2CppBase() + 0x31DAD8))(this, jsonStr);
	}
};
