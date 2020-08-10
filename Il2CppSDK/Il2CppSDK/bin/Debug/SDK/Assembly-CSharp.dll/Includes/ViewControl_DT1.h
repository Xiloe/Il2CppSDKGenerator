#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewControlDT1
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
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
	// Methods
	template <typename T = void> T _ctor(float left, float bottom, float width, float height) {
		return ((T (*)(ViewControlDT1*, float, float, float, float))(Il2CppBase() + 0x27B398))(this, left, bottom, width, height);
	}
	template <typename T = void> T OnTouchBegin(void* touch) {
		return ((T (*)(ViewControlDT1*, void*))(Il2CppBase() + 0x27B454))(this, touch);
	}
	template <typename T = void> T OnTouchUpdate(void* touch) {
		return ((T (*)(ViewControlDT1*, void*))(Il2CppBase() + 0x27B4B8))(this, touch);
	}
	template <typename T = void> T OnTouchEnd(void* touch) {
		return ((T (*)(ViewControlDT1*, void*))(Il2CppBase() + 0x27B684))(this, touch);
	}
	template <typename T = bool> T IsInside(void* touch) {
		return ((T (*)(ViewControlDT1*, void*))(Il2CppBase() + 0x27B6A8))(this, touch);
	}
	template <typename T = void> T SetCenter(Il2CppVector2 center) {
		return ((T (*)(ViewControlDT1*, Il2CppVector2))(Il2CppBase() + 0x27B4AC))(this, center);
	}
};
