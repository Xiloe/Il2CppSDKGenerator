#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeactivationSettings
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& m_Delay() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_Destroy() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_Explosion() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_ExplosionOrigin() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_ExplosionDamageCoef() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_ExplosionRadius() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_ExplosionRadiusMax() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DeactivationSettings*))(Il2CppBase() + 0x276EA8))(this);
	}
};
