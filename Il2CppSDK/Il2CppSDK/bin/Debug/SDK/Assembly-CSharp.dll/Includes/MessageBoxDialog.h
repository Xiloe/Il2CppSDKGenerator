#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MessageBoxDialog
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
		return ((T (*)(MessageBoxDialog*))(Il2CppBase() + 0x3E86F4))(this);
	}
	template <typename T = void> T SetCaption(Il2CppString* inCaption) {
		return ((T (*)(MessageBoxDialog*, Il2CppString*))(Il2CppBase() + 0x3E86FC))(this, inCaption);
	}
	template <typename T = void> T SetText(Il2CppString* inText) {
		return ((T (*)(MessageBoxDialog*, Il2CppString*))(Il2CppBase() + 0x3E8728))(this, inText);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(MessageBoxDialog*))(Il2CppBase() + 0x3E8754))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(MessageBoxDialog*))(Il2CppBase() + 0x3E8C3C))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(MessageBoxDialog*))(Il2CppBase() + 0x3E8DFC))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(MessageBoxDialog*))(Il2CppBase() + 0x3E8EDC))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(MessageBoxDialog*))(Il2CppBase() + 0x3E8F08))(this);
	}
	template <typename T = void> T Delegate_OK(void* inInstigator) {
		return ((T (*)(MessageBoxDialog*, void*))(Il2CppBase() + 0x3E8F10))(this, inInstigator);
	}
};
