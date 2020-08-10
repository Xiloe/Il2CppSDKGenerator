#pragma once
#include <Il2Cpp/Il2Cpp.h>

class URL
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(URL*))(Il2CppBase() + 0x279D98))(this);
	}
};
