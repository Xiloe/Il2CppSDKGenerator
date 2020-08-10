#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IsProperHit
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(IsProperHit*, void*, void*))(Il2CppBase() + 0x39F208))(this, object, method);
	}
	template <typename T = bool> T Invoke(void* hit, void* zoneHit, bool checkAlsoDead) {
		return ((T (*)(IsProperHit*, void*, void*, bool))(Il2CppBase() + 0x39EB34))(this, hit, zoneHit, checkAlsoDead);
	}
	template <typename T = void*> T BeginInvoke(void* hit, void* zoneHit, bool checkAlsoDead, void* callback, void* object) {
		return ((T (*)(IsProperHit*, void*, void*, bool, void*, void*))(Il2CppBase() + 0x39F21C))(this, hit, zoneHit, checkAlsoDead, callback, object);
	}
	template <typename T = bool> T EndInvoke(void* result) {
		return ((T (*)(IsProperHit*, void*))(Il2CppBase() + 0x39F340))(this, result);
	}
};
