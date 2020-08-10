#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Effects
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& m_Animation() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_Particle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Effects*))(Il2CppBase() + 0x1EFAC0))(this);
	}
};
