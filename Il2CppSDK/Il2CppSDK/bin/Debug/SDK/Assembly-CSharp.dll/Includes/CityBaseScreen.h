#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CityBaseScreen
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78AD4);
	}
	// Fields
	template <typename T = void*> T& m_CloseDelegate() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor(void* screen) {
		return ((T (*)(CityBaseScreen*, void*))(Il2CppBase() + 0x291AF8))(this, screen);
	}
	template <typename T = void> T Show(void* inCloseDelegate) {
		return ((T (*)(CityBaseScreen*, void*))(Il2CppBase() + 0x291DF4))(this, inCloseDelegate);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(CityBaseScreen*))(Il2CppBase() + 0x292664))(this);
	}
	template <typename T = void> T ProcessBackButton() {
		return ((T (*)(CityBaseScreen*))(Il2CppBase() + 0x297724))(this);
	}
	template <typename T = void*> T GetCloseDelegate() {
		return ((T (*)(CityBaseScreen*))(Il2CppBase() + 0x297738))(this);
	}
};
