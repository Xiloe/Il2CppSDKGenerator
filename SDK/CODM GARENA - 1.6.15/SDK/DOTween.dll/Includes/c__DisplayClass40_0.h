#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass400
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass40_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = float> T DOTimeb__0() {
		return ((T (*)(cDisplayClass400*))(Il2CppBase() + 0x51D32E4))(this);
	}
	template <typename T = void> T DOTimeb__1(float x) {
		return ((T (*)(cDisplayClass400*, float))(Il2CppBase() + 0x51D3310))(this, x);
	}

};

}
