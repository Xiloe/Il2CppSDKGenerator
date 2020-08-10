#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TurretRotator
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD798D8);
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
		return ((T (*)(TurretRotator*, float, float, float))(Il2CppBase() + 0x2775D4))(this, Angle, Range, Speed);
	}
	template <typename T = float> T get_Angle() {
		return ((T (*)(TurretRotator*))(Il2CppBase() + 0x278398))(this);
	}
	template <typename T = float> T get_AbsDiff() {
		return ((T (*)(TurretRotator*))(Il2CppBase() + 0x2781C4))(this);
	}
	template <typename T = void> T set_TargetAngle(float value) {
		return ((T (*)(TurretRotator*, float))(Il2CppBase() + 0x27862C))(this, value);
	}
	template <typename T = bool> T get_IsActive() {
		return ((T (*)(TurretRotator*))(Il2CppBase() + 0x279864))(this);
	}
	template <typename T = void> T Update(float DeltaTime) {
		return ((T (*)(TurretRotator*, float))(Il2CppBase() + 0x278278))(this, DeltaTime);
	}
	template <typename T = void> T SetTarget(float Angle) {
		return ((T (*)(TurretRotator*, float))(Il2CppBase() + 0x2796C0))(this, Angle);
	}
};
