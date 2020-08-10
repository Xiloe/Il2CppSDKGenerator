#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TouchViewControl
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& FingerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Yaw() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Pitch() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& NeedSmoothing() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& Updated() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(TouchViewControl*))(Il2CppBase() + 0x271A1C))(this);
	}
	template <typename T = void> T OnTouchBegin(void* touch) {
		return ((T (*)(TouchViewControl*, void*))(Il2CppBase() + 0x0))(this, touch);
	}
	template <typename T = void> T OnTouchUpdate(void* touch) {
		return ((T (*)(TouchViewControl*, void*))(Il2CppBase() + 0x0))(this, touch);
	}
	template <typename T = void> T OnTouchEnd(void* touch) {
		return ((T (*)(TouchViewControl*, void*))(Il2CppBase() + 0x0))(this, touch);
	}
	template <typename T = bool> T IsInside(void* touch) {
		return ((T (*)(TouchViewControl*, void*))(Il2CppBase() + 0x0))(this, touch);
	}
	template <typename T = void> T OnNoTouch() {
		return ((T (*)(TouchViewControl*))(Il2CppBase() + 0x271A2C))(this);
	}
};
