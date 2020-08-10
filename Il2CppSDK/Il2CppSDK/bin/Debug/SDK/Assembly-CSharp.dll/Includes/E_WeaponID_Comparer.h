#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EWeaponIDComparer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78D0C);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EWeaponIDComparer*))(Il2CppBase() + 0x30D7E4))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x30D7EC))(0);
	}
	template <typename T = bool> T Equals(void* x, void* y) {
		return ((T (*)(EWeaponIDComparer*, void*, void*))(Il2CppBase() + 0x30D880))(this, x, y);
	}
	template <typename T = int32_t> T GetHashCode(void* x) {
		return ((T (*)(EWeaponIDComparer*, void*))(Il2CppBase() + 0x30D890))(this, x);
	}
};
