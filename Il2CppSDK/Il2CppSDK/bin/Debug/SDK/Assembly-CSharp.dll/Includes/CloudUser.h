#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CloudUser
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD788F8);
	}
	// Fields
	template <typename T = int32_t> static T& MIN_ACCOUNT_NAME_LENGTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_ACCOUNT_NAME_LENGTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& MIN_PASSWORD_LENGTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& ms_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> T& m_NickName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_UserName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& m_PasswordHash() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_PasswordLength() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_AutoLogin() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_SkipAutoLogin() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = bool> T& m_AuthenticationDataLoaded() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = void*> T& m_AuthenticatedUserID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_AuthenticationStatus() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& m_LastAuthenticationFailReason() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CloudUser*))(Il2CppBase() + 0x2D3E58))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D3E68))(0);
	}
	template <typename T = void*> static T get_instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D3F0C))(0);
	}
	template <typename T = Il2CppString*> T get_nickName() {
		return ((T (*)(CloudUser*))(Il2CppBase() + 0x2D41B4))(this);
	}
	template <typename T = void> T set_nickName(Il2CppString* value) {
		return ((T (*)(CloudUser*, Il2CppString*))(Il2CppBase() + 0x2D4270))(this, value);
	}
	template <typename T = Il2CppString*> T get_userName() {
		return ((T (*)(CloudUser*))(Il2CppBase() + 0x2D4278))(this);
	}
	template <typename T = Il2CppString*> T get_passwordHash() {
		return ((T (*)(CloudUser*))(Il2CppBase() + 0x2D4280))(this);
	}
	template <typename T = bool> T get_autoLogin() {
		return ((T (*)(CloudUser*))(Il2CppBase() + 0x2D4288))(this);
	}
	template <typename T = bool> T get_isUserAuthenticated() {
		return ((T (*)(CloudUser*))(Il2CppBase() + 0x2D4290))(this);
	}
	template <typename T = bool> T get_authenticationDataPresent() {
		return ((T (*)(CloudUser*))(Il2CppBase() + 0x2D42AC))(this);
	}
	template <typename T = void*> T get_authenticatedUserID() {
		return ((T (*)(CloudUser*))(Il2CppBase() + 0x2D42DC))(this);
	}
	template <typename T = void> T set_authenticatedUserID(void* value) {
		return ((T (*)(CloudUser*, void*))(Il2CppBase() + 0x2D42E4))(this, value);
	}
	template <typename T = Il2CppString*> static T get_productID() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D42EC))(0);
	}
	template <typename T = void*> T get_authenticationStatus() {
		return ((T (*)(CloudUser*))(Il2CppBase() + 0x2D42A4))(this);
	}
	template <typename T = Il2CppString*> T get_lastAuthenticationFail() {
		return ((T (*)(CloudUser*))(Il2CppBase() + 0x2D42F8))(this);
	}
	template <typename T = bool> T get_authenticationInProggres() {
		return ((T (*)(CloudUser*))(Il2CppBase() + 0x2D4300))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CloudUser*))(Il2CppBase() + 0x2D4318))(this);
	}
	template <typename T = void*> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D3FA4))(0);
	}
	template <typename T = void*> T CheckIfUserNameExist(Il2CppString* inUserName) {
		return ((T (*)(CloudUser*, Il2CppString*))(Il2CppBase() + 0x2D4640))(this, inUserName);
	}
	template <typename T = void*> T CreateNewUser(Il2CppString* inUserName, Il2CppString* inPasswordHash, Il2CppString* inNickName, Il2CppString* inEmail, bool inIWantNews) {
		return ((T (*)(CloudUser*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x2D46EC))(this, inUserName, inPasswordHash, inNickName, inEmail, inIWantNews);
	}
	template <typename T = bool> T CanAutoAuthenticate() {
		return ((T (*)(CloudUser*))(Il2CppBase() + 0x2D4B90))(this);
	}
	template <typename T = void> T AuthenticateLocalUser() {
		return ((T (*)(CloudUser*))(Il2CppBase() + 0x2D4BF8))(this);
	}
	template <typename T = void> T LogoutLocalUser() {
		return ((T (*)(CloudUser*))(Il2CppBase() + 0x2D4D70))(this);
	}
	template <typename T = void*> T AuthenticateUser_Corutine() {
		return ((T (*)(CloudUser*))(Il2CppBase() + 0x2D4CCC))(this);
	}
	template <typename T = bool> T GetLoginData(void* outNickName, void* outUserName, void* outPaswordHash, void* outPasswordLength, void* outRemeberLoginData, void* outAutoLogin) {
		return ((T (*)(CloudUser*, void*, void*, void*, void*, void*, void*))(Il2CppBase() + 0x2D4D8C))(this, outNickName, outUserName, outPaswordHash, outPasswordLength, outRemeberLoginData, outAutoLogin);
	}
	template <typename T = void> T SetLoginData(Il2CppString* inNickName, Il2CppString* inUserName, Il2CppString* inPaswordHash, int32_t inPasswordLength, bool inRemeberThem, bool inAutoLogin) {
		return ((T (*)(CloudUser*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, bool, bool))(Il2CppBase() + 0x2D4DFC))(this, inNickName, inUserName, inPaswordHash, inPasswordLength, inRemeberThem, inAutoLogin);
	}
	template <typename T = void> T LoadAuthenticationData() {
		return ((T (*)(CloudUser*))(Il2CppBase() + 0x2D43CC))(this);
	}
};
