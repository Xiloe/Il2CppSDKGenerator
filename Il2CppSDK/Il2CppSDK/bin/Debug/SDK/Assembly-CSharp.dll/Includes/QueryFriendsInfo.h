#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QueryFriendsInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78E98);
	}
	// Fields
	template <typename T = Il2CppString*> T& friends() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, Il2CppString* inFriends, float inTimeOut) {
		return ((T (*)(QueryFriendsInfo*, void*, Il2CppString*, float))(Il2CppBase() + 0x21A600))(this, inUserID, inFriends, inTimeOut);
	}
	template <typename T = Il2CppString*> T get_friends() {
		return ((T (*)(QueryFriendsInfo*))(Il2CppBase() + 0x21A62C))(this);
	}
	template <typename T = void> T set_friends(Il2CppString* value) {
		return ((T (*)(QueryFriendsInfo*, Il2CppString*))(Il2CppBase() + 0x21A624))(this, value);
	}
	template <typename T = void*> T GetCloudAsyncOp() {
		return ((T (*)(QueryFriendsInfo*))(Il2CppBase() + 0x21A634))(this);
	}
};
