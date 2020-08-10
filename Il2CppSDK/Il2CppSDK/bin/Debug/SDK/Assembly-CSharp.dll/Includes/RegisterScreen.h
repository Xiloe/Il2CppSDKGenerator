#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RegisterScreen
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD796B0);
	}
	// Fields
	template <typename T = Il2CppColor> static T& DefaultColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppColor> static T& ErrorColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& m_CloudActionUserName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_CloudActionCreateUser() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& m_NickName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& m_UserName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_IsUserNameFree() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& m_FreeUserName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_UserNameHasValidFormat() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& m_PasswordHash() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& m_ConfirmPasswordHash() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_PasswordLength() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& m_ConfirmPasswordLength() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& m_Email() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_IWantNews() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_IAgreeWithLicence() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = bool> T& m_AccountDataError() {
		return *(T*)((uintptr_t)this + 0x4E);
	}
	template <typename T = Il2CppString*> static T& s_RegisterPivotName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& s_ScreenLayoutName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppString*> static T& s_UserNameButtonName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppString*> static T& s_PasswordButtonName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppString*> static T& s_ConfirmPasswordButtonName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppString*> static T& s_EmailButtonName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = Il2CppString*> static T& s_NewsToggleName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppString*> static T& s_CreateAccountButtonName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = Il2CppString*> static T& s_HintLabelName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> T& m_ScreenPivot() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& m_ScreenLayout() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& m_UserNameButton() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& m_PasswordButton() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> T& m_ConfirmPasswordButton() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& m_EmailButton() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> T& m_NewsToggle() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = void*> T& m_CreateAccountButton() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = void*> T& m_HintLabel() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = void*> T& m_UserNameHeader() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = void*> T& m_PasswordHeader() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> T& m_ConfirmPasswordHeader() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = void*> T& m_EmailHeader() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(RegisterScreen*))(Il2CppBase() + 0x21C2C4))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x21C2D4))(0);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(RegisterScreen*))(Il2CppBase() + 0x21C49C))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(RegisterScreen*))(Il2CppBase() + 0x21CE18))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(RegisterScreen*))(Il2CppBase() + 0x21D1E0))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(RegisterScreen*))(Il2CppBase() + 0x21D2C4))(this);
	}
	template <typename T = void> T AuthenticationResultHandler(void* inPopup, void* inResult) {
		return ((T (*)(RegisterScreen*, void*, void*))(Il2CppBase() + 0x21D780))(this, inPopup, inResult);
	}
	template <typename T = bool> T ShowOfflineWarning() {
		return ((T (*)(RegisterScreen*))(Il2CppBase() + 0x21D894))(this);
	}
	template <typename T = void> T OnBack(void* inWidget) {
		return ((T (*)(RegisterScreen*, void*))(Il2CppBase() + 0x21DA48))(this, inWidget);
	}
	template <typename T = void> T Delegate_UserName(void* inInstigator) {
		return ((T (*)(RegisterScreen*, void*))(Il2CppBase() + 0x21DC50))(this, inInstigator);
	}
	template <typename T = void> T Delegate_Password(void* inInstigator) {
		return ((T (*)(RegisterScreen*, void*))(Il2CppBase() + 0x21DF20))(this, inInstigator);
	}
	template <typename T = void> T Delegate_ConfirmPassword(void* inInstigator) {
		return ((T (*)(RegisterScreen*, void*))(Il2CppBase() + 0x21E1C4))(this, inInstigator);
	}
	template <typename T = void> T Delegate_Email(void* inInstigator) {
		return ((T (*)(RegisterScreen*, void*))(Il2CppBase() + 0x21E468))(this, inInstigator);
	}
	template <typename T = void> T Delegate_News(bool switchValue) {
		return ((T (*)(RegisterScreen*, bool))(Il2CppBase() + 0x21E6D8))(this, switchValue);
	}
	template <typename T = void> T Delegate_Eula(void* inWidget) {
		return ((T (*)(RegisterScreen*, void*))(Il2CppBase() + 0x21E6E0))(this, inWidget);
	}
	template <typename T = void> T Delegate_Privacy(void* inWidget) {
		return ((T (*)(RegisterScreen*, void*))(Il2CppBase() + 0x21E704))(this, inWidget);
	}
	template <typename T = void> T Delegate_CreateAccount(void* inInstigator) {
		return ((T (*)(RegisterScreen*, void*))(Il2CppBase() + 0x21E728))(this, inInstigator);
	}
	template <typename T = void> T Delegate_OnKeyboardClose(void* inInput, Il2CppString* inKeyboardText, bool inInputCanceled) {
		return ((T (*)(RegisterScreen*, void*, Il2CppString*, bool))(Il2CppBase() + 0x21E93C))(this, inInput, inKeyboardText, inInputCanceled);
	}
	template <typename T = void> T UpdateCreateAccountButton() {
		return ((T (*)(RegisterScreen*))(Il2CppBase() + 0x21D180))(this);
	}
	template <typename T = void> T CheckUserName(Il2CppString* inName) {
		return ((T (*)(RegisterScreen*, Il2CppString*))(Il2CppBase() + 0x21F84C))(this, inName);
	}
	template <typename T = void> T VerifyAccountData() {
		return ((T (*)(RegisterScreen*))(Il2CppBase() + 0x21EDB0))(this);
	}
	template <typename T = void> T ClearHint() {
		return ((T (*)(RegisterScreen*))(Il2CppBase() + 0x21FB28))(this);
	}
	template <typename T = void> T ShowHint(int32_t inHintText) {
		return ((T (*)(RegisterScreen*, int32_t))(Il2CppBase() + 0x21D754))(this, inHintText);
	}
	template <typename T = bool> static T UserNameHasValidFormat(Il2CppString* inUserName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x21F974))(0, inUserName);
	}
	template <typename T = bool> T get_isUserNmaeValid() {
		return ((T (*)(RegisterScreen*))(Il2CppBase() + 0x21FB54))(this);
	}
	template <typename T = bool> T get_isPasswordValid() {
		return ((T (*)(RegisterScreen*))(Il2CppBase() + 0x21FCA0))(this);
	}
	template <typename T = Il2CppString*> T get_passwordGUIText() {
		return ((T (*)(RegisterScreen*))(Il2CppBase() + 0x21F6A4))(this);
	}
	template <typename T = Il2CppString*> T get_confirmGUIText() {
		return ((T (*)(RegisterScreen*))(Il2CppBase() + 0x21F778))(this);
	}
	template <typename T = bool> T get_isEmailValid() {
		return ((T (*)(RegisterScreen*))(Il2CppBase() + 0x21FDAC))(this);
	}
	template <typename T = bool> T get_accountDataValid() {
		return ((T (*)(RegisterScreen*))(Il2CppBase() + 0x21E8D0))(this);
	}
};
