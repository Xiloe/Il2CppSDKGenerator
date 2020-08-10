#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameEvent
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& State() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor(Il2CppString* name, void* state) {
		return ((T (*)(GameEvent*, Il2CppString*, void*))(Il2CppBase() + 0x3CBC34))(this, name, state);
	}
};
