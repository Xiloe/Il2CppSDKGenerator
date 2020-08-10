#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IteratorDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(IteratorDelegate*, void*, void*))(Il2CppBase() + 0x927284))(this, object, method);
	}
	template <typename T = bool> T Invoke(void* ps) {
		return ((T (*)(IteratorDelegate*, void*))(Il2CppBase() + 0x927724))(this, ps);
	}
	template <typename T = void*> T BeginInvoke(void* ps, void* callback, void* object) {
		return ((T (*)(IteratorDelegate*, void*, void*, void*))(Il2CppBase() + 0x927B64))(this, ps, callback, object);
	}
	template <typename T = bool> T EndInvoke(void* result) {
		return ((T (*)(IteratorDelegate*, void*))(Il2CppBase() + 0x927B90))(this, result);
	}
};
