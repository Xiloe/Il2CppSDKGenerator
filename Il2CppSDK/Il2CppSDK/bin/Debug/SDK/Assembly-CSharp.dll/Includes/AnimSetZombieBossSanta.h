#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimSetZombieBossSanta
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AnimSetZombieBossSanta*))(Il2CppBase() + 0x1B373C))(this);
	}
	template <typename T = Il2CppString*> T GetWeaponAnim(void* action) {
		return ((T (*)(AnimSetZombieBossSanta*, void*))(Il2CppBase() + 0x1B37E0))(this, action);
	}
	template <typename T = Il2CppString*> T GetIdleAnim() {
		return ((T (*)(AnimSetZombieBossSanta*))(Il2CppBase() + 0x1B3B84))(this);
	}
	template <typename T = Il2CppString*> T GetMoveAnim(void* motionSide) {
		return ((T (*)(AnimSetZombieBossSanta*, void*))(Il2CppBase() + 0x1B3BFC))(this, motionSide);
	}
};
