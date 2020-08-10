#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NewFriendDialog
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
	template <typename T = void*> T& m_NameButton() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& m_FriendName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(NewFriendDialog*))(Il2CppBase() + 0x1E9704))(this);
	}
	template <typename T = void> T SetCaption(Il2CppString* inCaption) {
		return ((T (*)(NewFriendDialog*, Il2CppString*))(Il2CppBase() + 0x1E97C8))(this, inCaption);
	}
	template <typename T = void> T SetText(Il2CppString* inText) {
		return ((T (*)(NewFriendDialog*, Il2CppString*))(Il2CppBase() + 0x1E97CC))(this, inText);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(NewFriendDialog*))(Il2CppBase() + 0x1E97D0))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(NewFriendDialog*))(Il2CppBase() + 0x1E9A40))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(NewFriendDialog*))(Il2CppBase() + 0x1E9CD0))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(NewFriendDialog*))(Il2CppBase() + 0x1E9E0C))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(NewFriendDialog*))(Il2CppBase() + 0x1E9E14))(this);
	}
	template <typename T = void> T Delegate_OK(void* inInstigator) {
		return ((T (*)(NewFriendDialog*, void*))(Il2CppBase() + 0x1E9E1C))(this, inInstigator);
	}
	template <typename T = void> T Delegate_FriendName(void* inInstigator) {
		return ((T (*)(NewFriendDialog*, void*))(Il2CppBase() + 0x1EA0F4))(this, inInstigator);
	}
	template <typename T = void> T Delegate_OnKeyboardClose(void* inInput, Il2CppString* inKeyboardText, bool inInputCanceled) {
		return ((T (*)(NewFriendDialog*, void*, Il2CppString*, bool))(Il2CppBase() + 0x1EA364))(this, inInput, inKeyboardText, inInputCanceled);
	}
	template <typename T = void> T UpdateOKButton() {
		return ((T (*)(NewFriendDialog*))(Il2CppBase() + 0x1E9C50))(this);
	}
};
