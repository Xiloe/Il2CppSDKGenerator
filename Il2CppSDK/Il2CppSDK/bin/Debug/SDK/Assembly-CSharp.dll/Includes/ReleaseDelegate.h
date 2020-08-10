#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReleaseDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(ReleaseDelegate*, void*, void*))(Il2CppBase() + 0x358094))(this, object, method);
	}
	template <typename T = void> T Invoke(bool inside) {
		return ((T (*)(ReleaseDelegate*, bool))(Il2CppBase() + 0x357820))(this, inside);
	}
	template <typename T = void*> T BeginInvoke(bool inside, void* callback, void* object) {
		return ((T (*)(ReleaseDelegate*, bool, void*, void*))(Il2CppBase() + 0x3580B8))(this, inside, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(ReleaseDelegate*, void*))(Il2CppBase() + 0x358174))(this, result);
	}
};
