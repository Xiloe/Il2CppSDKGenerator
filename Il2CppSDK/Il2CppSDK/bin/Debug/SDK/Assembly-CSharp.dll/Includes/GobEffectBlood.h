#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GobEffectBlood
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppColor> T& m_BloodColor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GobEffectBlood*))(Il2CppBase() + 0x3540B0))(this);
	}
};
