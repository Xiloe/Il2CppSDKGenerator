#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayBPExpAnimcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PlayBPExpAnim>c__AnonStorey0"));
	}

	template <typename T = int32_t> T& useExp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$1() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(PlayBPExpAnimcAnonStorey0*))(Il2CppBase() + 0x293FD90))(this);
	}

};

}
