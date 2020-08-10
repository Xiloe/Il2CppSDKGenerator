#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AsciiOnlycAnonStorey99
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& upperLimit() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AsciiOnlycAnonStorey99*))(Il2CppBase() + 0x26722C))(this);
	}
	template <typename T = bool> T m__6(char ch) {
		return ((T (*)(AsciiOnlycAnonStorey99*, char))(Il2CppBase() + 0x2685C8))(this, ch);
	}
};
