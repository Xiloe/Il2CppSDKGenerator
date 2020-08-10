#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SendFriendRequestMessage
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78B80);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, Il2CppString* inRecipient, Il2CppString* inMessage, float inTimeOut) {
		return ((T (*)(SendFriendRequestMessage*, void*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x22E48C))(this, inUserID, inRecipient, inMessage, inTimeOut);
	}
	template <typename T = void*> T GetCloudAsyncOp() {
		return ((T (*)(SendFriendRequestMessage*))(Il2CppBase() + 0x22E4E4))(this);
	}
};
