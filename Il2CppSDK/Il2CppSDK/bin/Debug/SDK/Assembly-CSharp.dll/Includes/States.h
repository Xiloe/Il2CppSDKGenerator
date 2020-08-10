#pragma once
#include <Il2Cpp/Il2Cpp.h>

class States
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_State() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(States*))(Il2CppBase() + 0x1D0044))(this);
	}
	template <typename T = void*> T get_actualState() {
		return ((T (*)(States*))(Il2CppBase() + 0x1D0D80))(this);
	}
	template <typename T = void> T NextState() {
		return ((T (*)(States*))(Il2CppBase() + 0x1D0D88))(this);
	}
};
