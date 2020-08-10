#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnemyConfigZombieBoss1small
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EnemyConfigZombieBoss1small*))(Il2CppBase() + 0x30EA0C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EnemyConfigZombieBoss1small*))(Il2CppBase() + 0x30EA14))(this);
	}
	template <typename T = void> T SetProps() {
		return ((T (*)(EnemyConfigZombieBoss1small*))(Il2CppBase() + 0x30EAE0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EnemyConfigZombieBoss1small*))(Il2CppBase() + 0x30EB2C))(this);
	}
};
