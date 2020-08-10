#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayParticleFromAnimations
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PlayParticleFromAnimations*))(Il2CppBase() + 0x209624))(this);
	}
	template <typename T = void> T AnimNotify_PlayOneShot(Il2CppString* name) {
		return ((T (*)(PlayParticleFromAnimations*, Il2CppString*))(Il2CppBase() + 0x20962C))(this, name);
	}
	template <typename T = void> T AnimNotify_Stop(Il2CppString* name) {
		return ((T (*)(PlayParticleFromAnimations*, Il2CppString*))(Il2CppBase() + 0x209630))(this, name);
	}
};
