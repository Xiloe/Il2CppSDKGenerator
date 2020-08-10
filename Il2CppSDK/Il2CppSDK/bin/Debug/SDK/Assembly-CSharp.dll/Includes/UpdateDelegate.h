#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(UpdateDelegate*, void*, void*))(Il2CppBase() + 0x364E7C))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(UpdateDelegate*))(Il2CppBase() + 0x36B148))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(UpdateDelegate*, void*, void*))(Il2CppBase() + 0x36B9C8))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(UpdateDelegate*, void*))(Il2CppBase() + 0x36B9F4))(this, result);
	}
};
