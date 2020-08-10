#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnemyConfigZombieBossSanta
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EnemyConfigZombieBossSanta*))(Il2CppBase() + 0x30EC90))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EnemyConfigZombieBossSanta*))(Il2CppBase() + 0x30EC98))(this);
	}
	template <typename T = void> T SetProps() {
		return ((T (*)(EnemyConfigZombieBossSanta*))(Il2CppBase() + 0x30ED64))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EnemyConfigZombieBossSanta*))(Il2CppBase() + 0x30EDB0))(this);
	}
};
