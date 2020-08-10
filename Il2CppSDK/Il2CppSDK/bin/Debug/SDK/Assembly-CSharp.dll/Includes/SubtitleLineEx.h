#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SubtitleLineEx
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& TextID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SubtitleLineEx*))(Il2CppBase() + 0x39B550))(this);
	}
};
