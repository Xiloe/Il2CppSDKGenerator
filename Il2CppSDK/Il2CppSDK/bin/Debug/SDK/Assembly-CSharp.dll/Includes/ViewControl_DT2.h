#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewControlDT2
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79608);
	}
	// Fields
	template <typename T = float> T& Left() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Right() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Top() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Bottom() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector2> T& LastTouchPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& Smoother() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& SnapToAxes() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor(float left, float bottom, float width, float height) {
		return ((T (*)(ViewControlDT2*, float, float, float, float))(Il2CppBase() + 0x27B77C))(this, left, bottom, width, height);
	}
	template <typename T = void> T OnTouchBegin(void* touch) {
		return ((T (*)(ViewControlDT2*, void*))(Il2CppBase() + 0x27B96C))(this, touch);
	}
	template <typename T = void> T OnTouchUpdate(void* touch) {
		return ((T (*)(ViewControlDT2*, void*))(Il2CppBase() + 0x27B9D0))(this, touch);
	}
	template <typename T = void> T OnTouchEnd(void* touch) {
		return ((T (*)(ViewControlDT2*, void*))(Il2CppBase() + 0x27C4E0))(this, touch);
	}
	template <typename T = bool> T IsInside(void* touch) {
		return ((T (*)(ViewControlDT2*, void*))(Il2CppBase() + 0x27C504))(this, touch);
	}
	template <typename T = void> T OnNoTouch() {
		return ((T (*)(ViewControlDT2*))(Il2CppBase() + 0x27C5D8))(this);
	}
	template <typename T = void> T SetCenter(Il2CppVector2 center) {
		return ((T (*)(ViewControlDT2*, Il2CppVector2))(Il2CppBase() + 0x27B9C4))(this, center);
	}
	template <typename T = void> T StickToAxis(bool polarizedJoystick) {
		return ((T (*)(ViewControlDT2*, bool))(Il2CppBase() + 0x27C3E8))(this, polarizedJoystick);
	}
	template <typename T = float> static T EasyIn(float t) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x27C3B0))(0, t);
	}
};
