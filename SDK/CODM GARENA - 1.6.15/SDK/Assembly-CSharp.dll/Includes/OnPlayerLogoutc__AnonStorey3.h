#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnPlayerLogoutcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnPlayerLogout>c__AnonStorey3"));
	}

	template <typename T = uint64_t> T& playerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(OnPlayerLogoutcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x2A69198))(this, x);
	}

};

}
