#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass750
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass75_0"));
	}

	template <typename T = uintptr_t> T& to() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T DOBlendableColorb__0() {
		return ((T (*)(cDisplayClass750*))(Il2CppBase() + 0x51D468C))(this);
	}
	template <typename T = void> T DOBlendableColorb__1(uintptr_t x) {
		return ((T (*)(cDisplayClass750*, uintptr_t))(Il2CppBase() + 0x51D469C))(this, x);
	}

};

}
