#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WaveEmitter
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppVector2> T& m_Center() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_Amplitude() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_Frequency() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_Speed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_DistAtt() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_Time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_Duration() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_SlotIdx() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(WaveEmitter*))(Il2CppBase() + 0x3FADC0))(this);
	}
};
