#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnDirector
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD788BC);
	}
	// Fields
	template <typename T = int32_t> T& m_NumberOfWaves() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_EnemiesAliveCounter() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_TimeWithoutLowIntensityOrPause() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_CombatIntesity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_OptimalCombatIntensity() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_SelectionMethod() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_SpawnObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<float>*> T& m_CombatHistory() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_CombatHistoryMaxValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> static T& UpdateTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& lastInjury() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SpawnDirector*))(Il2CppBase() + 0x2479D4))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x247AA0))(0);
	}
	template <typename T = void> T SetIntensity(void* gameplayIntensity) {
		return ((T (*)(SpawnDirector*, void*))(Il2CppBase() + 0x247AA4))(this, gameplayIntensity);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SpawnDirector*))(Il2CppBase() + 0x247C18))(this);
	}
	template <typename T = void> T UpdateCombatIntensity() {
		return ((T (*)(SpawnDirector*))(Il2CppBase() + 0x247CCC))(this);
	}
	template <typename T = void> T Update(float deltaTime) {
		return ((T (*)(SpawnDirector*, float))(Il2CppBase() + 0x2480A4))(this, deltaTime);
	}
	template <typename T = int32_t> T GetMaxLiveEnemiesBasedOnRank(void* intensity) {
		return ((T (*)(SpawnDirector*, void*))(Il2CppBase() + 0x248664))(this, intensity);
	}
	template <typename T = float> static T MinTimeBetweenSpawnsBasedOnRank() {
		return ((T (*)(void *))(Il2CppBase() + 0x24886C))(0);
	}
	template <typename T = float> static T MaxTimeBetweenSpawnsBasedOnRank() {
		return ((T (*)(void *))(Il2CppBase() + 0x248A0C))(0);
	}
	template <typename T = void*> T ComputeNextSpawnIntesity(float intensityFast, float intensitySlow) {
		return ((T (*)(SpawnDirector*, float, float))(Il2CppBase() + 0x248BB4))(this, intensityFast, intensitySlow);
	}
	template <typename T = void> T ConstructNextWave() {
		return ((T (*)(SpawnDirector*))(Il2CppBase() + 0x24838C))(this);
	}
	template <typename T = bool> T IsEnemySpawnAllowed() {
		return ((T (*)(SpawnDirector*))(Il2CppBase() + 0x248E40))(this);
	}
	template <typename T = void> T OnEnemySpawn(void* Enemy) {
		return ((T (*)(SpawnDirector*, void*))(Il2CppBase() + 0x248F44))(this, Enemy);
	}
	template <typename T = void> T OnEnemyInjured(void* Enemy, float damage) {
		return ((T (*)(SpawnDirector*, void*, float))(Il2CppBase() + 0x24904C))(this, Enemy, damage);
	}
	template <typename T = void> T OnEnemyDeath(void* Enemy) {
		return ((T (*)(SpawnDirector*, void*))(Il2CppBase() + 0x249198))(this, Enemy);
	}
	template <typename T = void> T OnEnemyDespawn(void* Enemy) {
		return ((T (*)(SpawnDirector*, void*))(Il2CppBase() + 0x2491BC))(this, Enemy);
	}
	template <typename T = void> T OnPlayerHealthChange(float Change) {
		return ((T (*)(SpawnDirector*, float))(Il2CppBase() + 0x2491C0))(this, Change);
	}
	template <typename T = void*> T GetSpawnPointSelection() {
		return ((T (*)(SpawnDirector*))(Il2CppBase() + 0x249314))(this);
	}
	template <typename T = float> T CalculateMAIntensity(int32_t maxValues) {
		return ((T (*)(SpawnDirector*, int32_t))(Il2CppBase() + 0x248CE4))(this, maxValues);
	}
};
