#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ForgotPasswordDialog
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_ScreenPivot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_ScreenLayout() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_OKButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_CancelButton() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_NameButton() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& m_UserName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ForgotPasswordDialog*))(Il2CppBase() + 0x31901C))(this);
	}
	template <typename T = void> T SetCaption(Il2CppString* inCaption) {
		return ((T (*)(ForgotPasswordDialog*, Il2CppString*))(Il2CppBase() + 0x3190E0))(this, inCaption);
	}
	template <typename T = void> T SetText(Il2CppString* inText) {
		return ((T (*)(ForgotPasswordDialog*, Il2CppString*))(Il2CppBase() + 0x3190E4))(this, inText);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(ForgotPasswordDialog*))(Il2CppBase() + 0x3190E8))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(ForgotPasswordDialog*))(Il2CppBase() + 0x319390))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(ForgotPasswordDialog*))(Il2CppBase() + 0x319728))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(ForgotPasswordDialog*))(Il2CppBase() + 0x319864))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(ForgotPasswordDialog*))(Il2CppBase() + 0x31986C))(this);
	}
	template <typename T = void> T Delegate_OK(void* inInstigator) {
		return ((T (*)(ForgotPasswordDialog*, void*))(Il2CppBase() + 0x319874))(this, inInstigator);
	}
	template <typename T = void> T Delegate_Cancel(void* inInstigator) {
		return ((T (*)(ForgotPasswordDialog*, void*))(Il2CppBase() + 0x319B04))(this, inInstigator);
	}
	template <typename T = void> T Delegate_UserName(void* inInstigator) {
		return ((T (*)(ForgotPasswordDialog*, void*))(Il2CppBase() + 0x319C14))(this, inInstigator);
	}
	template <typename T = void> T Delegate_OnKeyboardClose(void* inInput, Il2CppString* inKeyboardText, bool inInputCanceled) {
		return ((T (*)(ForgotPasswordDialog*, void*, Il2CppString*, bool))(Il2CppBase() + 0x319ED8))(this, inInput, inKeyboardText, inInputCanceled);
	}
	template <typename T = void> T UpdateOKButton() {
		return ((T (*)(ForgotPasswordDialog*))(Il2CppBase() + 0x3196A8))(this);
	}
};
