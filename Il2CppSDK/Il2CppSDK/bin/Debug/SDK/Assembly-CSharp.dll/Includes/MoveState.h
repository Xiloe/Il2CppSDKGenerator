#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveState
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& Enabled() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& Direction() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Force() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MoveState*))(Il2CppBase() + 0x1FB9F0))(this);
	}
	template <typename T = void> T ZeroInput() {
		return ((T (*)(MoveState*))(Il2CppBase() + 0x1FC50C))(this);
	}
};
