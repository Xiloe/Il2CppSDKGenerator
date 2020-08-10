#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetShopFundInfocAnonStoreyA2
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& productId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GetShopFundInfocAnonStoreyA2*))(Il2CppBase() + 0x23D44C))(this);
	}
	template <typename T = bool> T m__38(void* p) {
		return ((T (*)(GetShopFundInfocAnonStoreyA2*, void*))(Il2CppBase() + 0x2451A0))(this, p);
	}
};
