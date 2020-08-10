#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ComponentEnemy
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78CA0);
	}
	// Fields
	template <typename T = bool> T& CanDoContest() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& SoundSetup() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<void*>*> T& ContestRhythm() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> static T& DontSpeakTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& AttackSoundPlaying() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& ContestHit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& LimbMgr() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& Owner() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ComponentEnemy*))(Il2CppBase() + 0x2D8194))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D83C0))(0);
	}
	template <typename T = void*> T get_Owner() {
		return ((T (*)(ComponentEnemy*))(Il2CppBase() + 0x2D83C4))(this);
	}
	template <typename T = void> T set_Owner(void* value) {
		return ((T (*)(ComponentEnemy*, void*))(Il2CppBase() + 0x2D83CC))(this, value);
	}
	template <typename T = void*> T get_SeeEnemy() {
		return ((T (*)(ComponentEnemy*))(Il2CppBase() + 0x2D83D4))(this);
	}
	template <typename T = void*> T get_IdleSound() {
		return ((T (*)(ComponentEnemy*))(Il2CppBase() + 0x2D8440))(this);
	}
	template <typename T = void*> T get_AttackSound() {
		return ((T (*)(ComponentEnemy*))(Il2CppBase() + 0x2D84AC))(this);
	}
	template <typename T = void*> T get_SpitSound() {
		return ((T (*)(ComponentEnemy*))(Il2CppBase() + 0x2D8518))(this);
	}
	template <typename T = void*> T get_ContestStartSound() {
		return ((T (*)(ComponentEnemy*))(Il2CppBase() + 0x2D8584))(this);
	}
	template <typename T = void*> T get_ContestWonSound() {
		return ((T (*)(ComponentEnemy*))(Il2CppBase() + 0x2D85A8))(this);
	}
	template <typename T = void*> T get_ContestLostSound() {
		return ((T (*)(ComponentEnemy*))(Il2CppBase() + 0x2D85CC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ComponentEnemy*))(Il2CppBase() + 0x2D85F0))(this);
	}
	template <typename T = void> T InitContestButtons() {
		return ((T (*)(ComponentEnemy*))(Il2CppBase() + 0x2D86A4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ComponentEnemy*))(Il2CppBase() + 0x2D8890))(this);
	}
	template <typename T = void> T Activate(void* spawn) {
		return ((T (*)(ComponentEnemy*, void*))(Il2CppBase() + 0x2D8AA0))(this, spawn);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(ComponentEnemy*))(Il2CppBase() + 0x2D8CCC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ComponentEnemy*))(Il2CppBase() + 0x2D8D10))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(ComponentEnemy*))(Il2CppBase() + 0x2D8D68))(this);
	}
	template <typename T = void> T HandleAction(void* a) {
		return ((T (*)(ComponentEnemy*, void*))(Il2CppBase() + 0x2D9474))(this, a);
	}
	template <typename T = void> T RemoveHead(bool willDie) {
		return ((T (*)(ComponentEnemy*, bool))(Il2CppBase() + 0x2D9750))(this, willDie);
	}
	template <typename T = void> T UpdateDecapitatedLimbs() {
		return ((T (*)(ComponentEnemy*))(Il2CppBase() + 0x2D9448))(this);
	}
	template <typename T = bool> T IsLimbDecapitated(void* limbID) {
		return ((T (*)(ComponentEnemy*, void*))(Il2CppBase() + 0x2D9784))(this, limbID);
	}
	template <typename T = int32_t> T GetNumDecapitatedLimbs() {
		return ((T (*)(ComponentEnemy*))(Il2CppBase() + 0x2D97CC))(this);
	}
	template <typename T = void*> T GetBodyPart(void* zone) {
		return ((T (*)(ComponentEnemy*, void*))(Il2CppBase() + 0x2D97F8))(this, zone);
	}
	template <typename T = bool> T BodyPartDestroyed(void* zoneEffect, float damage, bool willDie, bool blades) {
		return ((T (*)(ComponentEnemy*, void*, float, bool, bool))(Il2CppBase() + 0x2D9B88))(this, zoneEffect, damage, willDie, blades);
	}
	template <typename T = void> T OnHitZoneProjectileHit(void* zone, void* projectile) {
		return ((T (*)(ComponentEnemy*, void*, void*))(Il2CppBase() + 0x2D9D3C))(this, zone, projectile);
	}
	template <typename T = void> T OnHitZoneRangeDamage(void* Zone, void* Attacker, float Damage, Il2CppVector3 Impulse, void* weaponID, void* WeaponType) {
		return ((T (*)(ComponentEnemy*, void*, void*, float, Il2CppVector3, void*, void*))(Il2CppBase() + 0x2DA198))(this, Zone, Attacker, Damage, Impulse, weaponID, WeaponType);
	}
	template <typename T = void> T OnHitZoneMeleeDamage(void* zone, void* Data) {
		return ((T (*)(ComponentEnemy*, void*, void*))(Il2CppBase() + 0x2DA270))(this, zone, Data);
	}
	template <typename T = float> T PlayAttackSound(void* type) {
		return ((T (*)(ComponentEnemy*, void*))(Il2CppBase() + 0x2DA5B8))(this, type);
	}
	template <typename T = void> T UpdateSpeech() {
		return ((T (*)(ComponentEnemy*))(Il2CppBase() + 0x2D8DB4))(this);
	}
	template <typename T = void> T UpdateCombatSetting() {
		return ((T (*)(ComponentEnemy*))(Il2CppBase() + 0x2DA75C))(this);
	}
};
