#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Funds
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78B54);
	}
	// Fields
	template <typename T = void*> T& FundsType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor(void* fundsType, int32_t value) {
		return ((T (*)(Funds*, void*, int32_t))(Il2CppBase() + 0x322E1C))(this, fundsType, value);
	}
	template <typename T = void> T _ctor_1(void* funds) {
		return ((T (*)(Funds*, void*))(Il2CppBase() + 0x322E44))(this, funds);
	}
};
