#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass330
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass33_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppQuaternion> T DOLookAtb__0() {
		return ((T (*)(cDisplayClass330*))(Il2CppBase() + 0x51D2B80))(this);
	}

};

}
