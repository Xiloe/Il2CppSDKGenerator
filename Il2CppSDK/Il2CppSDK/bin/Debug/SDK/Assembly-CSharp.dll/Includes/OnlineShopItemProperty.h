#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnlineShopItemProperty
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(OnlineShopItemProperty*))(Il2CppBase() + 0x1EDFB4))(this);
	}
};
