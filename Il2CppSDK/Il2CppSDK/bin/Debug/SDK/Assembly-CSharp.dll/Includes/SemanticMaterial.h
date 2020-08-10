#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SemanticMaterial
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_PhyMaterial() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_ProjectileImpact() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& m_GrenadeImpacts() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_GadgetsSticking() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<void*>*> T& m_PlayerFootsteps() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor(void* MatID) {
		return ((T (*)(SemanticMaterial*, void*))(Il2CppBase() + 0x22BABC))(this, MatID);
	}
	template <typename T = void*> T get_ID() {
		return ((T (*)(SemanticMaterial*))(Il2CppBase() + 0x22BC80))(this);
	}
	template <typename T = void*> T GetProjectileImpactData(void* ProjType) {
		return ((T (*)(SemanticMaterial*, void*))(Il2CppBase() + 0x22BC88))(this, ProjType);
	}
};
