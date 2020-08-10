#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FinalBoss
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(FinalBoss*))(Il2CppBase() + 0x318DD8))(this);
	}
};
