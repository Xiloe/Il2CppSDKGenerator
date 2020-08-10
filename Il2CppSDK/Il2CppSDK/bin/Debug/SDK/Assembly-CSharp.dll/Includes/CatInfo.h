#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CatInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Button() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_LastSelection() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CatInfo*))(Il2CppBase() + 0x392864))(this);
	}
};
