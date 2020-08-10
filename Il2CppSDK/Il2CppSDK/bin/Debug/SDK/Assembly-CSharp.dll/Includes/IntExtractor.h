#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IntExtractor
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(IntExtractor*, void*, void*))(Il2CppBase() + 0x262A94))(this, object, method);
	}
	template <typename T = int32_t> T Invoke(void* inData) {
		return ((T (*)(IntExtractor*, void*))(Il2CppBase() + 0x263004))(this, inData);
	}
	template <typename T = void*> T BeginInvoke(void* inData, void* callback, void* object) {
		return ((T (*)(IntExtractor*, void*, void*, void*))(Il2CppBase() + 0x2639C0))(this, inData, callback, object);
	}
	template <typename T = int32_t> T EndInvoke(void* result) {
		return ((T (*)(IntExtractor*, void*))(Il2CppBase() + 0x2639EC))(this, result);
	}
};
