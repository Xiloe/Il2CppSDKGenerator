#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SAnimIndexRec
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& m_StartFrameInAtlas() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_NumFrames() {
		return *(T*)((uintptr_t)this + 0x4);
	}
};
