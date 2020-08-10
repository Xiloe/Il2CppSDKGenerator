#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUIBaseProgressBar
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& m_InitValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_CurrentValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Anim() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_BarSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& barWidth() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& barHeight() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GUIBaseProgressBar*))(Il2CppBase() + 0x36572C))(this);
	}
	template <typename T = float> T get_CurentValue() {
		return ((T (*)(GUIBaseProgressBar*))(Il2CppBase() + 0x36573C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GUIBaseProgressBar*))(Il2CppBase() + 0x365744))(this);
	}
	template <typename T = bool> T Callback(void* type) {
		return ((T (*)(GUIBaseProgressBar*, void*))(Il2CppBase() + 0x365840))(this, type);
	}
	template <typename T = void> T CustomInit() {
		return ((T (*)(GUIBaseProgressBar*))(Il2CppBase() + 0x365858))(this);
	}
	template <typename T = void> T SetValue(float v) {
		return ((T (*)(GUIBaseProgressBar*, float))(Il2CppBase() + 0x365E04))(this, v);
	}
	template <typename T = void> T SetBarColor(Il2CppColor c) {
		return ((T (*)(GUIBaseProgressBar*, Il2CppColor))(Il2CppBase() + 0x3661A8))(this, c);
	}
	template <typename T = void> T PlayAnimClip(void* clip) {
		return ((T (*)(GUIBaseProgressBar*, void*))(Il2CppBase() + 0x3661D4))(this, clip);
	}
	template <typename T = void> T StopAnimClip() {
		return ((T (*)(GUIBaseProgressBar*))(Il2CppBase() + 0x36628C))(this);
	}
};
