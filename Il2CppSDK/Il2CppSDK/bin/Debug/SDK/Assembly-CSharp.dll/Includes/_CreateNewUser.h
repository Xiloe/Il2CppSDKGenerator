#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateNewUser
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78D2C);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, float inTimeOut) {
		return ((T (*)(CreateNewUser*, void*, float))(Il2CppBase() + 0x197BBC))(this, inUserID, inTimeOut);
	}
	template <typename T = void*> T GetCloudAsyncOp() {
		return ((T (*)(CreateNewUser*))(Il2CppBase() + 0x197BC4))(this);
	}
};
