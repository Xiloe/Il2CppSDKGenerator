#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SSpriteUV
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppVector2> T& m_LowerLeftUV() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector2> T& m_UvDimensions() {
		return *(T*)((uintptr_t)this + 0x8);
	}
};
