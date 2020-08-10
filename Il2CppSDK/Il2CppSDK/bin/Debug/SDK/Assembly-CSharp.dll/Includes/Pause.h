#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Pause
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Pause*))(Il2CppBase() + 0x248E08))(this);
	}
	template <typename T = void> T Init(float time) {
		return ((T (*)(Pause*, float))(Il2CppBase() + 0x248E10))(this, time);
	}
	template <typename T = void> T Update(float deltaTime) {
		return ((T (*)(Pause*, float))(Il2CppBase() + 0x24931C))(this, deltaTime);
	}
	template <typename T = bool> T CanSpawnEnemy(int32_t CurrentlyLiveEnemies) {
		return ((T (*)(Pause*, int32_t))(Il2CppBase() + 0x249330))(this, CurrentlyLiveEnemies);
	}
	template <typename T = bool> T IsFinished() {
		return ((T (*)(Pause*))(Il2CppBase() + 0x249338))(this);
	}
	template <typename T = void> T EnemySpawned() {
		return ((T (*)(Pause*))(Il2CppBase() + 0x249350))(this);
	}
};
