#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PopUpDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(PopUpDelegate*, void*, void*))(Il2CppBase() + 0x365640))(this, object, method);
	}
	template <typename T = void> T Invoke(int32_t i) {
		return ((T (*)(PopUpDelegate*, int32_t))(Il2CppBase() + 0x3653D0))(this, i);
	}
	template <typename T = void*> T BeginInvoke(int32_t i, void* callback, void* object) {
		return ((T (*)(PopUpDelegate*, int32_t, void*, void*))(Il2CppBase() + 0x365664))(this, i, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(PopUpDelegate*, void*))(Il2CppBase() + 0x365720))(this, result);
	}
};
