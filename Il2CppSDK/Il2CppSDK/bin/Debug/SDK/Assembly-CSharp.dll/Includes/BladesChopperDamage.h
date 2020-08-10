#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BladesChopperDamage
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78CAC);
	}
	// Fields
	template <typename T = void*> T& ChoppedOffPart() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& ReducedHealthCoef() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor(void* Part) {
		return ((T (*)(BladesChopperDamage*, void*))(Il2CppBase() + 0x1DC69C))(this, Part);
	}
	template <typename T = void*> T get_ChoppedOffPart() {
		return ((T (*)(BladesChopperDamage*))(Il2CppBase() + 0x1DC6D4))(this);
	}
	template <typename T = void> T set_ChoppedOffPart(void* value) {
		return ((T (*)(BladesChopperDamage*, void*))(Il2CppBase() + 0x1DC6C4))(this, value);
	}
	template <typename T = float> T get_ReducedHealthCoef() {
		return ((T (*)(BladesChopperDamage*))(Il2CppBase() + 0x1DC6DC))(this);
	}
	template <typename T = void> T set_ReducedHealthCoef(float value) {
		return ((T (*)(BladesChopperDamage*, float))(Il2CppBase() + 0x1DC6CC))(this, value);
	}
};
