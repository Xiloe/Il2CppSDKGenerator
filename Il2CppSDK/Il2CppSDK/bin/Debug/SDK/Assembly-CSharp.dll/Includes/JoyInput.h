#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JoyInput
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& key() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& joyAxis() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor(void* _key, void* _joyAxis) {
		return ((T (*)(JoyInput*, void*, void*))(Il2CppBase() + 0x2EA1B4))(this, _key, _joyAxis);
	}
};
