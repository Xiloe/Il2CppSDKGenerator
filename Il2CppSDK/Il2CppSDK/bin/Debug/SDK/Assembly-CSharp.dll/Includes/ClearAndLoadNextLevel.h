#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClearAndLoadNextLevel
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ClearAndLoadNextLevel*))(Il2CppBase() + 0x2C1134))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ClearAndLoadNextLevel*))(Il2CppBase() + 0x2C113C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(ClearAndLoadNextLevel*))(Il2CppBase() + 0x2C1214))(this);
	}
};
