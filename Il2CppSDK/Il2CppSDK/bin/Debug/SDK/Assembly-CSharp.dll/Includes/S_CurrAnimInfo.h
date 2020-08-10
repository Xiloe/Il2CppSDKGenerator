#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SCurrAnimInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppString*> T& m_AnimId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_NormTime() {
		return *(T*)((uintptr_t)this + 0x4);
	}
};
