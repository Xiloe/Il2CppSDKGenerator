#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUIBasePopUp
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& m_PopUpButtons() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_PopUpDelegate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_PopUpButtonsVisible() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GUIBasePopUp*))(Il2CppBase() + 0x364D10))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GUIBasePopUp*))(Il2CppBase() + 0x364DA8))(this);
	}
	template <typename T = void> T RegisterPopUpDelegate(void* d) {
		return ((T (*)(GUIBasePopUp*, void*))(Il2CppBase() + 0x364E98))(this, d);
	}
	template <typename T = void> T ChildButtonPressed(float v) {
		return ((T (*)(GUIBasePopUp*, float))(Il2CppBase() + 0x364EA0))(this, v);
	}
	template <typename T = void> T ChildButtonReleased() {
		return ((T (*)(GUIBasePopUp*))(Il2CppBase() + 0x364F88))(this);
	}
	template <typename T = void> T ShowPopUpButtons(bool v) {
		return ((T (*)(GUIBasePopUp*, bool))(Il2CppBase() + 0x364EA8))(this, v);
	}
	template <typename T = void> T UpdatePopUp() {
		return ((T (*)(GUIBasePopUp*))(Il2CppBase() + 0x365530))(this);
	}
};
