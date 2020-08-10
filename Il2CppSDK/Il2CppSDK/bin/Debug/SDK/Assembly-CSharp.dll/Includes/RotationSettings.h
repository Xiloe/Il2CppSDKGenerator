#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotationSettings
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& m_HRange() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_HSpeed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_VRange() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_VSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(RotationSettings*))(Il2CppBase() + 0x269CC4))(this);
	}
};
