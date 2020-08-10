#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimSetZombieSlow1
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AnimSetZombieSlow1*))(Il2CppBase() + 0x1B3ED4))(this);
	}
	template <typename T = Il2CppString*> T GetIdleAnim() {
		return ((T (*)(AnimSetZombieSlow1*))(Il2CppBase() + 0x1B3F78))(this);
	}
};
