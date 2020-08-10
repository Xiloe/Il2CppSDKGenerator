#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JAxis
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& axis() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor(Il2CppString* _axis, Il2CppString* _name) {
		return ((T (*)(JAxis*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2EA18C))(this, _axis, _name);
	}
};
