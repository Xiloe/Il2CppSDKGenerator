#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MiniMortar
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7947C);
	}
	// Fields
	template <typename T = void*> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Anim() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Audio() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Transform() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_Activation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_Deactivation() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_PauseDuration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_PauseTimer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_DetectionDistance() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_DetectionDuration() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_DetectionPause() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_DetectionSound() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_DetectionStartTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_DetectionInProgress() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& m_Detector() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_DetectorMaxScale() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& m_ProjPrefab() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<void*>*> T& m_ProjList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_ProjIndex() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& m_EjectionSound() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_EjectionSpeedMult() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> static T& m_FireLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_FireLockTimer() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<void*>*> static T& m_Projectiles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& m_FrameCounter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MiniMortar*))(Il2CppBase() + 0x3FB91C))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FBA20))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MiniMortar*))(Il2CppBase() + 0x3FBAF0))(this);
	}
	template <typename T = void> T Init(void* Data) {
		return ((T (*)(MiniMortar*, void*))(Il2CppBase() + 0x3FBC30))(this, Data);
	}
	template <typename T = void*> T Activation() {
		return ((T (*)(MiniMortar*))(Il2CppBase() + 0x3FBCA0))(this);
	}
	template <typename T = void*> T Deactivation() {
		return ((T (*)(MiniMortar*))(Il2CppBase() + 0x3FBD4C))(this);
	}
	template <typename T = void> T StartDetection() {
		return ((T (*)(MiniMortar*))(Il2CppBase() + 0x3FBDF8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MiniMortar*))(Il2CppBase() + 0x3FBE44))(this);
	}
	template <typename T = void> static T UpdateProjRecords() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FC0A0))(0);
	}
	template <typename T = bool> T FindTarget(void* Velocity) {
		return ((T (*)(MiniMortar*, void*))(Il2CppBase() + 0x3FC3C4))(this, Velocity);
	}
	template <typename T = bool> T IsTargetValid(void* Target, void* Velocity) {
		return ((T (*)(MiniMortar*, void*, void*))(Il2CppBase() + 0x3FCBE8))(this, Target, Velocity);
	}
	template <typename T = void> T FireAtTarget(Il2CppVector3 Velocity) {
		return ((T (*)(MiniMortar*, Il2CppVector3))(Il2CppBase() + 0x3FC828))(this, Velocity);
	}
};
