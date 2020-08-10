#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Button
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& Pressed() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& FirstQuery() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = float> T& LastRelaxPos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& LastPressedPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Button*))(Il2CppBase() + 0x3E7C5C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Button*))(Il2CppBase() + 0x3E7C64))(this);
	}
};
