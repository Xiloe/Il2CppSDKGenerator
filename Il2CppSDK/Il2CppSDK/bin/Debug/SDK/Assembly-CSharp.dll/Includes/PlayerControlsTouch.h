#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerControlsTouch
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD795E4);
	}
	// Fields
	template <typename T = Il2CppRect> static T& leftArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppRect> static T& rightArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& m_Temp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_ViewJoystick() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_MoveJoystick() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_States() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& LastTouchControlTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor(void* inStates) {
		return ((T (*)(PlayerControlsTouch*, void*))(Il2CppBase() + 0x1FBD64))(this, inStates);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1FD110))(0);
	}
	template <typename T = float> T get_LastTouchControlTime() {
		return ((T (*)(PlayerControlsTouch*))(Il2CppBase() + 0x1FC704))(this);
	}
	template <typename T = void> T set_LastTouchControlTime(float value) {
		return ((T (*)(PlayerControlsTouch*, float))(Il2CppBase() + 0x1FD214))(this, value);
	}
	template <typename T = void> T CreateDefaultJoystics() {
		return ((T (*)(PlayerControlsTouch*))(Il2CppBase() + 0x1FD21C))(this);
	}
	template <typename T = void> T OnControlSchemeChange() {
		return ((T (*)(PlayerControlsTouch*))(Il2CppBase() + 0x1FD220))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PlayerControlsTouch*))(Il2CppBase() + 0x1FBD84))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PlayerControlsTouch*))(Il2CppBase() + 0x1FC70C))(this);
	}
	template <typename T = void*> static T TouchedInteractionIcon(Il2CppVector2 position) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x1FB49C))(0, position);
	}
	template <typename T = void> T TouchBegin(void* touch) {
		return ((T (*)(PlayerControlsTouch*, void*))(Il2CppBase() + 0x1FD7A8))(this, touch);
	}
	template <typename T = void> T TouchUpdate(void* touch) {
		return ((T (*)(PlayerControlsTouch*, void*))(Il2CppBase() + 0x1FE03C))(this, touch);
	}
	template <typename T = void> T TouchEnd(void* touch) {
		return ((T (*)(PlayerControlsTouch*, void*))(Il2CppBase() + 0x1FE8A0))(this, touch);
	}
	template <typename T = bool> T FingerIdInUse(void* touch, bool joysticksOnly) {
		return ((T (*)(PlayerControlsTouch*, void*, bool))(Il2CppBase() + 0x1FEA08))(this, touch, joysticksOnly);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PlayerControlsTouch*))(Il2CppBase() + 0x1FC074))(this);
	}
};
