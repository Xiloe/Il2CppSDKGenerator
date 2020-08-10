#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Hits
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_HitsLabel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_HitsLabelTransform() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_HitsNumber() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_HitsNumberTransform() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& m_BaseScaleNumber() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& m_BaseScaleHit() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_CurrentScale() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_CurrentAlpha() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_Speed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_Progress() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& TimeToHide() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& IsVisible() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	// Methods
	template <typename T = void> T _ctor(void* layout) {
		return ((T (*)(Hits*, void*))(Il2CppBase() + 0x3A2F90))(this, layout);
	}
	template <typename T = bool> T get_IsVisible() {
		return ((T (*)(Hits*))(Il2CppBase() + 0x3A31A0))(this);
	}
	template <typename T = void> T set_IsVisible(bool value) {
		return ((T (*)(Hits*, bool))(Il2CppBase() + 0x3A31A8))(this, value);
	}
	template <typename T = float> T get_Progress() {
		return ((T (*)(Hits*))(Il2CppBase() + 0x3A31B0))(this);
	}
	template <typename T = void> T Enable(bool enable) {
		return ((T (*)(Hits*, bool))(Il2CppBase() + 0x3A31B8))(this, enable);
	}
	template <typename T = void> T AddHit() {
		return ((T (*)(Hits*))(Il2CppBase() + 0x3A322C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Hits*))(Il2CppBase() + 0x3A32F0))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(Hits*))(Il2CppBase() + 0x3A312C))(this);
	}
};
