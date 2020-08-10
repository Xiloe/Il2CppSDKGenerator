#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Slot
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor(void* symbol) {
		return ((T (*)(Slot*, void*))(Il2CppBase() + 0x293B54))(this, symbol);
	}
	template <typename T = void> T SetSymbol(void* symbol) {
		return ((T (*)(Slot*, void*))(Il2CppBase() + 0x292E94))(this, symbol);
	}
};
