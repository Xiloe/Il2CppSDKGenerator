#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KeyGenUtl
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(KeyGenUtl*))(Il2CppBase() + 0x3D1AE4))(this);
	}
};
