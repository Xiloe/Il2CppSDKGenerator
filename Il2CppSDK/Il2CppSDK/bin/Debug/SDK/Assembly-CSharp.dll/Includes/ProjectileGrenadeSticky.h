#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjectileGrenadeSticky
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& m_StickToLayers() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProjectileGrenadeSticky*))(Il2CppBase() + 0x212130))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ProjectileGrenadeSticky*))(Il2CppBase() + 0x2121F0))(this);
	}
	template <typename T = void> T TryToStick() {
		return ((T (*)(ProjectileGrenadeSticky*))(Il2CppBase() + 0x21220C))(this);
	}
	template <typename T = void> T OnCollisionEnter(void* Coll) {
		return ((T (*)(ProjectileGrenadeSticky*, void*))(Il2CppBase() + 0x212840))(this, Coll);
	}
};
