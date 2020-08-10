#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SCacheRec
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& m_IsBlocked() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_QueryTime() {
		return *(T*)((uintptr_t)this + 0x4);
	}
};
