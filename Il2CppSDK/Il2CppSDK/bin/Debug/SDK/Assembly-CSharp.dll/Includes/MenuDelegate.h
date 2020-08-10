#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MenuDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(MenuDelegate*, void*, void*))(Il2CppBase() + 0x224018))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(MenuDelegate*))(Il2CppBase() + 0x223978))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(MenuDelegate*, void*, void*))(Il2CppBase() + 0x224038))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(MenuDelegate*, void*))(Il2CppBase() + 0x224064))(this, result);
	}
};
