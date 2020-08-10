#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CryptoUtils
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78D34);
	}
	// Fields
	template <typename T = void*> static T& ms_SHA1Provider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& ms_MD5Provider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CryptoUtils*))(Il2CppBase() + 0x2E54FC))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E5504))(0);
	}
	template <typename T = Il2CppString*> static T CalcSHA1Hash(Il2CppString* input) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2E55D0))(0, input);
	}
	template <typename T = Il2CppString*> static T CalcMD5Hash(Il2CppString* input) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2E57F0))(0, input);
	}
	template <typename T = Il2CppArray<void*>*> static T CalcMD5HashAsBytes(Il2CppString* input) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2E5A10))(0, input);
	}
};
