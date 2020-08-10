#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HudDebug
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_FpsLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_LastFPS() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HudDebug*))(Il2CppBase() + 0x3A9ED4))(this);
	}
	template <typename T = bool> T VisibleOnStart() {
		return ((T (*)(HudDebug*))(Il2CppBase() + 0x3A9EE4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HudDebug*))(Il2CppBase() + 0x3A9EEC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HudDebug*))(Il2CppBase() + 0x3AA1A0))(this);
	}
	template <typename T = void> T LateUpdate(float deltaTime) {
		return ((T (*)(HudDebug*, float))(Il2CppBase() + 0x3AA1A4))(this, deltaTime);
	}
	template <typename T = void> T ShowWidgets(bool on) {
		return ((T (*)(HudDebug*, bool))(Il2CppBase() + 0x3AA378))(this, on);
	}
};
