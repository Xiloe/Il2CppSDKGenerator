#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FriendRequestReject
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(FriendRequestReject*))(Il2CppBase() + 0x2C3F60))(this);
	}
	template <typename T = Il2CppString*> T get_msgType() {
		return ((T (*)(FriendRequestReject*))(Il2CppBase() + 0x2C497C))(this);
	}
};
