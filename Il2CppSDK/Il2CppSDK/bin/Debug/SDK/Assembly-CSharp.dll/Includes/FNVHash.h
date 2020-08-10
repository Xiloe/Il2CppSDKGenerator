#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FNVHash
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(FNVHash*))(Il2CppBase() + 0x318DE0))(this);
	}
	template <typename T = int32_t> static T CalcFNVHash(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x318DE8))(0, str);
	}
	template <typename T = int32_t> static T CalcModFNVHash(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x318E6C))(0, str);
	}
};
