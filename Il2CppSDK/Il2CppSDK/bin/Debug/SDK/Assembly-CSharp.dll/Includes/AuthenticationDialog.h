#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AuthenticationDialog
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD788EC);
	}
	// Fields
	template <typename T = void*> T& lastAuthStatus() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& AUTHENTICATION_IN_PROGRESS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AUTHENTICATION_GET_PPI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& AUTHENTICATION_FAILED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& AUTHENTICATION_OK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> T& m_ScreenPivot() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_ScreenLayout() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_OKButton() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_ProggresLabel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AuthenticationDialog*))(Il2CppBase() + 0x1D4124))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D4134))(0);
	}
	template <typename T = void> T SetCaption(Il2CppString* inCaption) {
		return ((T (*)(AuthenticationDialog*, Il2CppString*))(Il2CppBase() + 0x1D41F8))(this, inCaption);
	}
	template <typename T = void> T SetText(Il2CppString* inText) {
		return ((T (*)(AuthenticationDialog*, Il2CppString*))(Il2CppBase() + 0x1D41FC))(this, inText);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(AuthenticationDialog*))(Il2CppBase() + 0x1D4200))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(AuthenticationDialog*))(Il2CppBase() + 0x1D47C8))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(AuthenticationDialog*))(Il2CppBase() + 0x1D49B4))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(AuthenticationDialog*))(Il2CppBase() + 0x1D4A90))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(AuthenticationDialog*))(Il2CppBase() + 0x1D4F10))(this);
	}
	template <typename T = void> T CloseDialog(void* inResult) {
		return ((T (*)(AuthenticationDialog*, void*))(Il2CppBase() + 0x1D4DE8))(this, inResult);
	}
	template <typename T = void> T Delegate_OK(void* inInstigator) {
		return ((T (*)(AuthenticationDialog*, void*))(Il2CppBase() + 0x1D4F34))(this, inInstigator);
	}
	template <typename T = void> T UpdateOKButton() {
		return ((T (*)(AuthenticationDialog*))(Il2CppBase() + 0x1D4908))(this);
	}
};
