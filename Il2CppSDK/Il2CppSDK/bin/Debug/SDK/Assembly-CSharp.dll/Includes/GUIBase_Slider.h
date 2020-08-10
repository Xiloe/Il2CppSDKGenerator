#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUIBaseSlider
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& m_MinValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_MaxValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_InitValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_BarSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_TouchableAreaWidthScale() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_TouchableAreaHeightScale() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_ChangeValueDelegate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_CurrentValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_WasTouched() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GUIBaseSlider*))(Il2CppBase() + 0x366318))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GUIBaseSlider*))(Il2CppBase() + 0x366338))(this);
	}
	template <typename T = void> T RegisterChangeValueDelegate(void* d) {
		return ((T (*)(GUIBaseSlider*, void*))(Il2CppBase() + 0x36642C))(this, d);
	}
	template <typename T = bool> T Callback(void* type) {
		return ((T (*)(GUIBaseSlider*, void*))(Il2CppBase() + 0x366434))(this, type);
	}
	template <typename T = void> T GetTouchAreaScale(void** scaleWidth, void** scaleHeight) {
		return ((T (*)(GUIBaseSlider*, void**, void**))(Il2CppBase() + 0x366A68))(this, scaleWidth, scaleHeight);
	}
	template <typename T = void> T ChildButtonPressed(float v) {
		return ((T (*)(GUIBaseSlider*, float))(Il2CppBase() + 0x366A7C))(this, v);
	}
	template <typename T = void> T ChildButtonReleased() {
		return ((T (*)(GUIBaseSlider*))(Il2CppBase() + 0x366D14))(this);
	}
	template <typename T = void> T CustomInit() {
		return ((T (*)(GUIBaseSlider*))(Il2CppBase() + 0x366468))(this);
	}
	template <typename T = void> T SetValue(float v) {
		return ((T (*)(GUIBaseSlider*, float))(Il2CppBase() + 0x366AD4))(this, v);
	}
	template <typename T = void> T UpdateSlider() {
		return ((T (*)(GUIBaseSlider*))(Il2CppBase() + 0x3666FC))(this);
	}
};
