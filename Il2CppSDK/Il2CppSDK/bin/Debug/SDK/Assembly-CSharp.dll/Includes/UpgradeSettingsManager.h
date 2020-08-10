#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpgradeSettingsManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79710);
	}
	// Fields
	template <typename T = void*> static T& s_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(UpgradeSettingsManager*))(Il2CppBase() + 0x279A38))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x279ABC))(0);
	}
	template <typename T = void*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x279AC0))(0);
	}
	template <typename T = void*> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x279B58))(0);
	}
};
