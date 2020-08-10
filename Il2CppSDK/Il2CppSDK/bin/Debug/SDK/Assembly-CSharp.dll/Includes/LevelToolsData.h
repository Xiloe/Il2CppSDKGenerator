#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LevelToolsData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(LevelToolsData*))(Il2CppBase() + 0x3D236C))(this);
	}
};
