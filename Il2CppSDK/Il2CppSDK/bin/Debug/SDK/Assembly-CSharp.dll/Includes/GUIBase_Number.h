#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUIBaseNumber
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD790C4);
	}
	// Fields
	template <typename T = int32_t> static T& MAX_NUMBER_DIGITS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& numberDigits() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_Value() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_KeepZeros() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_UvLeft() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_UvTop() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_UvWidth() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_UvHeight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GUIBaseNumber*))(Il2CppBase() + 0x3626B4))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3626CC))(0);
	}
	template <typename T = void*> T get_Widget() {
		return ((T (*)(GUIBaseNumber*))(Il2CppBase() + 0x362750))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GUIBaseNumber*))(Il2CppBase() + 0x362758))(this);
	}
	template <typename T = bool> T Callback(void* type) {
		return ((T (*)(GUIBaseNumber*, void*))(Il2CppBase() + 0x362804))(this, type);
	}
	template <typename T = void> T CustomInit() {
		return ((T (*)(GUIBaseNumber*))(Il2CppBase() + 0x36283C))(this);
	}
	template <typename T = void> T SetNumber(int32_t number, int32_t max) {
		return ((T (*)(GUIBaseNumber*, int32_t, int32_t))(Il2CppBase() + 0x362D88))(this, number, max);
	}
};
