#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnemyConfigZombieBoss1
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EnemyConfigZombieBoss1*))(Il2CppBase() + 0x30E788))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EnemyConfigZombieBoss1*))(Il2CppBase() + 0x30E790))(this);
	}
	template <typename T = void> T SetProps() {
		return ((T (*)(EnemyConfigZombieBoss1*))(Il2CppBase() + 0x30E85C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EnemyConfigZombieBoss1*))(Il2CppBase() + 0x30E8A8))(this);
	}
};
