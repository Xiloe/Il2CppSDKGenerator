#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUIBaseSwitch
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& m_Buttons() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_InitValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_Value() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_SwitchDelegate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GUIBaseSwitch*))(Il2CppBase() + 0x366EBC))(this);
	}
	template <typename T = void*> T get_Widget() {
		return ((T (*)(GUIBaseSwitch*))(Il2CppBase() + 0x366F5C))(this);
	}
	template <typename T = void> T SetValue(bool val) {
		return ((T (*)(GUIBaseSwitch*, bool))(Il2CppBase() + 0x366F64))(this, val);
	}
	template <typename T = bool> T GetValue() {
		return ((T (*)(GUIBaseSwitch*))(Il2CppBase() + 0x36708C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GUIBaseSwitch*))(Il2CppBase() + 0x367094))(this);
	}
	template <typename T = bool> T Callback(void* type) {
		return ((T (*)(GUIBaseSwitch*, void*))(Il2CppBase() + 0x367144))(this, type);
	}
	template <typename T = void> T RegisterDelegate(void* d) {
		return ((T (*)(GUIBaseSwitch*, void*))(Il2CppBase() + 0x367248))(this, d);
	}
	template <typename T = void> T ChildButtonPressed(float v) {
		return ((T (*)(GUIBaseSwitch*, float))(Il2CppBase() + 0x367250))(this, v);
	}
	template <typename T = void> T ShowSwitchButton() {
		return ((T (*)(GUIBaseSwitch*))(Il2CppBase() + 0x366FA4))(this);
	}
	template <typename T = void> T HideButtons() {
		return ((T (*)(GUIBaseSwitch*))(Il2CppBase() + 0x367170))(this);
	}
	template <typename T = void> T ChildButtonReleased() {
		return ((T (*)(GUIBaseSwitch*))(Il2CppBase() + 0x367320))(this);
	}
};
