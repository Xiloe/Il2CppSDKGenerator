#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerActivated
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(TriggerActivated*, void*, void*))(Il2CppBase() + 0x28BB54))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(TriggerActivated*))(Il2CppBase() + 0x28BF60))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(TriggerActivated*, void*, void*))(Il2CppBase() + 0x28BFFC))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(TriggerActivated*, void*))(Il2CppBase() + 0x28C028))(this, result);
	}
};
