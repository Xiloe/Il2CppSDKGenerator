#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponBar"));
	}

	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetState(int32_t lockLevel, uint32_t playerLevel) {
		return ((T (*)(WeaponBar*, int32_t, uint32_t))(Il2CppBase() + 0x41ED588))(this, lockLevel, playerLevel);
	}

};

}
