#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LogCallback
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(LogCallback*, void*, void*))(Il2CppBase() + 0x8EDCA0))(this, object, method);
	}
	template <typename T = void> T Invoke(Il2CppString* condition, Il2CppString* stackTrace, void* type) {
		return ((T (*)(LogCallback*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x8ED91C))(this, condition, stackTrace, type);
	}
	template <typename T = void*> T BeginInvoke(Il2CppString* condition, Il2CppString* stackTrace, void* type, void* callback, void* object) {
		return ((T (*)(LogCallback*, Il2CppString*, Il2CppString*, void*, void*, void*))(Il2CppBase() + 0x8EDD08))(this, condition, stackTrace, type, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(LogCallback*, void*))(Il2CppBase() + 0x8EDDD0))(this, result);
	}
};
