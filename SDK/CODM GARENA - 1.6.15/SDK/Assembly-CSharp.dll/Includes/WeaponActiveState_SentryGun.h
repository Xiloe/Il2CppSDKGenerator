#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponActiveStateSentryGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponActiveState_SentryGun"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T BeginFire() {
		return ((T (*)(WeaponActiveStateSentryGun*))(Il2CppBase() + 0x45AD634))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginFire() {
		return ((T (*)(WeaponActiveStateSentryGun*))(Il2CppBase() + 0x45AD958))(this);
	}

};

}
