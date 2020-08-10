#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateNewMFAccount
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78C60);
	}
	// Fields
	template <typename T = Il2CppString*> T& email() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& iWantNews() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor(void* inUserID, Il2CppString* inNickName, Il2CppString* inEmail, bool iniWantNews, float inTimeOut) {
		return ((T (*)(CreateNewMFAccount*, void*, Il2CppString*, Il2CppString*, bool, float))(Il2CppBase() + 0x2D4840))(this, inUserID, inNickName, inEmail, iniWantNews, inTimeOut);
	}
	template <typename T = Il2CppString*> T get_email() {
		return ((T (*)(CreateNewMFAccount*))(Il2CppBase() + 0x2E54EC))(this);
	}
	template <typename T = void> T set_email(Il2CppString* value) {
		return ((T (*)(CreateNewMFAccount*, Il2CppString*))(Il2CppBase() + 0x2E54DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_iWantNews() {
		return ((T (*)(CreateNewMFAccount*))(Il2CppBase() + 0x2E54F4))(this);
	}
	template <typename T = void> T set_iWantNews(Il2CppString* value) {
		return ((T (*)(CreateNewMFAccount*, Il2CppString*))(Il2CppBase() + 0x2E54E4))(this, value);
	}
};
