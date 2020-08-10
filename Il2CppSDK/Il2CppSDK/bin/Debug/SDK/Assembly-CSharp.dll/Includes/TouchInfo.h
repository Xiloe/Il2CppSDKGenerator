#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TouchInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppVector2> T& m_Delta() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_DeltaTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(TouchInfo*))(Il2CppBase() + 0x27C65C))(this);
	}
};
