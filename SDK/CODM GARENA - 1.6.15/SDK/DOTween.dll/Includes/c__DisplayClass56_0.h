#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass560
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass56_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppVector3> T DOScaleYb__0() {
		return ((T (*)(cDisplayClass560*))(Il2CppBase() + 0x51D3A08))(this);
	}
	template <typename T = void> T DOScaleYb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass560*, Il2CppVector3))(Il2CppBase() + 0x51D3A34))(this, x);
	}

};

}
