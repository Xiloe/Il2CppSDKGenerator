#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SEmitPlaneInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppVector3> T& m_Base() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_AxisU() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_AxisV() {
		return *(T*)((uintptr_t)this + 0x18);
	}
};
