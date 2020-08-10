#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FadeoutOverrideDef
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& enabled() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppColor> T& color() {
		return *(T*)((uintptr_t)this + 0x4);
	}
};
