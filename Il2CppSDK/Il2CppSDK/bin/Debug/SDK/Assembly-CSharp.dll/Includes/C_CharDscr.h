#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CCharDscr
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& m_Idx() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_Width() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_CX() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_CY() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_CW() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_CH() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor(int32_t cIdx, float width, float cx, float cy, float cw, float ch) {
		return ((T (*)(CCharDscr*, int32_t, float, float, float, float, float))(Il2CppBase() + 0x359FAC))(this, cIdx, width, cx, cy, cw, ch);
	}
};
