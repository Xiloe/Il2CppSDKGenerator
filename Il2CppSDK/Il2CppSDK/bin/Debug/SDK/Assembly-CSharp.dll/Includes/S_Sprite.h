#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SSprite
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Sprite() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& m_IsVisible() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& m_ProxyFlag() {
		return *(T*)((uintptr_t)this + 0x5);
	}
	template <typename T = Il2CppVector3> T& m_Pos() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_Width() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_Height() {
		return *(T*)((uintptr_t)this + 0x18);
	}
};
