#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EProjectileTypeComparer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79690);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EProjectileTypeComparer*))(Il2CppBase() + 0x30D7C4))(this);
	}
	template <typename T = bool> T Equals(void* x, void* y) {
		return ((T (*)(EProjectileTypeComparer*, void*, void*))(Il2CppBase() + 0x30D7CC))(this, x, y);
	}
	template <typename T = int32_t> T GetHashCode(void* x) {
		return ((T (*)(EProjectileTypeComparer*, void*))(Il2CppBase() + 0x30D7DC))(this, x);
	}
};
