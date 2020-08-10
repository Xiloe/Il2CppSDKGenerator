#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SineMover
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& m_SineAmplitudeX() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_SineFreqX() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_SineAmplitudeY() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_SineFreqY() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_SineAmplitudeZ() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_SineFreqZ() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_Transform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& m_BasePos() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SineMover*))(Il2CppBase() + 0x2469C0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SineMover*))(Il2CppBase() + 0x246A14))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(SineMover*))(Il2CppBase() + 0x246A88))(this);
	}
};
