#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponDroppedPickUpProjectileC4Bomb
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponDroppedPickUpProjectile_C4Bomb"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
