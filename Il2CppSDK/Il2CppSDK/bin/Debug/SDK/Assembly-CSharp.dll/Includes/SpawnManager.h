#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79768);
	}
	// Fields
	template <typename T = void*> T& m_Director() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_EnemyLimit() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<void*>*> T& m_SpawnZones() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& m_SpawnPoints() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_EnemyQueue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<void*>*> T& m_EnemyData() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_CounterAlive() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_CounterDead() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_CounterSpawned() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_PlanningIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_VisLayerMask() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_Enabled() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_SpawnFailTimer() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_WasSpawnAllowed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& OnEnemySpawn() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& OnEnemyInjured() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& OnEnemyDead() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& OnEnemyDespawn() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SpawnManager*))(Il2CppBase() + 0x2493FC))(this);
	}
	template <typename T = void> T add_OnEnemySpawn(void* value) {
		return ((T (*)(SpawnManager*, void*))(Il2CppBase() + 0x24951C))(this, value);
	}
	template <typename T = void> T remove_OnEnemySpawn(void* value) {
		return ((T (*)(SpawnManager*, void*))(Il2CppBase() + 0x2496A8))(this, value);
	}
	template <typename T = void> T add_OnEnemyInjured(void* value) {
		return ((T (*)(SpawnManager*, void*))(Il2CppBase() + 0x249834))(this, value);
	}
	template <typename T = void> T remove_OnEnemyInjured(void* value) {
		return ((T (*)(SpawnManager*, void*))(Il2CppBase() + 0x2499C0))(this, value);
	}
	template <typename T = void> T add_OnEnemyDead(void* value) {
		return ((T (*)(SpawnManager*, void*))(Il2CppBase() + 0x249B4C))(this, value);
	}
	template <typename T = void> T remove_OnEnemyDead(void* value) {
		return ((T (*)(SpawnManager*, void*))(Il2CppBase() + 0x249CD8))(this, value);
	}
	template <typename T = void> T add_OnEnemyDespawn(void* value) {
		return ((T (*)(SpawnManager*, void*))(Il2CppBase() + 0x249E64))(this, value);
	}
	template <typename T = void> T remove_OnEnemyDespawn(void* value) {
		return ((T (*)(SpawnManager*, void*))(Il2CppBase() + 0x249FF0))(this, value);
	}
	template <typename T = void*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x24A17C))(0);
	}
	template <typename T = void> static T set_Instance(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x24A1FC))(0, value);
	}
	template <typename T = int32_t> T get_EnemiesNum() {
		return ((T (*)(SpawnManager*))(Il2CppBase() + 0x24A280))(this);
	}
	template <typename T = void> static T CreateInstance(void* Data) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x24A288))(0, Data);
	}
	template <typename T = void> static T DestroyInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x24AA70))(0);
	}
	template <typename T = void> T Init(void* Data) {
		return ((T (*)(SpawnManager*, void*))(Il2CppBase() + 0x24A43C))(this, Data);
	}
	template <typename T = void> T Done() {
		return ((T (*)(SpawnManager*))(Il2CppBase() + 0x24AB64))(this);
	}
	template <typename T = void> T SetSpawnProbability(Il2CppList<void*>* Probs) {
		return ((T (*)(SpawnManager*, Il2CppList<void*>*))(Il2CppBase() + 0x24AC3C))(this, Probs);
	}
	template <typename T = void> T StartSpawning(void* Data) {
		return ((T (*)(SpawnManager*, void*))(Il2CppBase() + 0x24B52C))(this, Data);
	}
	template <typename T = void> T StopSpawning() {
		return ((T (*)(SpawnManager*))(Il2CppBase() + 0x24C6B0))(this);
	}
	template <typename T = void> T Update(float DeltaTime) {
		return ((T (*)(SpawnManager*, float))(Il2CppBase() + 0x24C750))(this, DeltaTime);
	}
	template <typename T = void> T ScheduleNextEnemies() {
		return ((T (*)(SpawnManager*))(Il2CppBase() + 0x24CBE8))(this);
	}
	template <typename T = bool> T SpawnEnemy(void* Type, void* Location) {
		return ((T (*)(SpawnManager*, void*, void*))(Il2CppBase() + 0x24CD34))(this, Type, Location);
	}
	template <typename T = bool> T SpawnEnemy_1() {
		return ((T (*)(SpawnManager*))(Il2CppBase() + 0x24C9DC))(this);
	}
	template <typename T = bool> T SpawnEnemy_2(void* Data, void* Location) {
		return ((T (*)(SpawnManager*, void*, void*))(Il2CppBase() + 0x24CDC4))(this, Data, Location);
	}
	template <typename T = bool> T CanBeUsed(void* Rec, void* EnemyType) {
		return ((T (*)(SpawnManager*, void*, void*))(Il2CppBase() + 0x24D214))(this, Rec, EnemyType);
	}
	template <typename T = void*> T SelectSpawnPoint(void* EnemyType) {
		return ((T (*)(SpawnManager*, void*))(Il2CppBase() + 0x24CF74))(this, EnemyType);
	}
	template <typename T = void> static T EvaluateRandom(Il2CppList<void*>* spawnPoints) {
		return ((T (*)(void *, Il2CppList<void*>*))(Il2CppBase() + 0x24D8F0))(0, spawnPoints);
	}
	template <typename T = void> static T EvaluateLRU(Il2CppList<void*>* spawnPoints) {
		return ((T (*)(void *, Il2CppList<void*>*))(Il2CppBase() + 0x24D70C))(0, spawnPoints);
	}
	template <typename T = void> static T EvaluateZoneLRU(Il2CppList<void*>* spawnPoints) {
		return ((T (*)(void *, Il2CppList<void*>*))(Il2CppBase() + 0x24D7F4))(0, spawnPoints);
	}
	template <typename T = void> static T EvaluateClosest(Il2CppList<void*>* spawnPoints, Il2CppVector3 pos) {
		return ((T (*)(void *, Il2CppList<void*>*, Il2CppVector3))(Il2CppBase() + 0x24D5B4))(0, spawnPoints, pos);
	}
	template <typename T = void> T EnemyInjured(void* Enemy, float Damage) {
		return ((T (*)(SpawnManager*, void*, float))(Il2CppBase() + 0x24D9E8))(this, Enemy, Damage);
	}
	template <typename T = void> T EnemyDied(void* Enemy) {
		return ((T (*)(SpawnManager*, void*))(Il2CppBase() + 0x24DA88))(this, Enemy);
	}
	template <typename T = void> T EnemyDespawned(void* Enemy) {
		return ((T (*)(SpawnManager*, void*))(Il2CppBase() + 0x24DB34))(this, Enemy);
	}
	template <typename T = void> T PlayerActivated(void* Agent) {
		return ((T (*)(SpawnManager*, void*))(Il2CppBase() + 0x24DBD4))(this, Agent);
	}
	template <typename T = void> T PlayerDeactivated(void* Agent) {
		return ((T (*)(SpawnManager*, void*))(Il2CppBase() + 0x24DCBC))(this, Agent);
	}
	template <typename T = void> T PlayerHealthChanged(void* Agent, float HealthChange) {
		return ((T (*)(SpawnManager*, void*, float))(Il2CppBase() + 0x24DDA4))(this, Agent, HealthChange);
	}
	template <typename T = void> T RegisterSpawnZone(void* Zone) {
		return ((T (*)(SpawnManager*, void*))(Il2CppBase() + 0x24DEAC))(this, Zone);
	}
	template <typename T = void> T OnSpawnZoneStateChange(void* Zone) {
		return ((T (*)(SpawnManager*, void*))(Il2CppBase() + 0x24E3F8))(this, Zone);
	}
	template <typename T = void*> T GetSpawnZoneRec(void* Zone) {
		return ((T (*)(SpawnManager*, void*))(Il2CppBase() + 0x24E078))(this, Zone);
	}
	template <typename T = int32_t> static T CompareSpawnProb(void* A, void* B) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x24E808))(0, A, B);
	}
};
