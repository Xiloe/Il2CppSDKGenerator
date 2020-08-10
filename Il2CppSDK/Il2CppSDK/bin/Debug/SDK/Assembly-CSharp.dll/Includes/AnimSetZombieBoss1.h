#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimSetZombieBoss1
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AnimSetZombieBoss1*))(Il2CppBase() + 0x1B31C8))(this);
	}
	template <typename T = Il2CppString*> T GetWeaponAnim(void* action) {
		return ((T (*)(AnimSetZombieBoss1*, void*))(Il2CppBase() + 0x1B326C))(this, action);
	}
	template <typename T = Il2CppString*> T GetIdleAnim() {
		return ((T (*)(AnimSetZombieBoss1*))(Il2CppBase() + 0x1B35F0))(this);
	}
	template <typename T = Il2CppString*> T GetMoveAnim(void* motionSide) {
		return ((T (*)(AnimSetZombieBoss1*, void*))(Il2CppBase() + 0x1B3668))(this, motionSide);
	}
};
