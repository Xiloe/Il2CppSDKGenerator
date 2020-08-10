#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HideDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(HideDelegate*, void*, void*))(Il2CppBase() + 0x2EF520))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(HideDelegate*))(Il2CppBase() + 0x2ED194))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(HideDelegate*, void*, void*))(Il2CppBase() + 0x2EF540))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(HideDelegate*, void*))(Il2CppBase() + 0x2EF56C))(this, result);
	}
};
