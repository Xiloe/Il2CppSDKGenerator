#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InteractionParticle
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Life() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& Parent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(InteractionParticle*))(Il2CppBase() + 0x3CBC5C))(this);
	}
};
