#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnemyConfigZombieSlow1
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EnemyConfigZombieSlow1*))(Il2CppBase() + 0x30F1F4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EnemyConfigZombieSlow1*))(Il2CppBase() + 0x30F1FC))(this);
	}
	template <typename T = void> T SetProps() {
		return ((T (*)(EnemyConfigZombieSlow1*))(Il2CppBase() + 0x30F2C8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EnemyConfigZombieSlow1*))(Il2CppBase() + 0x30F314))(this);
	}
	template <typename T = void> T Activate(void* spawn) {
		return ((T (*)(EnemyConfigZombieSlow1*, void*))(Il2CppBase() + 0x30F694))(this, spawn);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(EnemyConfigZombieSlow1*))(Il2CppBase() + 0x30F698))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(EnemyConfigZombieSlow1*))(Il2CppBase() + 0x30F69C))(this);
	}
	template <typename T = void> T HandleAction(void* a) {
		return ((T (*)(EnemyConfigZombieSlow1*, void*))(Il2CppBase() + 0x30F6A0))(this, a);
	}
};
