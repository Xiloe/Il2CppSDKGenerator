#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UserExist
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD788E4);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, float inTimeOut) {
		return ((T (*)(UserExist*, void*, float))(Il2CppBase() + 0x197C64))(this, inUserID, inTimeOut);
	}
	template <typename T = void*> T GetCloudAsyncOp() {
		return ((T (*)(UserExist*))(Il2CppBase() + 0x197C6C))(this);
	}
	template <typename T = void> T OnSuccess() {
		return ((T (*)(UserExist*))(Il2CppBase() + 0x197D94))(this);
	}
};
