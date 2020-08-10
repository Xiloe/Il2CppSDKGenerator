#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VaidateUserData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD788E8);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, float inTimeOut) {
		return ((T (*)(VaidateUserData*, void*, float))(Il2CppBase() + 0x197EA8))(this, inUserID, inTimeOut);
	}
	template <typename T = void*> T GetCloudAsyncOp() {
		return ((T (*)(VaidateUserData*))(Il2CppBase() + 0x197EB0))(this);
	}
};
