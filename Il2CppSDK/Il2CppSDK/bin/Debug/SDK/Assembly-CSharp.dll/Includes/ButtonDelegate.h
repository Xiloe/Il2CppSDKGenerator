#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ButtonDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(ButtonDelegate*, void*, void*))(Il2CppBase() + 0x1FCD18))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(ButtonDelegate*))(Il2CppBase() + 0x1F85E0))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(ButtonDelegate*, void*, void*))(Il2CppBase() + 0x1FCD38))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(ButtonDelegate*, void*))(Il2CppBase() + 0x1FCD64))(this, result);
	}
};
