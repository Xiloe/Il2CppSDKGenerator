#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjectileAlienGun
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78798);
	}
	// Fields
	template <typename T = void*> T& m_HitParticle() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppColor> T& m_FadeoutColor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_hitPtc() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProjectileAlienGun*))(Il2CppBase() + 0x20AAEC))(this);
	}
	template <typename T = Il2CppColor> T get_FadeoutColor() {
		return ((T (*)(ProjectileAlienGun*))(Il2CppBase() + 0x20ABA8))(this);
	}
	template <typename T = void> T set_FadeoutColor(Il2CppColor value) {
		return ((T (*)(ProjectileAlienGun*, Il2CppColor))(Il2CppBase() + 0x20ABB8))(this, value);
	}
	template <typename T = void> T ProjectileUpdate(float deltaTime) {
		return ((T (*)(ProjectileAlienGun*, float))(Il2CppBase() + 0x20ABD0))(this, deltaTime);
	}
	template <typename T = void> T GenerateWaveFX() {
		return ((T (*)(ProjectileAlienGun*))(Il2CppBase() + 0x20B6D0))(this);
	}
	template <typename T = void> T ProjectileDeinit() {
		return ((T (*)(ProjectileAlienGun*))(Il2CppBase() + 0x20B9C0))(this);
	}
};
