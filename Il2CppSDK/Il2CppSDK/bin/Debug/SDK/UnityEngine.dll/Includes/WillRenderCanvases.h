#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WillRenderCanvases
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(WillRenderCanvases*, void*, void*))(Il2CppBase() + 0x8F3CD8))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(WillRenderCanvases*))(Il2CppBase() + 0x8F3C48))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(WillRenderCanvases*, void*, void*))(Il2CppBase() + 0x8F3CF8))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(WillRenderCanvases*, void*))(Il2CppBase() + 0x8F3D24))(this, result);
	}
};
