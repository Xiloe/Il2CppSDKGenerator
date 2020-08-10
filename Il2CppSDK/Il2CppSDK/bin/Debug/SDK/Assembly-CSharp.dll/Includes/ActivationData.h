#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActivationData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& m_Delay() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& m_Anim() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_Sound() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ActivationData*))(Il2CppBase() + 0x3FBA10))(this);
	}
};
