#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BeatDef
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& BeatStart() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& BeatLength() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(BeatDef*))(Il2CppBase() + 0x2DA990))(this);
	}
};
