#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheckDataConsistencycAnonStorey96
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& setup() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CheckDataConsistencycAnonStorey96*))(Il2CppBase() + 0x3EE068))(this);
	}
	template <typename T = bool> T m__2(void* font) {
		return ((T (*)(CheckDataConsistencycAnonStorey96*, void*))(Il2CppBase() + 0x3EE254))(this, font);
	}
};
