#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnemyConfigZombieSwat
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EnemyConfigZombieSwat*))(Il2CppBase() + 0x30F6A4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EnemyConfigZombieSwat*))(Il2CppBase() + 0x30F6AC))(this);
	}
	template <typename T = void> T SetProps() {
		return ((T (*)(EnemyConfigZombieSwat*))(Il2CppBase() + 0x30F784))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EnemyConfigZombieSwat*))(Il2CppBase() + 0x30F7E8))(this);
	}
};
