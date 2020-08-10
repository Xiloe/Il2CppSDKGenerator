#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnemyConfigZombieBerserk1
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EnemyConfigZombieBerserk1*))(Il2CppBase() + 0x30E4C0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EnemyConfigZombieBerserk1*))(Il2CppBase() + 0x30E4C8))(this);
	}
	template <typename T = void> T SetProps() {
		return ((T (*)(EnemyConfigZombieBerserk1*))(Il2CppBase() + 0x30E594))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EnemyConfigZombieBerserk1*))(Il2CppBase() + 0x30E5E0))(this);
	}
};
