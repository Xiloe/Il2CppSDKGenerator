#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetBrInfoByMapIdcAnonStorey7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetBrInfoByMapId>c__AnonStorey7"));
	}

	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$8() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(int32_t it) {
		return ((T (*)(GetBrInfoByMapIdcAnonStorey7*, int32_t))(Il2CppBase() + 0x3AD1E1C))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(GetBrInfoByMapIdcAnonStorey7*, uintptr_t))(Il2CppBase() + 0x3AD1EE8))(this, it);
	}

};

}
