#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VehicleCollisionController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VehicleCollisionController"));
	}

	template <typename T = uintptr_t> T& targetSocket() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Tick() {
		return ((T (*)(VehicleCollisionController*))(Il2CppBase() + 0x27DE84C))(this);
	}

};

}
