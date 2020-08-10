#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ControlPos
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppVector2> T& OrigPos() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector2> T& Offset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Side() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor(void* _side) {
		return ((T (*)(ControlPos*, void*))(Il2CppBase() + 0x38C1E0))(this, _side);
	}
	template <typename T = Il2CppVector2> T get_Positon() {
		return ((T (*)(ControlPos*))(Il2CppBase() + 0x38C650))(this);
	}
};
