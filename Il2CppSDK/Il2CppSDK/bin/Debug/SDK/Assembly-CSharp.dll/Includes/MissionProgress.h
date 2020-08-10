#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MissionProgress
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& Rank() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& LevelInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MissionProgress*))(Il2CppBase() + 0x202460))(this);
	}
};
