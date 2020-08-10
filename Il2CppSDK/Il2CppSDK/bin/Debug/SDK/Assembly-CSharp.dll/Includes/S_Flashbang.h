#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SFlashbang
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppColor> T& m_Color() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_Intensity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x18);
	}
};
