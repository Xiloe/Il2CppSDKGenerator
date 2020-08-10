#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FontTextureRebuildCallback
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(FontTextureRebuildCallback*, void*, void*))(Il2CppBase() + 0x8FF5E4))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(FontTextureRebuildCallback*))(Il2CppBase() + 0x8FF554))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(FontTextureRebuildCallback*, void*, void*))(Il2CppBase() + 0x8FF604))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(FontTextureRebuildCallback*, void*))(Il2CppBase() + 0x8FF630))(this, result);
	}
};
