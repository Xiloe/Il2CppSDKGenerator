#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjectileImpact
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& m_Sfx() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_Gfx() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_GfxCache() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_ExpectedNum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ProjectileImpact*))(Il2CppBase() + 0x22BC70))(this);
	}
};
