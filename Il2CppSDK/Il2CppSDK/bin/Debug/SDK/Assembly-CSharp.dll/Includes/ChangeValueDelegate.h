#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeValueDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(ChangeValueDelegate*, void*, void*))(Il2CppBase() + 0x366D18))(this, object, method);
	}
	template <typename T = void> T Invoke(float v) {
		return ((T (*)(ChangeValueDelegate*, float))(Il2CppBase() + 0x366CA4))(this, v);
	}
	template <typename T = void*> T BeginInvoke(float v, void* callback, void* object) {
		return ((T (*)(ChangeValueDelegate*, float, void*, void*))(Il2CppBase() + 0x366D3C))(this, v, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(ChangeValueDelegate*, void*))(Il2CppBase() + 0x366DF8))(this, result);
	}
};
