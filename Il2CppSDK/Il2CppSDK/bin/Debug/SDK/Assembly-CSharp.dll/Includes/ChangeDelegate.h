#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(ChangeDelegate*, void*, void*))(Il2CppBase() + 0x435CE0))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(ChangeDelegate*))(Il2CppBase() + 0x435CF4))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(ChangeDelegate*, void*, void*))(Il2CppBase() + 0x435D84))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(ChangeDelegate*, void*))(Il2CppBase() + 0x435DB0))(this, result);
	}
};
