#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetDropValidListcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetDropValidList>c__AnonStorey2"));
	}

	template <typename T = double> T& serverTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetDropValidListcAnonStorey2*, uintptr_t))(Il2CppBase() + 0x434452C))(this, it);
	}

};

}
