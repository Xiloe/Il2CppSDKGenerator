#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KeyboardClose
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(KeyboardClose*, void*, void*))(Il2CppBase() + 0x1DAD20))(this, object, method);
	}
	template <typename T = void> T Invoke(void* inInput, Il2CppString* inText, bool inInputCanceled) {
		return ((T (*)(KeyboardClose*, void*, Il2CppString*, bool))(Il2CppBase() + 0x1DABA4))(this, inInput, inText, inInputCanceled);
	}
	template <typename T = void*> T BeginInvoke(void* inInput, Il2CppString* inText, bool inInputCanceled, void* callback, void* object) {
		return ((T (*)(KeyboardClose*, void*, Il2CppString*, bool, void*, void*))(Il2CppBase() + 0x1DAD34))(this, inInput, inText, inInputCanceled, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(KeyboardClose*, void*))(Il2CppBase() + 0x1DADFC))(this, result);
	}
};
