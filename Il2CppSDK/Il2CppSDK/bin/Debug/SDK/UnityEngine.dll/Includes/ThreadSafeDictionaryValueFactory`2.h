#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ThreadSafeDictionaryValueFactory2
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(ThreadSafeDictionaryValueFactory2*, void*, void*))(Il2CppBase() + 0x43E27C))(this, object, method);
	}
	template <typename T = void*> T Invoke(void* key) {
		return ((T (*)(ThreadSafeDictionaryValueFactory2*, void*))(Il2CppBase() + 0x43E290))(this, key);
	}
	template <typename T = void*> T BeginInvoke(void* key, void* callback, void* object) {
		return ((T (*)(ThreadSafeDictionaryValueFactory2*, void*, void*, void*))(Il2CppBase() + 0x43E328))(this, key, callback, object);
	}
	template <typename T = void*> T EndInvoke(void* result) {
		return ((T (*)(ThreadSafeDictionaryValueFactory2*, void*))(Il2CppBase() + 0x43E354))(this, result);
	}
};
