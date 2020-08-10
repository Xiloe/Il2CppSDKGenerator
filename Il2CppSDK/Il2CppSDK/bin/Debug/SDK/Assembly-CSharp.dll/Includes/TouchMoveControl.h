#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TouchMoveControl
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& FingerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& Dir() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Force() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& Updated() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& Center() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(TouchMoveControl*))(Il2CppBase() + 0x2719BC))(this);
	}
	template <typename T = Il2CppVector2> T get_Center() {
		return ((T (*)(TouchMoveControl*))(Il2CppBase() + 0x2719CC))(this);
	}
	template <typename T = void> T set_Center(Il2CppVector2 value) {
		return ((T (*)(TouchMoveControl*, Il2CppVector2))(Il2CppBase() + 0x2719E0))(this, value);
	}
	template <typename T = float> T get_Radius() {
		return ((T (*)(TouchMoveControl*))(Il2CppBase() + 0x2719EC))(this);
	}
	template <typename T = void> T OnTouchBegin(void* touch) {
		return ((T (*)(TouchMoveControl*, void*))(Il2CppBase() + 0x0))(this, touch);
	}
	template <typename T = void> T OnTouchUpdate(void* touch) {
		return ((T (*)(TouchMoveControl*, void*))(Il2CppBase() + 0x0))(this, touch);
	}
	template <typename T = void> T OnTouchEnd(void* touch) {
		return ((T (*)(TouchMoveControl*, void*))(Il2CppBase() + 0x0))(this, touch);
	}
	template <typename T = bool> T IsInside(void* touch) {
		return ((T (*)(TouchMoveControl*, void*))(Il2CppBase() + 0x0))(this, touch);
	}
};
