#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SaveGameCryptUtl
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78F44);
	}
	// Fields
	template <typename T = Il2CppString*> static T& PASSWORD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& ms_Encryptor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SaveGameCryptUtl*))(Il2CppBase() + 0x2273E4))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2273EC))(0);
	}
	template <typename T = Il2CppString*> static T Encrypt(Il2CppString* input) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2274B8))(0, input);
	}
	template <typename T = Il2CppString*> static T Decrypt(Il2CppString* input) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x22758C))(0, input);
	}
};
