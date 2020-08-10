#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoginScreen
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD793A8);
	}
	// Fields
	template <typename T = Il2CppString*> T& m_LoadedNickName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> static T& s_DefaultUserNameText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& m_LoadedUserName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& m_UserName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> static T& s_DefaultPasswordText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> T& m_LoadedPassword() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& m_PasswordHash() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_LoadedPasswordLength() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_PasswordLength() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_LoadedRememberMe() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_RememberMe() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = bool> T& m_LoadedAutoLogin() {
		return *(T*)((uintptr_t)this + 0x3E);
	}
	template <typename T = bool> T& m_AutoLogin() {
		return *(T*)((uintptr_t)this + 0x3F);
	}
	template <typename T = void*> T& m_ScreenPivot() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_ScreenLayout() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& m_CreateNewUserButton() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& m_LoginButton() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& m_UserNameButton() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& m_PasswordButton() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& m_ForgotButton() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& m_RememberMeButton() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> T& m_AutoLoginButton() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(LoginScreen*))(Il2CppBase() + 0x3D9FBC))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3DA0D8))(0);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(LoginScreen*))(Il2CppBase() + 0x3DA184))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(LoginScreen*))(Il2CppBase() + 0x3DA720))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(LoginScreen*))(Il2CppBase() + 0x3DAAF4))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(LoginScreen*))(Il2CppBase() + 0x3DABD8))(this);
	}
	template <typename T = void> T OnGUI_Enable() {
		return ((T (*)(LoginScreen*))(Il2CppBase() + 0x3DABE0))(this);
	}
	template <typename T = void> T OnGUI_Disable() {
		return ((T (*)(LoginScreen*))(Il2CppBase() + 0x3DAC20))(this);
	}
	template <typename T = void> T OnBack(void* inWidget) {
		return ((T (*)(LoginScreen*, void*))(Il2CppBase() + 0x3DAC60))(this, inWidget);
	}
	template <typename T = void> T Delegate_CreateUser(void* inInstigator) {
		return ((T (*)(LoginScreen*, void*))(Il2CppBase() + 0x3DAD68))(this, inInstigator);
	}
	template <typename T = void> T Delegate_Login(void* inInstigator) {
		return ((T (*)(LoginScreen*, void*))(Il2CppBase() + 0x3DAF54))(this, inInstigator);
	}
	template <typename T = void> T Delegate_UserName(void* inInstigator) {
		return ((T (*)(LoginScreen*, void*))(Il2CppBase() + 0x3DB338))(this, inInstigator);
	}
	template <typename T = void> T Delegate_Password(void* inInstigator) {
		return ((T (*)(LoginScreen*, void*))(Il2CppBase() + 0x3DB5A8))(this, inInstigator);
	}
	template <typename T = void> T Delegate_RememberMe(bool switchValue) {
		return ((T (*)(LoginScreen*, bool))(Il2CppBase() + 0x3DB84C))(this, switchValue);
	}
	template <typename T = void> T Delegate_AutoLogin(bool switchValue) {
		return ((T (*)(LoginScreen*, bool))(Il2CppBase() + 0x3DB854))(this, switchValue);
	}
	template <typename T = void> T Delegate_ForgotPassword(void* inInstigator) {
		return ((T (*)(LoginScreen*, void*))(Il2CppBase() + 0x3DB85C))(this, inInstigator);
	}
	template <typename T = void> T ForgotPasswordHandler(void* inPopup, void* inResult) {
		return ((T (*)(LoginScreen*, void*, void*))(Il2CppBase() + 0x3DBB80))(this, inPopup, inResult);
	}
	template <typename T = void> T Delegate_OnKeyboardClose(void* inInput, Il2CppString* inKeyboardText, bool inInputCanceled) {
		return ((T (*)(LoginScreen*, void*, Il2CppString*, bool))(Il2CppBase() + 0x3DBD94))(this, inInput, inKeyboardText, inInputCanceled);
	}
	template <typename T = void> T AuthenticationDeadLoopFixer() {
		return ((T (*)(LoginScreen*))(Il2CppBase() + 0x3DC02C))(this);
	}
	template <typename T = void> T UpdateLoginButton() {
		return ((T (*)(LoginScreen*))(Il2CppBase() + 0x3DAABC))(this);
	}
	template <typename T = void> T AuthenticationResultHandler(void* inPopup, void* inResult) {
		return ((T (*)(LoginScreen*, void*, void*))(Il2CppBase() + 0x3DC030))(this, inPopup, inResult);
	}
	template <typename T = void> T SetCaption(Il2CppString* inCaption) {
		return ((T (*)(LoginScreen*, Il2CppString*))(Il2CppBase() + 0x3DC144))(this, inCaption);
	}
	template <typename T = void> T SetText(Il2CppString* inText) {
		return ((T (*)(LoginScreen*, Il2CppString*))(Il2CppBase() + 0x3DC148))(this, inText);
	}
	template <typename T = bool> T get_userNameChanged() {
		return ((T (*)(LoginScreen*))(Il2CppBase() + 0x3DC14C))(this);
	}
	template <typename T = bool> T get_inUserNmaeValid() {
		return ((T (*)(LoginScreen*))(Il2CppBase() + 0x3DC200))(this);
	}
	template <typename T = bool> T get_inPasswordValid() {
		return ((T (*)(LoginScreen*))(Il2CppBase() + 0x3DC35C))(this);
	}
	template <typename T = bool> T get_passwordChanged() {
		return ((T (*)(LoginScreen*))(Il2CppBase() + 0x3DC4D0))(this);
	}
	template <typename T = Il2CppString*> T get_passwordGUIText() {
		return ((T (*)(LoginScreen*))(Il2CppBase() + 0x3DA9E0))(this);
	}
	template <typename T = bool> T get_rememberMeChanged() {
		return ((T (*)(LoginScreen*))(Il2CppBase() + 0x3DC584))(this);
	}
	template <typename T = bool> T get_autoLoginChanged() {
		return ((T (*)(LoginScreen*))(Il2CppBase() + 0x3DC5A4))(this);
	}
	template <typename T = bool> T get_logindataChanged() {
		return ((T (*)(LoginScreen*))(Il2CppBase() + 0x3DB2C8))(this);
	}
	template <typename T = bool> T get_logindataValid() {
		return ((T (*)(LoginScreen*))(Il2CppBase() + 0x3DB2A0))(this);
	}
};
