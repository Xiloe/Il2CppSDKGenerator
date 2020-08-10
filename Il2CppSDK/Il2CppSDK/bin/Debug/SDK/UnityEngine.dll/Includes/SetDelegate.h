#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(SetDelegate*, void*, void*))(Il2CppBase() + 0x8D3FC8))(this, object, method);
	}
	template <typename T = void> T Invoke(void* source, void* value) {
		return ((T (*)(SetDelegate*, void*, void*))(Il2CppBase() + 0x8D4394))(this, source, value);
	}
	template <typename T = void*> T BeginInvoke(void* source, void* value, void* callback, void* object) {
		return ((T (*)(SetDelegate*, void*, void*, void*, void*))(Il2CppBase() + 0x8D4458))(this, source, value, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(SetDelegate*, void*))(Il2CppBase() + 0x8D4490))(this, result);
	}
};
