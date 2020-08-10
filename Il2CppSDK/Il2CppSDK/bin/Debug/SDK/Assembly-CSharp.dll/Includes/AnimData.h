#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Anim() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_MoveSpeed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AnimData*))(Il2CppBase() + 0x198060))(this);
	}
};
