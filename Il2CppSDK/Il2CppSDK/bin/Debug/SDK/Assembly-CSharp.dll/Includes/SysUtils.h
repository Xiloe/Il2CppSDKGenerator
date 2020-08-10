#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SysUtils
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SysUtils*))(Il2CppBase() + 0x26973C))(this);
	}
	template <typename T = Il2CppString*> static T GetUniqueDeviceID() {
		return ((T (*)(void *))(Il2CppBase() + 0x269744))(0);
	}
	template <typename T = Il2CppString*> static T GetMacAddress() {
		return ((T (*)(void *))(Il2CppBase() + 0x26990C))(0);
	}
};
