#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomizeHideDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(CustomizeHideDelegate*, void*, void*))(Il2CppBase() + 0x3712D0))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(CustomizeHideDelegate*))(Il2CppBase() + 0x36F688))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(CustomizeHideDelegate*, void*, void*))(Il2CppBase() + 0x3712F0))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(CustomizeHideDelegate*, void*))(Il2CppBase() + 0x37131C))(this, result);
	}
};
