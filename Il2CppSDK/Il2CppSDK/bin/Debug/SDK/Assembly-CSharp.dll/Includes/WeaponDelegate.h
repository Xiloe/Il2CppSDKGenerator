#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(WeaponDelegate*, void*, void*))(Il2CppBase() + 0x1FD024))(this, object, method);
	}
	template <typename T = void> T Invoke(void* weapon) {
		return ((T (*)(WeaponDelegate*, void*))(Il2CppBase() + 0x1F92C8))(this, weapon);
	}
	template <typename T = void*> T BeginInvoke(void* weapon, void* callback, void* object) {
		return ((T (*)(WeaponDelegate*, void*, void*, void*))(Il2CppBase() + 0x1FD048))(this, weapon, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(WeaponDelegate*, void*))(Il2CppBase() + 0x1FD104))(this, result);
	}
};
