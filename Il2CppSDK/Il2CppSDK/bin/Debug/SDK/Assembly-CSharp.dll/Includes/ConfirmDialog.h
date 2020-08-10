#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfirmDialog
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
	template <typename T = void*> T& m_Caption() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_Message() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ConfirmDialog*))(Il2CppBase() + 0x2E42FC))(this);
	}
	template <typename T = void> T SetCaption(Il2CppString* inCaption) {
		return ((T (*)(ConfirmDialog*, Il2CppString*))(Il2CppBase() + 0x2E4304))(this, inCaption);
	}
	template <typename T = void> T SetText(Il2CppString* inText) {
		return ((T (*)(ConfirmDialog*, Il2CppString*))(Il2CppBase() + 0x2E4330))(this, inText);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(ConfirmDialog*))(Il2CppBase() + 0x2E435C))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(ConfirmDialog*))(Il2CppBase() + 0x2E46AC))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(ConfirmDialog*))(Il2CppBase() + 0x2E4790))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(ConfirmDialog*))(Il2CppBase() + 0x2E4874))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(ConfirmDialog*))(Il2CppBase() + 0x2E48A0))(this);
	}
	template <typename T = void> T Delegate_OK(void* inInstigator) {
		return ((T (*)(ConfirmDialog*, void*))(Il2CppBase() + 0x2E48A8))(this, inInstigator);
	}
	template <typename T = void> T Delegate_Cancel(void* inInstigator) {
		return ((T (*)(ConfirmDialog*, void*))(Il2CppBase() + 0x2E49B8))(this, inInstigator);
	}
};
