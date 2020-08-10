#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimSetZombieSwat
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7887C);
	}
	// Fields
	template <typename T = void*> static T& InjuryBody() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& InjuryLArm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& InjuryRArm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& InjuryLegs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AnimSetZombieSwat*))(Il2CppBase() + 0x1B40D8))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B417C))(0);
	}
	template <typename T = Il2CppString*> T GetIdleAnim() {
		return ((T (*)(AnimSetZombieSwat*))(Il2CppBase() + 0x1B444C))(this);
	}
	template <typename T = Il2CppString*> T GetInjuryAnim(void* bodyPart, bool bDestroy, void* direction) {
		return ((T (*)(AnimSetZombieSwat*, void*, bool, void*))(Il2CppBase() + 0x1B45AC))(this, bodyPart, bDestroy, direction);
	}
};
