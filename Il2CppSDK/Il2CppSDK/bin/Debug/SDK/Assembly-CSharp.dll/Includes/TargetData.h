#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Agent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& m_LastVisiblePos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_LastVisibleTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_InFOV() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_InSights() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = bool> T& m_InRange() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = bool> T& m_IsVisible() {
		return *(T*)((uintptr_t)this + 0x1F);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(TargetData*))(Il2CppBase() + 0x276EA0))(this);
	}
};
