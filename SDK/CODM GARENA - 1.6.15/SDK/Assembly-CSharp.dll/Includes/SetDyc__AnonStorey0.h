#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetDycAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetDy>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetDycAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3531FC4))(this, it);
	}

};

}
