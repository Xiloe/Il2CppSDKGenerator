#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponDredgeLavaActiveState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponDredgeLavaActiveState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponDredgeLavaActiveState*))(Il2CppBase() + 0x1C64518))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponDredgeLavaActiveState*))(Il2CppBase() + 0x1C646D8))(this);
	}

};

}
