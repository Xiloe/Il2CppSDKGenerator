#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PCMSetPositionCallback
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(PCMSetPositionCallback*, void*, void*))(Il2CppBase() + 0x8EF214))(this, object, method);
	}
	template <typename T = void> T Invoke(int32_t position) {
		return ((T (*)(PCMSetPositionCallback*, int32_t))(Il2CppBase() + 0x8EF124))(this, position);
	}
	template <typename T = void*> T BeginInvoke(int32_t position, void* callback, void* object) {
		return ((T (*)(PCMSetPositionCallback*, int32_t, void*, void*))(Il2CppBase() + 0x8EF238))(this, position, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(PCMSetPositionCallback*, void*))(Il2CppBase() + 0x8EF2F4))(this, result);
	}
};
