#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReleaseDelegate2
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(ReleaseDelegate2*, void*, void*))(Il2CppBase() + 0x3557A4))(this, object, method);
	}
	template <typename T = void> T Invoke(void* w) {
		return ((T (*)(ReleaseDelegate2*, void*))(Il2CppBase() + 0x357A50))(this, w);
	}
	template <typename T = void*> T BeginInvoke(void* w, void* callback, void* object) {
		return ((T (*)(ReleaseDelegate2*, void*, void*, void*))(Il2CppBase() + 0x358180))(this, w, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(ReleaseDelegate2*, void*))(Il2CppBase() + 0x3581AC))(this, result);
	}
};
