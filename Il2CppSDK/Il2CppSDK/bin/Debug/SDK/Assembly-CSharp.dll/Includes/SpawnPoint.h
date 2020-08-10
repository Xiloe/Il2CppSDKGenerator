#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnPoint
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_NESController() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Transform() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& RespawnTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SpawnPoint*))(Il2CppBase() + 0x24E92C))(this);
	}
	template <typename T = void*> T get_Transform() {
		return ((T (*)(SpawnPoint*))(Il2CppBase() + 0x24D5AC))(this);
	}
	template <typename T = void> T set_Transform(void* value) {
		return ((T (*)(SpawnPoint*, void*))(Il2CppBase() + 0x24E934))(this, value);
	}
	template <typename T = float> T get_RespawnTime() {
		return ((T (*)(SpawnPoint*))(Il2CppBase() + 0x24D5A4))(this);
	}
	template <typename T = void> T set_RespawnTime(float value) {
		return ((T (*)(SpawnPoint*, float))(Il2CppBase() + 0x24E93C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SpawnPoint*))(Il2CppBase() + 0x24E944))(this);
	}
	template <typename T = void> T OnSpawn() {
		return ((T (*)(SpawnPoint*))(Il2CppBase() + 0x24EA60))(this);
	}
	template <typename T = void> static T DrawOrientedLine(Il2CppColor Col, Il2CppVector3 From, Il2CppVector3 To) {
		return ((T (*)(void *, Il2CppColor, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x24EB1C))(0, Col, From, To);
	}
	template <typename T = void> T DrawSpawnPoint(Il2CppColor Col) {
		return ((T (*)(SpawnPoint*, Il2CppColor))(Il2CppBase() + 0x24EEAC))(this, Col);
	}
	template <typename T = void> T SnapToGround() {
		return ((T (*)(SpawnPoint*))(Il2CppBase() + 0x24F08C))(this);
	}
};
