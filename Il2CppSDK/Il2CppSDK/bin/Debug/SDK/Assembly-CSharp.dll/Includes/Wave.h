#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Wave
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& m_WaveSize() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_MinDelayBetweenSpawns() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_MaxDelayBetweenSpawns() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_LiveEnemiesLimit() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_SpawnedEnemies() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_BetweenSpawnsTimer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Wave*))(Il2CppBase() + 0x248E18))(this);
	}
	template <typename T = void> T Init(int32_t waveSize, int32_t liveEnemiesLimit, float minDelayBetweenSpawns, float maxDelayBetweenSpawns) {
		return ((T (*)(Wave*, int32_t, int32_t, float, float))(Il2CppBase() + 0x248E20))(this, waveSize, liveEnemiesLimit, minDelayBetweenSpawns, maxDelayBetweenSpawns);
	}
	template <typename T = void> T Update(float deltaTime) {
		return ((T (*)(Wave*, float))(Il2CppBase() + 0x249354))(this, deltaTime);
	}
	template <typename T = bool> T CanSpawnEnemy(int32_t CurrentlyLiveEnemies) {
		return ((T (*)(Wave*, int32_t))(Il2CppBase() + 0x249370))(this, CurrentlyLiveEnemies);
	}
	template <typename T = void> T EnemySpawned() {
		return ((T (*)(Wave*))(Il2CppBase() + 0x2493CC))(this);
	}
	template <typename T = bool> T IsFinished() {
		return ((T (*)(Wave*))(Il2CppBase() + 0x2493DC))(this);
	}
};
