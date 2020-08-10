#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HitInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppVector3> T& m_Point() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_Normal() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_Time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
};
