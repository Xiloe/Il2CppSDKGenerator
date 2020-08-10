#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnemyConfigZombieFast1
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EnemyConfigZombieFast1*))(Il2CppBase() + 0x30EF14))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EnemyConfigZombieFast1*))(Il2CppBase() + 0x30EF1C))(this);
	}
	template <typename T = void> T SetProps() {
		return ((T (*)(EnemyConfigZombieFast1*))(Il2CppBase() + 0x30EFE8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EnemyConfigZombieFast1*))(Il2CppBase() + 0x30F030))(this);
	}
};
