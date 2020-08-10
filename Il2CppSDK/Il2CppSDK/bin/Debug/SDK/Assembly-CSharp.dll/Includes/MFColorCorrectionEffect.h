#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MFColorCorrectionEffect
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& Brightness() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Contrast() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Saturation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& R_offs() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& G_offs() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& B_offs() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& Hue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MFColorCorrectionEffect*))(Il2CppBase() + 0x3E9020))(this);
	}
	template <typename T = void*> T CalcSaturationMatrix(float sat) {
		return ((T (*)(MFColorCorrectionEffect*, float))(Il2CppBase() + 0x3E9038))(this, sat);
	}
	template <typename T = void*> T ColorOffsetMatrix(float rOffs, float gOffs, float bOffs) {
		return ((T (*)(MFColorCorrectionEffect*, float, float, float))(Il2CppBase() + 0x3E92E4))(this, rOffs, gOffs, bOffs);
	}
	template <typename T = void*> T ColorScaleMatrix(float r, float g, float b) {
		return ((T (*)(MFColorCorrectionEffect*, float, float, float))(Il2CppBase() + 0x3E93F8))(this, r, g, b);
	}
	template <typename T = void*> T ColorContrastMatrix(float c) {
		return ((T (*)(MFColorCorrectionEffect*, float))(Il2CppBase() + 0x3E950C))(this, c);
	}
	template <typename T = void*> T HueShiftMatrix(float value) {
		return ((T (*)(MFColorCorrectionEffect*, float))(Il2CppBase() + 0x3E98B4))(this, value);
	}
	template <typename T = void> T OnRenderImage(void* source, void* destination) {
		return ((T (*)(MFColorCorrectionEffect*, void*, void*))(Il2CppBase() + 0x3E9B7C))(this, source, destination);
	}
};
