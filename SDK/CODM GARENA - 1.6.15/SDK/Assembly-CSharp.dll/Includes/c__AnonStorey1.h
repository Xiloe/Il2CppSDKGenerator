#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& obj() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t link) {
		return ((T (*)(cAnonStorey1*, uintptr_t))(Il2CppBase() + 0x480AF7C))(this, link);
	}

};

}
