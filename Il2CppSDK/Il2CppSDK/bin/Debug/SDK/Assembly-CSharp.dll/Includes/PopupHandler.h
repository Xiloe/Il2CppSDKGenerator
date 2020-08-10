#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PopupHandler
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78904);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(PopupHandler*, void*, void*))(Il2CppBase() + 0x209E4C))(this, object, method);
	}
	template <typename T = void> T Invoke(void* inPopup, void* inResult) {
		return ((T (*)(PopupHandler*, void*, void*))(Il2CppBase() + 0x209E60))(this, inPopup, inResult);
	}
	template <typename T = void*> T BeginInvoke(void* inPopup, void* inResult, void* callback, void* object) {
		return ((T (*)(PopupHandler*, void*, void*, void*, void*))(Il2CppBase() + 0x209F24))(this, inPopup, inResult, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(PopupHandler*, void*))(Il2CppBase() + 0x209FEC))(this, result);
	}
};
