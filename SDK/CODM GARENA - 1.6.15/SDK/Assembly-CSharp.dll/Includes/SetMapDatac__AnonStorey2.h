#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetMapDatacAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetMapData>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& it() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$0() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uint32_t mapIt) {
		return ((T (*)(SetMapDatacAnonStorey2*, uint32_t))(Il2CppBase() + 0x2CD6F90))(this, mapIt);
	}

};

}
