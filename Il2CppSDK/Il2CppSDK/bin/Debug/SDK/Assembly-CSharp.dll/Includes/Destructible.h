#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Destructible
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& obj() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& health() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Destructible*))(Il2CppBase() + 0x32ED48))(this);
	}
};
