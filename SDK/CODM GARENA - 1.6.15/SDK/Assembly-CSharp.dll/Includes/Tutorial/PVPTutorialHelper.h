#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class PVPTutorialHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "PVPTutorialHelper"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_CheckSniperTutorial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T CheckSniperTutorial(bool willFinish) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4B076A0))(0, willFinish);
	}

};

}
