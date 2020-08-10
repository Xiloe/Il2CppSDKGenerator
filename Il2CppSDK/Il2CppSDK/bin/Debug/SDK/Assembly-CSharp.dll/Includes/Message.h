#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Message
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& m_BaseScale() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_CurrentScale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_CurrentAlpha() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_Transform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_Speed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_Progress() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& IsVisible() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor(void* layout, Il2CppString* name) {
		return ((T (*)(Message*, void*, Il2CppString*))(Il2CppBase() + 0x3A3504))(this, layout, name);
	}
	template <typename T = bool> T get_IsVisible() {
		return ((T (*)(Message*))(Il2CppBase() + 0x3A35D8))(this);
	}
	template <typename T = void> T set_IsVisible(bool value) {
		return ((T (*)(Message*, bool))(Il2CppBase() + 0x3A35E0))(this, value);
	}
	template <typename T = float> T get_Progress() {
		return ((T (*)(Message*))(Il2CppBase() + 0x3A35E8))(this);
	}
	template <typename T = void> T SetLayer(int32_t order) {
		return ((T (*)(Message*, int32_t))(Il2CppBase() + 0x3A35F0))(this, order);
	}
	template <typename T = void> T Enable(bool enable) {
		return ((T (*)(Message*, bool))(Il2CppBase() + 0x3A3614))(this, enable);
	}
	template <typename T = void> T Show(float speed) {
		return ((T (*)(Message*, float))(Il2CppBase() + 0x3A3650))(this, speed);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Message*))(Il2CppBase() + 0x3A369C))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(Message*))(Il2CppBase() + 0x3A359C))(this);
	}
};
