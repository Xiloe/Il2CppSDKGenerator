#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlaySoundFromAnimations
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PlaySoundFromAnimations*))(Il2CppBase() + 0x209634))(this);
	}
	template <typename T = void> T AnimNotify_PlayOneShot(void* inClip) {
		return ((T (*)(PlaySoundFromAnimations*, void*))(Il2CppBase() + 0x20963C))(this, inClip);
	}
};
