#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimationExtension
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = bool> static T Contains(void* inAnimation, void* inClip) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x1ABACC))(0, inAnimation, inClip);
	}
};
