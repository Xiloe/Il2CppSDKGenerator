#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponMonkeyBombPrepareStateHold
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponMonkeyBombPrepareState_Hold"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCoutDownUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ShowCoutDownUI() {
		return ((T (*)(WeaponMonkeyBombPrepareStateHold*))(Il2CppBase() + 0x3A5CD7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowCoutDownUI() {
		return ((T (*)(WeaponMonkeyBombPrepareStateHold*))(Il2CppBase() + 0x3A5CE5C))(this);
	}

};

}
