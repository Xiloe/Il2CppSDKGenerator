#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindTutorialcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FindTutorial>c__AnonStorey0"));
	}

	template <typename T = bool> T& inGame() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& e() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t x) {
		return ((T (*)(FindTutorialcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x4243850))(this, x);
	}

};

}
