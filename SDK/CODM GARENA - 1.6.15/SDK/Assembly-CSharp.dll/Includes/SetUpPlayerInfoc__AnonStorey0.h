#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetUpPlayerInfocAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetUpPlayerInfo>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(SetUpPlayerInfocAnonStorey0*, uintptr_t))(Il2CppBase() + 0x29817A4))(this, it);
	}

};

}
