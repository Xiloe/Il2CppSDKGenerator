#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CanTriggercAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CanTrigger>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& e() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t g) {
		return ((T (*)(CanTriggercAnonStorey1*, uintptr_t))(Il2CppBase() + 0x4B16638))(this, g);
	}

};

}
