#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnemyConfigZombieAthlete
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EnemyConfigZombieAthlete*))(Il2CppBase() + 0x30E254))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EnemyConfigZombieAthlete*))(Il2CppBase() + 0x30E25C))(this);
	}
	template <typename T = void> T SetProps() {
		return ((T (*)(EnemyConfigZombieAthlete*))(Il2CppBase() + 0x30E328))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EnemyConfigZombieAthlete*))(Il2CppBase() + 0x30E374))(this);
	}
};
