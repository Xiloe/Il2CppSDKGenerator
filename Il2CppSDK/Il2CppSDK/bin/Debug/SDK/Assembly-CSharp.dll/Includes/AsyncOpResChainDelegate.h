#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AsyncOpResChainDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(AsyncOpResChainDelegate*, void*, void*))(Il2CppBase() + 0x2D1668))(this, object, method);
	}
	template <typename T = void> T Invoke(void* res) {
		return ((T (*)(AsyncOpResChainDelegate*, void*))(Il2CppBase() + 0x2D15D0))(this, res);
	}
	template <typename T = void*> T BeginInvoke(void* res, void* callback, void* object) {
		return ((T (*)(AsyncOpResChainDelegate*, void*, void*, void*))(Il2CppBase() + 0x2D167C))(this, res, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(AsyncOpResChainDelegate*, void*))(Il2CppBase() + 0x2D16A8))(this, result);
	}
};
