#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EnemyConfigZombieWalker1
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EnemyConfigZombieWalker1*))(Il2CppBase() + 0x30FDE4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EnemyConfigZombieWalker1*))(Il2CppBase() + 0x30FDEC))(this);
	}
	template <typename T = void> T SetProps() {
		return ((T (*)(EnemyConfigZombieWalker1*))(Il2CppBase() + 0x30FECC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(EnemyConfigZombieWalker1*))(Il2CppBase() + 0x30FF6C))(this);
	}
	template <typename T = void> T Activate(void* spawn) {
		return ((T (*)(EnemyConfigZombieWalker1*, void*))(Il2CppBase() + 0x31037C))(this, spawn);
	}
	template <typename T = void> T Deactivate() {
		return ((T (*)(EnemyConfigZombieWalker1*))(Il2CppBase() + 0x310380))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(EnemyConfigZombieWalker1*))(Il2CppBase() + 0x310384))(this);
	}
	template <typename T = void> T HandleAction(void* a) {
		return ((T (*)(EnemyConfigZombieWalker1*, void*))(Il2CppBase() + 0x310388))(this, a);
	}
};
