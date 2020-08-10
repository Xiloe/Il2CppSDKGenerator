#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnZoneBase
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& ShowFirstTimeEnemy() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& FirstEnemyShow() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<void*>*> T& SpawnPoints() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& SendEventWhenNumberOfEnemiesLeft() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<void*>*> T& GameEventsToSend() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<void*>*> T& GameEventsToSendWhenDone() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<void*>*> T& EnemiesAlive() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& SendEvents() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& SendEventsWhenDone() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = void*> T& MyGameZone() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& State() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SpawnZoneBase*))(Il2CppBase() + 0x253E38))(this);
	}
	template <typename T = bool> T IsActive() {
		return ((T (*)(SpawnZoneBase*))(Il2CppBase() + 0x254558))(this);
	}
	template <typename T = void*> T GetEnemy(int32_t index) {
		return ((T (*)(SpawnZoneBase*, int32_t))(Il2CppBase() + 0x254600))(this, index);
	}
	template <typename T = int32_t> T GetEnemyCount() {
		return ((T (*)(SpawnZoneBase*))(Il2CppBase() + 0x2546A0))(this);
	}
	template <typename T = void*> T get_State() {
		return ((T (*)(SpawnZoneBase*))(Il2CppBase() + 0x254738))(this);
	}
	template <typename T = void> T set_State(void* value) {
		return ((T (*)(SpawnZoneBase*, void*))(Il2CppBase() + 0x254740))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SpawnZoneBase*))(Il2CppBase() + 0x254748))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(SpawnZoneBase*))(Il2CppBase() + 0x254114))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(SpawnZoneBase*))(Il2CppBase() + 0x2543D8))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(SpawnZoneBase*))(Il2CppBase() + 0x254820))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(SpawnZoneBase*))(Il2CppBase() + 0x254DA8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SpawnZoneBase*))(Il2CppBase() + 0x2544A4))(this);
	}
	template <typename T = void> T StartSpawn() {
		return ((T (*)(SpawnZoneBase*))(Il2CppBase() + 0x25543C))(this);
	}
	template <typename T = void*> T SpawnEnemiesEx() {
		return ((T (*)(SpawnZoneBase*))(Il2CppBase() + 0x25547C))(this);
	}
	template <typename T = void*> T SpawnEnemies() {
		return ((T (*)(SpawnZoneBase*))(Il2CppBase() + 0x255520))(this);
	}
	template <typename T = void> T SpawnEnemy(void* spawnpoint) {
		return ((T (*)(SpawnZoneBase*, void*))(Il2CppBase() + 0x2555D4))(this, spawnpoint);
	}
	template <typename T = void*> T GetAvailableSpawnPoint(Il2CppArray<void*>* spawnPoints) {
		return ((T (*)(SpawnZoneBase*, Il2CppArray<void*>*))(Il2CppBase() + 0x2555D8))(this, spawnPoints);
	}
};
