#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TouchInputTest
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppDictionary<int32_t, bool>*> T& m_ActiveTouches() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(TouchInputTest*))(Il2CppBase() + 0x270AA0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TouchInputTest*))(Il2CppBase() + 0x270B4C))(this);
	}
};
