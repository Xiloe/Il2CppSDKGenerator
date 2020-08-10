#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnemyConfigZombieVomit1
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EnemyConfigZombieVomit1*))(Il2CppBase() + 0x30FA30))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EnemyConfigZombieVomit1*))(Il2CppBase() + 0x30FA38))(this);
	}
	template <typename T = void> T SetProps() {
		return ((T (*)(EnemyConfigZombieVomit1*))(Il2CppBase() + 0x30FB18))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EnemyConfigZombieVomit1*))(Il2CppBase() + 0x30FB7C))(this);
	}
};
