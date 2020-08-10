#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OptionsHideDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(OptionsHideDelegate*, void*, void*))(Il2CppBase() + 0x384570))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(OptionsHideDelegate*))(Il2CppBase() + 0x38D82C))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(OptionsHideDelegate*, void*, void*))(Il2CppBase() + 0x38FCE8))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(OptionsHideDelegate*, void*))(Il2CppBase() + 0x38FD14))(this, result);
	}
};
