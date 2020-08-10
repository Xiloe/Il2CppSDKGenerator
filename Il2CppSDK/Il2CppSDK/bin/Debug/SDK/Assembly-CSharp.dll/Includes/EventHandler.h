#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventHandler
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(EventHandler*, void*, void*))(Il2CppBase() + 0x31335C))(this, object, method);
	}
	template <typename T = void> T Invoke(Il2CppString* Name, void* state) {
		return ((T (*)(EventHandler*, Il2CppString*, void*))(Il2CppBase() + 0x32BBC0))(this, Name, state);
	}
	template <typename T = void*> T BeginInvoke(Il2CppString* Name, void* state, void* callback, void* object) {
		return ((T (*)(EventHandler*, Il2CppString*, void*, void*, void*))(Il2CppBase() + 0x32BCE0))(this, Name, state, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(EventHandler*, void*))(Il2CppBase() + 0x32BDA8))(this, result);
	}
};
