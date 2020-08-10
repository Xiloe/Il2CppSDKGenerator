#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayOnEnable
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& PlayAnimation() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& PlayAudio() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& PlayParticle() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PlayOnEnable*))(Il2CppBase() + 0x209284))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(PlayOnEnable*))(Il2CppBase() + 0x20928C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(PlayOnEnable*))(Il2CppBase() + 0x209458))(this);
	}
};
