#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HudMoveControl
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79148);
	}
	// Fields
	template <typename T = void*> T& m_DPad() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_DPadjoy() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& s_PivotMainName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& s_LayoutMainName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& s_DPadName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& s_DPadJoyName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HudMoveControl*))(Il2CppBase() + 0x3B5AE4))(this);
	}
	template <typename T = bool> T VisibleOnStart() {
		return ((T (*)(HudMoveControl*))(Il2CppBase() + 0x3B5BA8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HudMoveControl*))(Il2CppBase() + 0x3B5BB0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HudMoveControl*))(Il2CppBase() + 0x3B5E70))(this);
	}
	template <typename T = void> T LateUpdate(float deltaTime) {
		return ((T (*)(HudMoveControl*, float))(Il2CppBase() + 0x3B5E74))(this, deltaTime);
	}
	template <typename T = void> T ShowWidgets(bool on) {
		return ((T (*)(HudMoveControl*, bool))(Il2CppBase() + 0x3B5E78))(this, on);
	}
	template <typename T = void> T StoreControlsOrigPositions() {
		return ((T (*)(HudMoveControl*))(Il2CppBase() + 0x3B6014))(this);
	}
	template <typename T = void> T UpdateControlsPosition() {
		return ((T (*)(HudMoveControl*))(Il2CppBase() + 0x3B6174))(this);
	}
	template <typename T = void> T JoystickBaseShow(Il2CppVector2 center) {
		return ((T (*)(HudMoveControl*, Il2CppVector2))(Il2CppBase() + 0x3B629C))(this, center);
	}
	template <typename T = void> T JoystickBaseHide() {
		return ((T (*)(HudMoveControl*))(Il2CppBase() + 0x3B63F0))(this);
	}
	template <typename T = void> T JoystickDown(Il2CppVector2 center) {
		return ((T (*)(HudMoveControl*, Il2CppVector2))(Il2CppBase() + 0x3B6450))(this, center);
	}
	template <typename T = void> T JoystickUpdate(Il2CppVector2 center) {
		return ((T (*)(HudMoveControl*, Il2CppVector2))(Il2CppBase() + 0x3B6540))(this, center);
	}
	template <typename T = void> T JoystickUp() {
		return ((T (*)(HudMoveControl*))(Il2CppBase() + 0x3B6604))(this);
	}
	template <typename T = Il2CppVector3> static T ScreenToWidget(Il2CppVector2 pos) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x3B638C))(0, pos);
	}
};
