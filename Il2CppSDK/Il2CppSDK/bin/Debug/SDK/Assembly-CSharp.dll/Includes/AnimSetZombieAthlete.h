#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimSetZombieAthlete
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AnimSetZombieAthlete*))(Il2CppBase() + 0x1B3008))(this);
	}
	template <typename T = Il2CppString*> T GetRunAnim() {
		return ((T (*)(AnimSetZombieAthlete*))(Il2CppBase() + 0x1B30AC))(this);
	}
};
