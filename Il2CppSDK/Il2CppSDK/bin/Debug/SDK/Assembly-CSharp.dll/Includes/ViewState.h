#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewState
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& Enabled() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& YawAdd() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& PitchAdd() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& SensitivityModifier() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ViewState*))(Il2CppBase() + 0x1FBAE0))(this);
	}
	template <typename T = void> T ZeroInput(bool clearSmooth) {
		return ((T (*)(ViewState*, bool))(Il2CppBase() + 0x1FB094))(this, clearSmooth);
	}
	template <typename T = void> T SetNewRotation(float yaw, float pitch, bool smooth) {
		return ((T (*)(ViewState*, float, float, bool))(Il2CppBase() + 0x1F823C))(this, yaw, pitch, smooth);
	}
};
