#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyInGameStreamingcAnonStorey9
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ApplyInGameStreaming>c__AnonStorey9"));
	}

	template <typename T = uintptr_t> T& scene() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t e) {
		return ((T (*)(ApplyInGameStreamingcAnonStorey9*, uintptr_t))(Il2CppBase() + 0x4AA39FC))(this, e);
	}

};

}
