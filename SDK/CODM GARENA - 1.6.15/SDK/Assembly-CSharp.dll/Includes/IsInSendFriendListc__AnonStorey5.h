#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsInSendFriendListcAnonStorey5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IsInSendFriendList>c__AnonStorey5"));
	}

	template <typename T = uint64_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uint64_t it) {
		return ((T (*)(IsInSendFriendListcAnonStorey5*, uint64_t))(Il2CppBase() + 0x3852E70))(this, it);
	}

};

}
