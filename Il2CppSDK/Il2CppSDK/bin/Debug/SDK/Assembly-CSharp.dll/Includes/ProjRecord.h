#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProjRecord
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_XForm() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& m_Pos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor(void* XForm) {
		return ((T (*)(ProjRecord*, void*))(Il2CppBase() + 0x3FD278))(this, XForm);
	}
};
