#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CompRecord
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& m_Active() {
		return *(T*)((uintptr_t)this + 0x4);
	}
};
