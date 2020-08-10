#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponSettingsManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78A3C);
	}
	// Fields
	template <typename T = void*> static T& s_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(WeaponSettingsManager*))(Il2CppBase() + 0x28560C))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x285690))(0);
	}
	template <typename T = void*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x27F0C4))(0);
	}
	template <typename T = void*> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x285694))(0);
	}
};
