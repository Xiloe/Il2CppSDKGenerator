#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Tutorial
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_Activated() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Tutorial*))(Il2CppBase() + 0x3BA524))(this);
	}
};
