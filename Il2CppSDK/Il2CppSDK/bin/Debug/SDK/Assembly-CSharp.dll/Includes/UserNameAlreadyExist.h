#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UserNameAlreadyExist
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78C58);
	}
	// Fields
	template <typename T = Il2CppString*> T& userName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& userExist() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor(Il2CppString* inUserName, float inTimeOut) {
		return ((T (*)(UserNameAlreadyExist*, Il2CppString*, float))(Il2CppBase() + 0x279DA0))(this, inUserName, inTimeOut);
	}
	template <typename T = Il2CppString*> T get_userName() {
		return ((T (*)(UserNameAlreadyExist*))(Il2CppBase() + 0x279DEC))(this);
	}
	template <typename T = void> T set_userName(Il2CppString* value) {
		return ((T (*)(UserNameAlreadyExist*, Il2CppString*))(Il2CppBase() + 0x279DE4))(this, value);
	}
	template <typename T = bool> T get_userExist() {
		return ((T (*)(UserNameAlreadyExist*))(Il2CppBase() + 0x279DF4))(this);
	}
	template <typename T = void> T set_userExist(bool value) {
		return ((T (*)(UserNameAlreadyExist*, bool))(Il2CppBase() + 0x279DFC))(this, value);
	}
	template <typename T = void*> T GetCloudAsyncOp() {
		return ((T (*)(UserNameAlreadyExist*))(Il2CppBase() + 0x279E04))(this);
	}
	template <typename T = void> T OnSuccess() {
		return ((T (*)(UserNameAlreadyExist*))(Il2CppBase() + 0x279E44))(this);
	}
};
