#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponBase
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& PlayerAnimsSetup() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& WeaponAnimsSetup() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& SoundsSetup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& Muzzle() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& Shells() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& Owner() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& Settings() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& SettingsData() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& _MoveDispersion() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& _ShootDispersion() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _AmmoInClip() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _AmmoInWeapon() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& AmmoModificator() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& Transform() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& Audio() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& Animation() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& TimeReload() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& TimeArm() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& UpdateAnimations() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> T& InitProjSettings() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& Busy() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& Firing() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27C77C))(this);
	}
	template <typename T = void*> T get_WeaponID() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27C8A8))(this);
	}
	template <typename T = void*> T get_WeaponType() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27D4B0))(this);
	}
	template <typename T = float> T get_FinalDispersion() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27D4D4))(this);
	}
	template <typename T = float> T get_MoveDispersion() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27D53C))(this);
	}
	template <typename T = void> T set_MoveDispersion(float value) {
		return ((T (*)(WeaponBase*, float))(Il2CppBase() + 0x27D54C))(this, value);
	}
	template <typename T = float> T get_ShootDispersion() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27D544))(this);
	}
	template <typename T = void> T set_ShootDispersion(float value) {
		return ((T (*)(WeaponBase*, float))(Il2CppBase() + 0x27D57C))(this, value);
	}
	template <typename T = int32_t> T get_ClipAmmo() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27D5AC))(this);
	}
	template <typename T = void> T set_ClipAmmo(int32_t value) {
		return ((T (*)(WeaponBase*, int32_t))(Il2CppBase() + 0x27D5B4))(this, value);
	}
	template <typename T = int32_t> T get_WeaponAmmo() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27D6B8))(this);
	}
	template <typename T = void> T set_WeaponAmmo(int32_t value) {
		return ((T (*)(WeaponBase*, int32_t))(Il2CppBase() + 0x27D6C0))(this, value);
	}
	template <typename T = int32_t> T get_MaxAmmoInClip() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27D694))(this);
	}
	template <typename T = int32_t> T get_MaxAmmoInWeapon() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27D790))(this);
	}
	template <typename T = bool> T get_HasAnyAmmo() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27D89C))(this);
	}
	template <typename T = bool> T get_IsFull() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27D8B8))(this);
	}
	template <typename T = bool> T get_IsFullyLoaded() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27D8E4))(this);
	}
	template <typename T = bool> T get_IsFullAuto() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27D91C))(this);
	}
	template <typename T = bool> T get_IsCriticalAmmo() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27D94C))(this);
	}
	template <typename T = float> T get_FireTime() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27D98C))(this);
	}
	template <typename T = Il2CppVector3> T get_ShotPos() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27D9B0))(this);
	}
	template <typename T = Il2CppVector3> T get_ShotDir() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27DA5C))(this);
	}
	template <typename T = float> T get_MaxRange() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27DAAC))(this);
	}
	template <typename T = float> T get_EffectiveRange() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27DAD0))(this);
	}
	template <typename T = bool> T get_CanAim() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27DAF4))(this);
	}
	template <typename T = float> T get_IronSightFov() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27DB18))(this);
	}
	template <typename T = bool> T get_HasIronSightCrosshair() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27DB3C))(this);
	}
	template <typename T = bool> T IsBusy() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27DB60))(this);
	}
	template <typename T = void> T SetBusy(float busyTime) {
		return ((T (*)(WeaponBase*, float))(Il2CppBase() + 0x27DC44))(this, busyTime);
	}
	template <typename T = bool> T IsFiring() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27DD20))(this);
	}
	template <typename T = void> T SetFiring(float busyTime) {
		return ((T (*)(WeaponBase*, float))(Il2CppBase() + 0x27DE04))(this, busyTime);
	}
	template <typename T = float> T DamageByRangeRatio(float distance) {
		return ((T (*)(WeaponBase*, float))(Il2CppBase() + 0x27DEEC))(this, distance);
	}
	template <typename T = bool> static T IsProperHit(void* hit, void* zoneHit, bool checkAlsoDead) {
		return ((T (*)(void *, void*, void*, bool))(Il2CppBase() + 0x27E020))(0, hit, zoneHit, checkAlsoDead);
	}
	template <typename T = bool> T GetAimTarget(void* ray, void** hitData, void** hitOnlyWithAimAssistent) {
		return ((T (*)(WeaponBase*, void*, void**, void**))(Il2CppBase() + 0x27E2F0))(this, ray, hitData, hitOnlyWithAimAssistent);
	}
	template <typename T = Il2CppVector3> T ComputeAimAssistDir(void** targetFound, void** hitData) {
		return ((T (*)(WeaponBase*, void**, void**))(Il2CppBase() + 0x27E960))(this, targetFound, hitData);
	}
	template <typename T = void> T Initialize(void* id, void* upgrade, float ammoModificator) {
		return ((T (*)(WeaponBase*, void*, void*, float))(Il2CppBase() + 0x27EA98))(this, id, upgrade, ammoModificator);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27F170))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27F194))(this);
	}
	template <typename T = void> T WeaponShow(void* linkTo, bool relink) {
		return ((T (*)(WeaponBase*, void*, bool))(Il2CppBase() + 0x27F3B8))(this, linkTo, relink);
	}
	template <typename T = void> T WeaponHide(bool unlink) {
		return ((T (*)(WeaponBase*, bool))(Il2CppBase() + 0x27F470))(this, unlink);
	}
	template <typename T = void> T AddToOwner(void* owner) {
		return ((T (*)(WeaponBase*, void*))(Il2CppBase() + 0x27F52C))(this, owner);
	}
	template <typename T = void> T RemoveFromOwner() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27FB8C))(this);
	}
	template <typename T = bool> T FireStartupDone() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x2802DC))(this);
	}
	template <typename T = void> T Fire() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x27CBC0))(this);
	}
	template <typename T = void> T ReloadClip() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x2802E4))(this);
	}
	template <typename T = void> T Reload() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x2803F8))(this);
	}
	template <typename T = void> T WeaponArm() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x2804A4))(this);
	}
	template <typename T = void> T WeaponDisArm() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x280620))(this);
	}
	template <typename T = void> T DecreaseAmmo() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x28079C))(this);
	}
	template <typename T = void> T AddAmmo(int32_t ammo) {
		return ((T (*)(WeaponBase*, int32_t))(Il2CppBase() + 0x2807AC))(this, ammo);
	}
	template <typename T = void> T SetAmmo(int32_t ammoInClip, int32_t ammoInWeapon) {
		return ((T (*)(WeaponBase*, int32_t, int32_t))(Il2CppBase() + 0x280998))(this, ammoInClip, ammoInWeapon);
	}
	template <typename T = void*> T UpdateFireEffect() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x2809A4))(this);
	}
	template <typename T = Il2CppVector3> T ShotDirWithDispersion(Il2CppVector3 baseDir) {
		return ((T (*)(WeaponBase*, Il2CppVector3))(Il2CppBase() + 0x280A50))(this, baseDir);
	}
	template <typename T = void> T SpawnProjectile() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x280A9C))(this);
	}
	template <typename T = void> T PlaySoundFire() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x280C68))(this);
	}
	template <typename T = void> T ShowWeapon(bool show) {
		return ((T (*)(WeaponBase*, bool))(Il2CppBase() + 0x27F1E4))(this, show);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(WeaponBase*))(Il2CppBase() + 0x280D7C))(this);
	}
};
