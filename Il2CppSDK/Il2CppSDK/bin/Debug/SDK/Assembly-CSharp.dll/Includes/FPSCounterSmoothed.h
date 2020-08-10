#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FPSCounterSmoothed
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& m_Samples() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_SamplesMaxNum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_SamplesNum() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_SamplesSum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_SampleIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor(int32_t SmoothingSamplesCount) {
		return ((T (*)(FPSCounterSmoothed*, int32_t))(Il2CppBase() + 0x319FF8))(this, SmoothingSamplesCount);
	}
	template <typename T = float> T get_Value() {
		return ((T (*)(FPSCounterSmoothed*))(Il2CppBase() + 0x31A10C))(this);
	}
	template <typename T = void> T set_Value(float value) {
		return ((T (*)(FPSCounterSmoothed*, float))(Il2CppBase() + 0x31A104))(this, value);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FPSCounterSmoothed*))(Il2CppBase() + 0x31A114))(this);
	}
	template <typename T = void> T Update(float DeltaTime) {
		return ((T (*)(FPSCounterSmoothed*, float))(Il2CppBase() + 0x31A124))(this, DeltaTime);
	}
};
