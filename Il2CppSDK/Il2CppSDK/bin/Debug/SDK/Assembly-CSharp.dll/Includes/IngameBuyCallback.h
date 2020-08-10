#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IngameBuyCallback
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(IngameBuyCallback*, void*, void*))(Il2CppBase() + 0x3841F4))(this, object, method);
	}
	template <typename T = void> T Invoke(bool buyPressed) {
		return ((T (*)(IngameBuyCallback*, bool))(Il2CppBase() + 0x384208))(this, buyPressed);
	}
	template <typename T = void*> T BeginInvoke(bool buyPressed, void* callback, void* object) {
		return ((T (*)(IngameBuyCallback*, bool, void*, void*))(Il2CppBase() + 0x384288))(this, buyPressed, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(IngameBuyCallback*, void*))(Il2CppBase() + 0x384344))(this, result);
	}
};
