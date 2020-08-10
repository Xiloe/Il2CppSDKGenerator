#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Kerning
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& Second() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Amount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Kerning*))(Il2CppBase() + 0x35BEEC))(this);
	}
};
