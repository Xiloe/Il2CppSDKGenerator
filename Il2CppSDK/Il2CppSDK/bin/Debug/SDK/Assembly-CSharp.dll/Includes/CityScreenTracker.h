#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CityScreenTracker
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78AE8);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& m_ActiveScreens() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CityScreenTracker*))(Il2CppBase() + 0x2ADC78))(this);
	}
	template <typename T = bool> T AnyScreenActive() {
		return ((T (*)(CityScreenTracker*))(Il2CppBase() + 0x2B17A8))(this);
	}
	template <typename T = void> T ScreenActivated(void* screen) {
		return ((T (*)(CityScreenTracker*, void*))(Il2CppBase() + 0x2975E4))(this, screen);
	}
	template <typename T = void> T ScreenDeactivated(void* screen) {
		return ((T (*)(CityScreenTracker*, void*))(Il2CppBase() + 0x297684))(this, screen);
	}
	template <typename T = void> T ProcessBackButton() {
		return ((T (*)(CityScreenTracker*))(Il2CppBase() + 0x2B19CC))(this);
	}
};
