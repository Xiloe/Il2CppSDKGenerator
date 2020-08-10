#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraMoveEvent
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(CameraMoveEvent*, void*, void*))(Il2CppBase() + 0x298CB4))(this, object, method);
	}
	template <typename T = void> T Invoke(Il2CppVector3 pos) {
		return ((T (*)(CameraMoveEvent*, Il2CppVector3))(Il2CppBase() + 0x298B04))(this, pos);
	}
	template <typename T = void*> T BeginInvoke(Il2CppVector3 pos, void* callback, void* object) {
		return ((T (*)(CameraMoveEvent*, Il2CppVector3, void*, void*))(Il2CppBase() + 0x298D1C))(this, pos, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(CameraMoveEvent*, void*))(Il2CppBase() + 0x298DDC))(this, result);
	}
};
