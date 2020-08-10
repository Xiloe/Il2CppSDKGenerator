#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TestProjectiles
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_ProjectilePrefab() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_ProjectileType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_UseProjectileType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_SpawnPos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_ProjectileSettingsEx() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_LaunchRepeatTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<void*>*> T& ActiveProjectiles() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(TestProjectiles*))(Il2CppBase() + 0x26B2BC))(this);
	}
	template <typename T = void> T LaunchProjectile() {
		return ((T (*)(TestProjectiles*))(Il2CppBase() + 0x26B378))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TestProjectiles*))(Il2CppBase() + 0x26B70C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TestProjectiles*))(Il2CppBase() + 0x26B7A8))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(TestProjectiles*))(Il2CppBase() + 0x26BAC4))(this);
	}
};
