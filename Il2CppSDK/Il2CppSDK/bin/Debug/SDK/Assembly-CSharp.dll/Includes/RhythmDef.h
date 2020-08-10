#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RhythmDef
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Pattern() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& SpeechLoop() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<void*>*> T& Beats() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(RhythmDef*))(Il2CppBase() + 0x2DA9A0))(this);
	}
};
