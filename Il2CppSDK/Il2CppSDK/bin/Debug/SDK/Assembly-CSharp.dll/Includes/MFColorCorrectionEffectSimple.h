#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MFColorCorrectionEffectSimple
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = float> T& R_offs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& G_offs() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& B_offs() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MFColorCorrectionEffectSimple*))(Il2CppBase() + 0x3EA510))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MFColorCorrectionEffectSimple*))(Il2CppBase() + 0x3EA518))(this);
	}
	template <typename T = void> T OnRenderImage(void* source, void* destination) {
		return ((T (*)(MFColorCorrectionEffectSimple*, void*, void*))(Il2CppBase() + 0x3EA5EC))(this, source, destination);
	}
};
