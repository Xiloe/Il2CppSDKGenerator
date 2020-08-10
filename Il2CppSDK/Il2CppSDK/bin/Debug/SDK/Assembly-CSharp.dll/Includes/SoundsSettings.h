#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SoundsSettings
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Source() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_RotStart() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_RotLoop() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_RotStop() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SoundsSettings*))(Il2CppBase() + 0x269CFC))(this);
	}
};
