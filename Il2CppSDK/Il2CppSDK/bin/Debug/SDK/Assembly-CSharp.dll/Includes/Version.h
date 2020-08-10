#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Version
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Object() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_Health() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_Sfx() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& m_Gfx() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Explosion() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_ExplosionOrigin() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_ExplosionDamage() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_ExplosionRadius() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_ExplosionRadiusMax() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Version*))(Il2CppBase() + 0x304DAC))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(Version*))(Il2CppBase() + 0x301FC4))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(Version*))(Il2CppBase() + 0x302508))(this);
	}
	template <typename T = void> T DeActivate() {
		return ((T (*)(Version*))(Il2CppBase() + 0x30243C))(this);
	}
};
