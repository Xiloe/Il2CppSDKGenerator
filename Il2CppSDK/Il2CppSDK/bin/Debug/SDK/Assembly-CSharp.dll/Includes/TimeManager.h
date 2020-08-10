#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimeManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78880);
	}
	// Fields
	template <typename T = void*> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_DebugOverrideTimeScale() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_TimeSinceLevelLoad() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_UseScreenEffect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_SlowTimeSndPlayed() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = float> T& m_TimeScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_TimeScaleStart() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_BlendIn() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_BlendOut() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_StoredScale() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_IsPaused() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_OriginalFixedTimeDelta() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& m_FpsCounter() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(TimeManager*))(Il2CppBase() + 0x26ECE8))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x26EDB0))(0);
	}
	template <typename T = void*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x26EDB4))(0);
	}
	template <typename T = float> T get_TimeScale() {
		return ((T (*)(TimeManager*))(Il2CppBase() + 0x26EE64))(this);
	}
	template <typename T = void> T set_TimeScale(float value) {
		return ((T (*)(TimeManager*, float))(Il2CppBase() + 0x26EE6C))(this, value);
	}
	template <typename T = float> T get_FPS() {
		return ((T (*)(TimeManager*))(Il2CppBase() + 0x26EF0C))(this);
	}
	template <typename T = float> T get_timeSinceLevelLoad() {
		return ((T (*)(TimeManager*))(Il2CppBase() + 0x26EF38))(this);
	}
	template <typename T = void> T SetTimeScale(float scale, float blendin, float blendout, float duration, bool useScreenEffect) {
		return ((T (*)(TimeManager*, float, float, float, float, bool))(Il2CppBase() + 0x26EF40))(this, scale, blendin, blendout, duration, useScreenEffect);
	}
	template <typename T = void> T DebugOverrideTimeScale(float scale, bool set) {
		return ((T (*)(TimeManager*, float, bool))(Il2CppBase() + 0x26F394))(this, scale, set);
	}
	template <typename T = void> T PauseTime() {
		return ((T (*)(TimeManager*))(Il2CppBase() + 0x26F3AC))(this);
	}
	template <typename T = void> T UnpauseTime() {
		return ((T (*)(TimeManager*))(Il2CppBase() + 0x26F3E4))(this);
	}
	template <typename T = float> T GetRealDeltaTime() {
		return ((T (*)(TimeManager*))(Il2CppBase() + 0x26F3FC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TimeManager*))(Il2CppBase() + 0x26F444))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TimeManager*))(Il2CppBase() + 0x26F4F8))(this);
	}
	template <typename T = void> T SetTimeScaleInternal(float scale, float blendin, float blendout, float duration) {
		return ((T (*)(TimeManager*, float, float, float, float))(Il2CppBase() + 0x26EE94))(this, scale, blendin, blendout, duration);
	}
	template <typename T = void> T BeginSlowTimeFx() {
		return ((T (*)(TimeManager*))(Il2CppBase() + 0x26F1D0))(this);
	}
};
