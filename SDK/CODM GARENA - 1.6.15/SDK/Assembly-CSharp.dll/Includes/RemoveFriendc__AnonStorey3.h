#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RemoveFriendcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RemoveFriend>c__AnonStorey3"));
	}

	template <typename T = uint64_t> T& playerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(RemoveFriendcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x329B2D8))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(RemoveFriendcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x329B31C))(this, it);
	}
	template <typename T = bool> T m__2(uintptr_t it) {
		return ((T (*)(RemoveFriendcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x329B360))(this, it);
	}
	template <typename T = bool> T m__3(uintptr_t it) {
		return ((T (*)(RemoveFriendcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x329B3BC))(this, it);
	}

};

}
