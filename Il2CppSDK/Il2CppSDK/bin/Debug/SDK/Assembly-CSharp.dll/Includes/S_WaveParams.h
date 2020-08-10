#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SWaveParams
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& m_Amplitude() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_Freq() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& m_Speed() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_Radius() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_Delay() {
		return *(T*)((uintptr_t)this + 0x14);
	}
};
