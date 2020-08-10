#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReSpawnZone
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Child() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& m_SpawnPoints() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_RespawnDelay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_SpawnOrder() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_CurrentSpawnIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_GameZone() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_OnEvent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_IsActive() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ReSpawnZone*))(Il2CppBase() + 0x221110))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ReSpawnZone*))(Il2CppBase() + 0x2211CC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ReSpawnZone*))(Il2CppBase() + 0x2212E8))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(ReSpawnZone*))(Il2CppBase() + 0x22153C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ReSpawnZone*))(Il2CppBase() + 0x221640))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(ReSpawnZone*))(Il2CppBase() + 0x221670))(this);
	}
	template <typename T = void> T EventHandler(Il2CppString* name, void* state) {
		return ((T (*)(ReSpawnZone*, Il2CppString*, void*))(Il2CppBase() + 0x221690))(this, name, state);
	}
	template <typename T = void> T UpdateActivityState() {
		return ((T (*)(ReSpawnZone*))(Il2CppBase() + 0x221548))(this);
	}
	template <typename T = void*> T SpawnEnemy_Corutine() {
		return ((T (*)(ReSpawnZone*))(Il2CppBase() + 0x221738))(this);
	}
	template <typename T = void*> T Wait_Corutine() {
		return ((T (*)(ReSpawnZone*))(Il2CppBase() + 0x221694))(this);
	}
	template <typename T = void> T Spawn(void* spawnpoint) {
		return ((T (*)(ReSpawnZone*, void*))(Il2CppBase() + 0x2217EC))(this, spawnpoint);
	}
};
