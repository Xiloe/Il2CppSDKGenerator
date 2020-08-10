#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AuthenticateUser
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78C68);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, float inTimeOut) {
		return ((T (*)(AuthenticateUser*, void*, float))(Il2CppBase() + 0x1D3F6C))(this, inUserID, inTimeOut);
	}
};
