#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnMissileExplodecAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnMissileExplode>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& projectileID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(int32_t s) {
		return ((T (*)(OnMissileExplodecAnonStorey2*, int32_t))(Il2CppBase() + 0x1BFACE8))(this, s);
	}

};

}
