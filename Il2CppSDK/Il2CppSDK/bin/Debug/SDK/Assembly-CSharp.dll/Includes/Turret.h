#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Turret
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_PartsSettings() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_AimSettings() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_WpnSettings() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_SndSettings() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& m_AimDir() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_AimPhase() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_HMotor() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_VMotor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_InitHAngle() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_InitVAngle() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_Audio() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& m_AudioFire() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& m_Target() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_AmmoClip() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_AmmoRemaining() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_AmmoTotal() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_NextShotTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_ShotEffectTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& m_ReloadTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& m_SelectTargetTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& m_ThresholdInFOV() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& m_ThresholdInSight() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = void*> T& m_ProjInitSettings() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppVector3> T& m_MuzzleOriginalRot() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector3> T& m_MuzzleOriginalScale() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& m_Deactivated() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = void*> T& m_Deactivation() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = void*> T& m_LifeBar() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = void*> T& m_NavMeshAgent() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& tm() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Turret*))(Il2CppBase() + 0x276BC0))(this);
	}
	template <typename T = bool> T get_OutOfAmmo() {
		return ((T (*)(Turret*))(Il2CppBase() + 0x276EB0))(this);
	}
	template <typename T = void> T Init(void* Data) {
		return ((T (*)(Turret*, void*))(Il2CppBase() + 0x276ED8))(this, Data);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Turret*))(Il2CppBase() + 0x276FA8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Turret*))(Il2CppBase() + 0x27766C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Turret*))(Il2CppBase() + 0x277694))(this);
	}
	template <typename T = void> T UpdateAiming(float DeltaTime) {
		return ((T (*)(Turret*, float))(Il2CppBase() + 0x27771C))(this, DeltaTime);
	}
	template <typename T = void> T ChangeAimPhase(void* newPhase) {
		return ((T (*)(Turret*, void*))(Il2CppBase() + 0x2783A0))(this, newPhase);
	}
	template <typename T = void> T UpdateTarget(float CurrTime) {
		return ((T (*)(Turret*, float))(Il2CppBase() + 0x277C70))(this, CurrTime);
	}
	template <typename T = void> T SelectTarget(float CurrTime) {
		return ((T (*)(Turret*, float))(Il2CppBase() + 0x278630))(this, CurrTime);
	}
	template <typename T = bool> T IsTargetValid(void* T_) {
		return ((T (*)(Turret*, void*))(Il2CppBase() + 0x278ADC))(this, T_);
	}
	template <typename T = bool> T IsTargetVisible(void* T_) {
		return ((T (*)(Turret*, void*))(Il2CppBase() + 0x278B30))(this, T_);
	}
	template <typename T = void> T UpdateReload(float DeltaTime) {
		return ((T (*)(Turret*, float))(Il2CppBase() + 0x277FA8))(this, DeltaTime);
	}
	template <typename T = void> T UpdateShooting(float DeltaTime) {
		return ((T (*)(Turret*, float))(Il2CppBase() + 0x2780B0))(this, DeltaTime);
	}
	template <typename T = void> T ShootAtTarget() {
		return ((T (*)(Turret*))(Il2CppBase() + 0x278F48))(this);
	}
	template <typename T = void> T OnDeactivation() {
		return ((T (*)(Turret*))(Il2CppBase() + 0x279378))(this);
	}
};
