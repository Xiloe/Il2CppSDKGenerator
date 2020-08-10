#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MenuLoader
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MenuLoader*))(Il2CppBase() + 0x3E863C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MenuLoader*))(Il2CppBase() + 0x3E8644))(this);
	}
};
