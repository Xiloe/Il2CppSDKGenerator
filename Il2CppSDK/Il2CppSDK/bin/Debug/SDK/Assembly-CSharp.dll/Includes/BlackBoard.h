#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BlackBoard
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78750);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& m_ActiveActions() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& Owner() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsPlayer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& WeaponRange() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& ContestRange() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& VomitRangeMin() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& VomitRangeMax() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& CombatRange() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& CrawlTimePlayerRange() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& BaitRange() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& DestructibleObjectRange() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& GoapSetup() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& BaseSetup() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& CombatSetup() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& DamageSetup() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& CoverSetup() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& AttackSetup() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& StepsSetup() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& Desires() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& AiRecon() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& KeepMotion() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> T& MotionType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& PrevMotionType() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> T& MovementSkill() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = void*> T& MoveType() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppVector3> T& MoveDir() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& AngleForward() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& AngleRight() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& FireDir() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppVector3> T& Velocity() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& VelocityPrevious() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& Alarmed() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& SightRange() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& SightFov() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& Health() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& Rage() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& Fear() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& Dodge() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = void*> T& InteractionObject() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = void*> T& DangerousEnemy() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = void*> T& VisibleTarget() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& DistanceToTarget() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppVector3> T& DirToTarget() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& DontUpdate() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& ReactOnHits() {
		return *(T*)((uintptr_t)this + 0xE5);
	}
	template <typename T = bool> T& BusyAction() {
		return *(T*)((uintptr_t)this + 0xE6);
	}
	template <typename T = bool> T& Invulnerable() {
		return *(T*)((uintptr_t)this + 0xE7);
	}
	template <typename T = float> T& IdleTimer() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& DontDeathAnimMove() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& GrenadesExplodeOnHit() {
		return *(T*)((uintptr_t)this + 0xED);
	}
	template <typename T = bool> T& AutoHeal() {
		return *(T*)((uintptr_t)this + 0xEE);
	}
	template <typename T = bool> T& ActionPointOn() {
		return *(T*)((uintptr_t)this + 0xEF);
	}
	template <typename T = void*> T& BaitPhase() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& ContestBalance() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& ContestAllowNextTime() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& CrawlTime() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& PlayInjuryTime() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& NextPlayInjuryTime() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& NextVomitTime() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& AimAnimationsEnabled() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = void*> T& SpawnPointEnemy() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = void*> T& ActionHandler() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = void*> T& ImportantObject() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& Stop() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(BlackBoard*))(Il2CppBase() + 0x1DAE10))(this);
	}
	template <typename T = float> T get_sqrWeaponRange() {
		return ((T (*)(BlackBoard*))(Il2CppBase() + 0x1DB590))(this);
	}
	template <typename T = float> T get_sqrContestRange() {
		return ((T (*)(BlackBoard*))(Il2CppBase() + 0x1DB5A0))(this);
	}
	template <typename T = float> T get_sqrVomitRangeMin() {
		return ((T (*)(BlackBoard*))(Il2CppBase() + 0x1DB5B0))(this);
	}
	template <typename T = float> T get_sqrVomitRangeMax() {
		return ((T (*)(BlackBoard*))(Il2CppBase() + 0x1DB5C0))(this);
	}
	template <typename T = float> T get_sqrCombatRange() {
		return ((T (*)(BlackBoard*))(Il2CppBase() + 0x1DB5D0))(this);
	}
	template <typename T = void*> T get_ImportantObject() {
		return ((T (*)(BlackBoard*))(Il2CppBase() + 0x1DB5E0))(this);
	}
	template <typename T = void> T set_ImportantObject(void* value) {
		return ((T (*)(BlackBoard*, void*))(Il2CppBase() + 0x1DB5E8))(this, value);
	}
	template <typename T = bool> T get_Stop() {
		return ((T (*)(BlackBoard*))(Il2CppBase() + 0x1DB5F0))(this);
	}
	template <typename T = void> T set_Stop(bool value) {
		return ((T (*)(BlackBoard*, bool))(Il2CppBase() + 0x1DB5F8))(this, value);
	}
	template <typename T = float> T get_RealMaxHealth() {
		return ((T (*)(BlackBoard*))(Il2CppBase() + 0x1DB600))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BlackBoard*))(Il2CppBase() + 0x1DB624))(this);
	}
	template <typename T = void> T ActionAdd(void* action) {
		return ((T (*)(BlackBoard*, void*))(Il2CppBase() + 0x1DBA84))(this, action);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BlackBoard*))(Il2CppBase() + 0x1DBBE8))(this);
	}
	template <typename T = void> T PostUpdate() {
		return ((T (*)(BlackBoard*))(Il2CppBase() + 0x1DBE7C))(this);
	}
	template <typename T = void> T ActionDone(void* action) {
		return ((T (*)(BlackBoard*, void*))(Il2CppBase() + 0x1DB9DC))(this, action);
	}
	template <typename T = void> T SetFear(float value) {
		return ((T (*)(BlackBoard*, float))(Il2CppBase() + 0x1DBFE0))(this, value);
	}
	template <typename T = void> T SetRage(float value) {
		return ((T (*)(BlackBoard*, float))(Il2CppBase() + 0x1DC034))(this, value);
	}
	template <typename T = void> T SetDodge(float value) {
		return ((T (*)(BlackBoard*, float))(Il2CppBase() + 0x1DC088))(this, value);
	}
	template <typename T = void> T UpdateCombatSetting(void* a) {
		return ((T (*)(BlackBoard*, void*))(Il2CppBase() + 0x1DC0DC))(this, a);
	}
	template <typename T = void> T UpdateCombatSetting_1(void* fact) {
		return ((T (*)(BlackBoard*, void*))(Il2CppBase() + 0x1DC2B4))(this, fact);
	}
	template <typename T = void> T SetImportantObject(void* newObject) {
		return ((T (*)(BlackBoard*, void*))(Il2CppBase() + 0x1DC528))(this, newObject);
	}
};
