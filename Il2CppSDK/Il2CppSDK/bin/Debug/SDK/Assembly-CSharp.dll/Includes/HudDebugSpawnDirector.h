#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HudDebugSpawnDirector
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79270);
	}
	// Fields
	template <typename T = void*> T& Mat() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& StartLeft() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& StartDown() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Width() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Height() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<float>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& MaxValues() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& StartPos() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& Step() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HudDebugSpawnDirector*))(Il2CppBase() + 0x3AA3E0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(HudDebugSpawnDirector*))(Il2CppBase() + 0x3AA4AC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(HudDebugSpawnDirector*))(Il2CppBase() + 0x3AA530))(this);
	}
	template <typename T = void> T AddIntensity(float intensity) {
		return ((T (*)(HudDebugSpawnDirector*, float))(Il2CppBase() + 0x3AA594))(this, intensity);
	}
	template <typename T = void> T OnPostRender() {
		return ((T (*)(HudDebugSpawnDirector*))(Il2CppBase() + 0x3AA6F8))(this);
	}
	template <typename T = void> T DrawBorder() {
		return ((T (*)(HudDebugSpawnDirector*))(Il2CppBase() + 0x3AA82C))(this);
	}
	template <typename T = void> T DrawGraph() {
		return ((T (*)(HudDebugSpawnDirector*))(Il2CppBase() + 0x3AA988))(this);
	}
};
