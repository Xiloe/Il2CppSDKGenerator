#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FullyUpdateFriendscAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FullyUpdateFriends>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& info() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(FullyUpdateFriendscAnonStorey0*, uintptr_t))(Il2CppBase() + 0x3CF9980))(this, it);
	}

};

}
