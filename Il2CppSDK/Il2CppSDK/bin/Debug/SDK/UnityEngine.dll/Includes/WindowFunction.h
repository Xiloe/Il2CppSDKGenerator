#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WindowFunction
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(WindowFunction*, void*, void*))(Il2CppBase() + 0x908144))(this, object, method);
	}
	template <typename T = void> T Invoke(int32_t id) {
		return ((T (*)(WindowFunction*, int32_t))(Il2CppBase() + 0x90783C))(this, id);
	}
	template <typename T = void*> T BeginInvoke(int32_t id, void* callback, void* object) {
		return ((T (*)(WindowFunction*, int32_t, void*, void*))(Il2CppBase() + 0x908168))(this, id, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(WindowFunction*, void*))(Il2CppBase() + 0x908224))(this, result);
	}
};
