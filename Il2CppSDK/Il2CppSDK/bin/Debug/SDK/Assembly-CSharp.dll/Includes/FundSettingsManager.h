#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FundSettingsManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD789C8);
	}
	// Fields
	template <typename T = void*> static T& s_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(FundSettingsManager*))(Il2CppBase() + 0x322FB0))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x323034))(0);
	}
	template <typename T = void*> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x323038))(0);
	}
	template <typename T = void*> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x3230D0))(0);
	}
};
