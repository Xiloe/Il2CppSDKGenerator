#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetActivitycAnonStoreyA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetActivity>c__AnonStoreyA"));
	}

	template <typename T = int32_t> T& TopIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& LeftIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetActivitycAnonStoreyA*, uintptr_t))(Il2CppBase() + 0x3531388))(this, it);
	}

};

}
