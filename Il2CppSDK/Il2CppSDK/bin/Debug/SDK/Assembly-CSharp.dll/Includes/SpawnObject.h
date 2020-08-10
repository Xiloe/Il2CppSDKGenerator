#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnObject
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T Update(float deltaTime) {
		return ((T (*)(SpawnObject*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename T = bool> T CanSpawnEnemy(int32_t CurrentlyLiveEnemies) {
		return ((T (*)(SpawnObject*, int32_t))(Il2CppBase() + 0x0))(this, CurrentlyLiveEnemies);
	}
	template <typename T = bool> T IsFinished() {
		return ((T (*)(SpawnObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T EnemySpawned() {
		return ((T (*)(SpawnObject*))(Il2CppBase() + 0x0))(this);
	}
};
