#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SAnimDscr
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Animation() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& m_Length() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_CustomIdx() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_AnimFinishedDelegate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0x14);
	}
};
