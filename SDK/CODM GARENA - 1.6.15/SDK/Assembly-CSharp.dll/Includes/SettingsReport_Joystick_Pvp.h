#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettingsReportJoystickPvp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettingsReport_Joystick_Pvp"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(SettingsReportJoystickPvp*))(Il2CppBase() + 0x4957A0C))(this);
	}

};

}
