#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitPendingIconcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitPendingIcon>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& showingId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& f__ref$0() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(InitPendingIconcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x29156F8))(this, it);
	}
	template <typename T = bool> T m__1(uintptr_t it) {
		return ((T (*)(InitPendingIconcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x2915798))(this, it);
	}

};

}
