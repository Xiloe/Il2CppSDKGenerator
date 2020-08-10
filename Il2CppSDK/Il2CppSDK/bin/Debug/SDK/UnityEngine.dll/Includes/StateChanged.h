#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StateChanged
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(StateChanged*, void*, void*))(Il2CppBase() + 0x8F8B88))(this, object, method);
	}
	template <typename T = void> T Invoke(void* sphere) {
		return ((T (*)(StateChanged*, void*))(Il2CppBase() + 0x8F8A38))(this, sphere);
	}
	template <typename T = void*> T BeginInvoke(void* sphere, void* callback, void* object) {
		return ((T (*)(StateChanged*, void*, void*, void*))(Il2CppBase() + 0x8F8BD4))(this, sphere, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(StateChanged*, void*))(Il2CppBase() + 0x8F8C94))(this, result);
	}
};
