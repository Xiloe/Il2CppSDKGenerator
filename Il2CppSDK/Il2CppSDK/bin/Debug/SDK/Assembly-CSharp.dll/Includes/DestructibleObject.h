#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestructibleObject
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78878);
	}
	// Fields
	template <typename T = void*> T& m_GameObj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_IsImportantObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<void*>*> T& m_Versions() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_SoundSetup() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<void*>*> T& m_AttackAnims() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_CurrVersion() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_CurrVersionHP() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_TotalHP() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_RemainingHP() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_LifeBar() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_IgnoreDamage() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_DmgMultiplier() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& m_TotalHits() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_Audio() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<void*>*> T& m_Gfx() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& m_NESController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<void*>*> T& RegisteredAgents() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<void*>*> T& AttackPoints() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<void*>*> static T& TempList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DestructibleObject*))(Il2CppBase() + 0x30131C))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3014F4))(0);
	}
	template <typename T = float> T get_HealthCoef() {
		return ((T (*)(DestructibleObject*))(Il2CppBase() + 0x3015A4))(this);
	}
	template <typename T = void> T set_HealthCoef(float value) {
		return ((T (*)(DestructibleObject*, float))(Il2CppBase() + 0x3015B8))(this, value);
	}
	template <typename T = bool> T get_IsAlive() {
		return ((T (*)(DestructibleObject*))(Il2CppBase() + 0x301808))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DestructibleObject*))(Il2CppBase() + 0x301848))(this);
	}
	template <typename T = void> T Init(void* Data) {
		return ((T (*)(DestructibleObject*, void*))(Il2CppBase() + 0x302170))(this, Data);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DestructibleObject*))(Il2CppBase() + 0x3025D4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(DestructibleObject*))(Il2CppBase() + 0x3026CC))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(DestructibleObject*))(Il2CppBase() + 0x3025D8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DestructibleObject*))(Il2CppBase() + 0x3027C0))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(DestructibleObject*))(Il2CppBase() + 0x302CBC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DestructibleObject*))(Il2CppBase() + 0x302DB0))(this);
	}
	template <typename T = bool> T IsActivatedWithGameZone() {
		return ((T (*)(DestructibleObject*))(Il2CppBase() + 0x303350))(this);
	}
	template <typename T = void*> T GetImportantObjectType() {
		return ((T (*)(DestructibleObject*))(Il2CppBase() + 0x303358))(this);
	}
	template <typename T = void*> T GetGameObject() {
		return ((T (*)(DestructibleObject*))(Il2CppBase() + 0x301840))(this);
	}
	template <typename T = void> T OnHitZoneProjectileHit(void* Zone, void* Proj) {
		return ((T (*)(DestructibleObject*, void*, void*))(Il2CppBase() + 0x303360))(this, Zone, Proj);
	}
	template <typename T = void> T OnHitZoneRangeDamage(void* Zone, void* Attacker, float Damage, Il2CppVector3 Impulse, void* weaponID, void* WeaponType) {
		return ((T (*)(DestructibleObject*, void*, void*, float, Il2CppVector3, void*, void*))(Il2CppBase() + 0x30386C))(this, Zone, Attacker, Damage, Impulse, weaponID, WeaponType);
	}
	template <typename T = void> T OnHitZoneMeleeDamage(void* Zone, void* Data) {
		return ((T (*)(DestructibleObject*, void*, void*))(Il2CppBase() + 0x303950))(this, Zone, Data);
	}
	template <typename T = void> T TakeDamage(void* attacker, float damage) {
		return ((T (*)(DestructibleObject*, void*, float))(Il2CppBase() + 0x303A34))(this, attacker, damage);
	}
	template <typename T = void> T OnDamage(void* Instigator, float Damage, bool ShouldIgnore) {
		return ((T (*)(DestructibleObject*, void*, float, bool))(Il2CppBase() + 0x303494))(this, Instigator, Damage, ShouldIgnore);
	}
	template <typename T = void> T OnDestruction(void* Instigator, void* V) {
		return ((T (*)(DestructibleObject*, void*, void*))(Il2CppBase() + 0x303B00))(this, Instigator, V);
	}
	template <typename T = void> T SetState(float Coef) {
		return ((T (*)(DestructibleObject*, float))(Il2CppBase() + 0x3015BC))(this, Coef);
	}
	template <typename T = void*> T FindAttackPoint(void* agent) {
		return ((T (*)(DestructibleObject*, void*))(Il2CppBase() + 0x304154))(this, agent);
	}
	template <typename T = void*> T FindAttackPoint_1(Il2CppVector3 pos) {
		return ((T (*)(DestructibleObject*, Il2CppVector3))(Il2CppBase() + 0x3043B4))(this, pos);
	}
	template <typename T = void*> T GetAttackPoint(void* agent) {
		return ((T (*)(DestructibleObject*, void*))(Il2CppBase() + 0x304778))(this, agent);
	}
	template <typename T = void> T RegisterAgent(void* agent) {
		return ((T (*)(DestructibleObject*, void*))(Il2CppBase() + 0x3049EC))(this, agent);
	}
	template <typename T = void> T UnregisterAgent(void* agent) {
		return ((T (*)(DestructibleObject*, void*))(Il2CppBase() + 0x304BAC))(this, agent);
	}
	template <typename T = void> T UnregisterAllAgents() {
		return ((T (*)(DestructibleObject*))(Il2CppBase() + 0x302A64))(this);
	}
	template <typename T = bool> T IsAgentRegistered(void* agent) {
		return ((T (*)(DestructibleObject*, void*))(Il2CppBase() + 0x304B0C))(this, agent);
	}
	template <typename T = int32_t> T GetRegisteredAgentsCount() {
		return ((T (*)(DestructibleObject*))(Il2CppBase() + 0x304C88))(this);
	}
	template <typename T = void> T UpdateRegisteredAgents() {
		return ((T (*)(DestructibleObject*))(Il2CppBase() + 0x302FE4))(this);
	}
};
