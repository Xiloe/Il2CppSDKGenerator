#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ForgotPassword
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78E40);
	}
	// Fields
	template <typename T = Il2CppString*> T& userName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor(Il2CppString* inUserName, float inTimeOut) {
		return ((T (*)(ForgotPassword*, Il2CppString*, float))(Il2CppBase() + 0x318F00))(this, inUserName, inTimeOut);
	}
	template <typename T = Il2CppString*> T get_userName() {
		return ((T (*)(ForgotPassword*))(Il2CppBase() + 0x318F4C))(this);
	}
	template <typename T = void> T set_userName(Il2CppString* value) {
		return ((T (*)(ForgotPassword*, Il2CppString*))(Il2CppBase() + 0x318F44))(this, value);
	}
	template <typename T = void*> T GetCloudAsyncOp() {
		return ((T (*)(ForgotPassword*))(Il2CppBase() + 0x318F54))(this);
	}
};
