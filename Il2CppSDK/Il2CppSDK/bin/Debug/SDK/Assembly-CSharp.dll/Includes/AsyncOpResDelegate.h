#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AsyncOpResDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(AsyncOpResDelegate*, void*, void*))(Il2CppBase() + 0x2D14B0))(this, object, method);
	}
	template <typename T = void> T Invoke(void* res) {
		return ((T (*)(AsyncOpResDelegate*, void*))(Il2CppBase() + 0x2D1418))(this, res);
	}
	template <typename T = void*> T BeginInvoke(void* res, void* callback, void* object) {
		return ((T (*)(AsyncOpResDelegate*, void*, void*, void*))(Il2CppBase() + 0x2D14C4))(this, res, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(AsyncOpResDelegate*, void*))(Il2CppBase() + 0x2D14F0))(this, result);
	}
};
