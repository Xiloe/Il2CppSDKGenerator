#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AchievementNotify
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Parent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_Text() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_CurrentAlpha() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_Speed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_Progress() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& TimeToHide() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsVisible() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor(void* layout) {
		return ((T (*)(AchievementNotify*, void*))(Il2CppBase() + 0x3A21B0))(this, layout);
	}
	template <typename T = bool> T get_IsVisible() {
		return ((T (*)(AchievementNotify*))(Il2CppBase() + 0x3A2F58))(this);
	}
	template <typename T = void> T set_IsVisible(bool value) {
		return ((T (*)(AchievementNotify*, bool))(Il2CppBase() + 0x3A2F60))(this, value);
	}
	template <typename T = float> T get_Progress() {
		return ((T (*)(AchievementNotify*))(Il2CppBase() + 0x3A2F68))(this);
	}
	template <typename T = void> T Enable(bool enable) {
		return ((T (*)(AchievementNotify*, bool))(Il2CppBase() + 0x3A2CB0))(this, enable);
	}
	template <typename T = void> T Show(Il2CppString* text) {
		return ((T (*)(AchievementNotify*, Il2CppString*))(Il2CppBase() + 0x3A2DCC))(this, text);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AchievementNotify*))(Il2CppBase() + 0x3A2830))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(AchievementNotify*))(Il2CppBase() + 0x3A2F20))(this);
	}
};
