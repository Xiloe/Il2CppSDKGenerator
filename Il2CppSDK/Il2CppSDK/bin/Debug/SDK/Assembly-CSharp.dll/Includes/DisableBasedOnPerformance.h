#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DisableBasedOnPerformance
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& UseForDevicePerformance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DisableBasedOnPerformance*))(Il2CppBase() + 0x3061E8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DisableBasedOnPerformance*))(Il2CppBase() + 0x3061F8))(this);
	}
};
