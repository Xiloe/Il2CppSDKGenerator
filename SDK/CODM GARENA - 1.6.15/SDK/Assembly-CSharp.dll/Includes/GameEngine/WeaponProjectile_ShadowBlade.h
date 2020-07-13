#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponProjectileShadowBlade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponProjectile_ShadowBlade"));
	}

	template <typename T = bool> T& IsChangeStatus() {
		return *(T*)((uintptr_t)this + 0xE1);
	}
	template <typename T = float> static T& sRequestActorPoseTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& mRequestActorPoseTime() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& IsSendActorPose() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& IsPickUp() {
		return *(T*)((uintptr_t)this + 0xE9);
	}
	template <typename T = uintptr_t> T& m_ShadowBladeProjectileSimulator() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& IsPlaySound() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSimulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeProjParms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFlightSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFlightEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyProj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableOcclusionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDestoryWhenPawnDied() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNotCheckCloset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T CreateSimulator(uintptr_t data, Il2CppVector3 inInitLoc, Il2CppVector3 inInitVel, uintptr_t inHandler) {
		return ((T (*)(WeaponProjectileShadowBlade*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x243CC74))(this, data, inInitLoc, inInitVel, inHandler);
	}
	template <typename T = void> T InitializeProjParms(Il2CppVector3 InitLocation, Il2CppVector3 InitVelocity, uintptr_t data, int32_t weaponID, uint32_t skinID, uint32_t SpawnOwnerID, int32_t SpawnProjectileID) {
		return ((T (*)(WeaponProjectileShadowBlade*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x243CE08))(this, InitLocation, InitVelocity, data, weaponID, skinID, SpawnOwnerID, SpawnProjectileID);
	}
	template <typename T = void> T PlayFlightSound() {
		return ((T (*)(WeaponProjectileShadowBlade*))(Il2CppBase() + 0x243CF84))(this);
	}
	template <typename T = void> T PlayFlightEffect() {
		return ((T (*)(WeaponProjectileShadowBlade*))(Il2CppBase() + 0x243D114))(this);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(WeaponProjectileShadowBlade*, float))(Il2CppBase() + 0x243D240))(this, DeltaTime);
	}
	template <typename T = void> T DestroyProj() {
		return ((T (*)(WeaponProjectileShadowBlade*))(Il2CppBase() + 0x243D320))(this);
	}
	template <typename T = bool> T get_SupportOcclusion() {
		return ((T (*)(WeaponProjectileShadowBlade*))(Il2CppBase() + 0x243D470))(this);
	}
	template <typename T = void> T AddOcclusionEffect() {
		return ((T (*)(WeaponProjectileShadowBlade*))(Il2CppBase() + 0x243D478))(this);
	}
	template <typename T = void> T EnableOcclusionEffect() {
		return ((T (*)(WeaponProjectileShadowBlade*))(Il2CppBase() + 0x243D540))(this);
	}
	template <typename T = bool> T IsDestoryWhenPawnDied() {
		return ((T (*)(WeaponProjectileShadowBlade*))(Il2CppBase() + 0x243D608))(this);
	}
	template <typename T = bool> T IsNotCheckCloset() {
		return ((T (*)(WeaponProjectileShadowBlade*))(Il2CppBase() + 0x243D6D8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateSimulator(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, uintptr_t P3) {
		return ((T (*)(WeaponProjectileShadowBlade*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x243D82C))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeProjParms(Il2CppVector3 P0, Il2CppVector3 P1, uintptr_t P2, int32_t P3, uint32_t P4, uint32_t P5, int32_t P6) {
		return ((T (*)(WeaponProjectileShadowBlade*, Il2CppVector3, Il2CppVector3, uintptr_t, int32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x243D868))(this, P0, P1, P2, P3, P4, P5, P6);
	}
	template <typename T = void> T xLuaBaseProxy_PlayFlightEffect() {
		return ((T (*)(WeaponProjectileShadowBlade*))(Il2CppBase() + 0x243D8BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(WeaponProjectileShadowBlade*, float))(Il2CppBase() + 0x243D8C0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_DestroyProj() {
		return ((T (*)(WeaponProjectileShadowBlade*))(Il2CppBase() + 0x243D8C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_AddOcclusionEffect() {
		return ((T (*)(WeaponProjectileShadowBlade*))(Il2CppBase() + 0x243D8C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EnableOcclusionEffect() {
		return ((T (*)(WeaponProjectileShadowBlade*))(Il2CppBase() + 0x243D8CC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsDestoryWhenPawnDied() {
		return ((T (*)(WeaponProjectileShadowBlade*))(Il2CppBase() + 0x243D8D0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsNotCheckCloset() {
		return ((T (*)(WeaponProjectileShadowBlade*))(Il2CppBase() + 0x243D8D4))(this);
	}

};

}
