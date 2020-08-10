#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkinValue
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& skin() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SkinValue*))(Il2CppBase() + 0x253C0C))(this);
	}
};
