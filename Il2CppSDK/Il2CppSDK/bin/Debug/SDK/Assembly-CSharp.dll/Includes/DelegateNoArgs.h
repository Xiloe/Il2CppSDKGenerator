#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelegateNoArgs
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(DelegateNoArgs*, void*, void*))(Il2CppBase() + 0x40F0B8))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(DelegateNoArgs*))(Il2CppBase() + 0x40F0CC))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(DelegateNoArgs*, void*, void*))(Il2CppBase() + 0x40F168))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(DelegateNoArgs*, void*))(Il2CppBase() + 0x40F194))(this, result);
	}
};
