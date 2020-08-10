#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Rotator
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7987C);
	}
	// Fields
	template <typename T = float> T& m_Current() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_Target() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_AngleLimited() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_AngleLimitMin() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_AngleLimitMax() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_Speed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_Active() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor(float Angle, float Range, float Speed) {
		return ((T (*)(Rotator*, float, float, float))(Il2CppBase() + 0x222410))(this, Angle, Range, Speed);
	}
	template <typename T = float> T get_Angle() {
		return ((T (*)(Rotator*))(Il2CppBase() + 0x2224A8))(this);
	}
	template <typename T = void> T set_Angle(float value) {
		return ((T (*)(Rotator*, float))(Il2CppBase() + 0x2224B0))(this, value);
	}
	template <typename T = float> T get_AbsDiff() {
		return ((T (*)(Rotator*))(Il2CppBase() + 0x222598))(this);
	}
	template <typename T = void> T set_TargetAngle(float value) {
		return ((T (*)(Rotator*, float))(Il2CppBase() + 0x22264C))(this, value);
	}
	template <typename T = float> T get_Speed() {
		return ((T (*)(Rotator*))(Il2CppBase() + 0x222734))(this);
	}
	template <typename T = bool> T get_IsActive() {
		return ((T (*)(Rotator*))(Il2CppBase() + 0x22273C))(this);
	}
	template <typename T = void> T Update(float DeltaTime) {
		return ((T (*)(Rotator*, float))(Il2CppBase() + 0x222744))(this, DeltaTime);
	}
	template <typename T = void> T SetCurrent(float Angle) {
		return ((T (*)(Rotator*, float))(Il2CppBase() + 0x2224B4))(this, Angle);
	}
	template <typename T = void> T SetTarget(float Angle) {
		return ((T (*)(Rotator*, float))(Il2CppBase() + 0x222650))(this, Angle);
	}
	template <typename T = float> T FixAngle(float Angle) {
		return ((T (*)(Rotator*, float))(Il2CppBase() + 0x222864))(this, Angle);
	}
};
