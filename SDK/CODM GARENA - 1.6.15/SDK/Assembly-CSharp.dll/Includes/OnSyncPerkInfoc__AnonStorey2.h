#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnSyncPerkInfocAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnSyncPerkInfo>c__AnonStorey2"));
	}

	template <typename T = int32_t> T& perkID() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(OnSyncPerkInfocAnonStorey2*, uintptr_t))(Il2CppBase() + 0x1DEA3C4))(this, e);
	}

};

}
