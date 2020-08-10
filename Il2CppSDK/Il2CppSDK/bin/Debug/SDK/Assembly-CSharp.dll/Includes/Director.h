#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Director
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T Init() {
		return ((T (*)(Director*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Update(float DeltaTime) {
		return ((T (*)(Director*, float))(Il2CppBase() + 0x0))(this, DeltaTime);
	}
	template <typename T = bool> T IsEnemySpawnAllowed() {
		return ((T (*)(Director*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnEnemySpawn(void* Enemy) {
		return ((T (*)(Director*, void*))(Il2CppBase() + 0x0))(this, Enemy);
	}
	template <typename T = void> T OnEnemyDeath(void* Enemy) {
		return ((T (*)(Director*, void*))(Il2CppBase() + 0x0))(this, Enemy);
	}
	template <typename T = void> T OnEnemyDespawn(void* Enemy) {
		return ((T (*)(Director*, void*))(Il2CppBase() + 0x0))(this, Enemy);
	}
	template <typename T = void> T OnEnemyInjured(void* Enemy, float Damage) {
		return ((T (*)(Director*, void*, float))(Il2CppBase() + 0x0))(this, Enemy, Damage);
	}
	template <typename T = void> T OnPlayerHealthChange(float Change) {
		return ((T (*)(Director*, float))(Il2CppBase() + 0x0))(this, Change);
	}
	template <typename T = void*> T GetSpawnPointSelection() {
		return ((T (*)(Director*))(Il2CppBase() + 0x0))(this);
	}
};
