#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameTexts
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GameTexts*))(Il2CppBase() + 0x335EC0))(this);
	}
};
