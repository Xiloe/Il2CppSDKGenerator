#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CancelDelegate2
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(CancelDelegate2*, void*, void*))(Il2CppBase() + 0x358048))(this, object, method);
	}
	template <typename T = void> T Invoke(void* w) {
		return ((T (*)(CancelDelegate2*, void*))(Il2CppBase() + 0x357890))(this, w);
	}
	template <typename T = void*> T BeginInvoke(void* w, void* callback, void* object) {
		return ((T (*)(CancelDelegate2*, void*, void*, void*))(Il2CppBase() + 0x35805C))(this, w, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(CancelDelegate2*, void*))(Il2CppBase() + 0x358088))(this, result);
	}
};
