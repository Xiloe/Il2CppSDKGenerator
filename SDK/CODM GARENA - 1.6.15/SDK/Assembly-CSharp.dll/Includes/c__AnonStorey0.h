#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& liif() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t link) {
		return ((T (*)(cAnonStorey0*, uintptr_t))(Il2CppBase() + 0x480AF48))(this, link);
	}

};

}
