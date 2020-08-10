#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InteractionSound
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Audio() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Life() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Parent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(InteractionSound*))(Il2CppBase() + 0x3CBC64))(this);
	}
	template <typename T = void> T _ctor_1(void* audio, float delay, float life, void* parent) {
		return ((T (*)(InteractionSound*, void*, float, float, void*))(Il2CppBase() + 0x3CBC6C))(this, audio, delay, life, parent);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(InteractionSound*))(Il2CppBase() + 0x3CBCA4))(this);
	}
};
