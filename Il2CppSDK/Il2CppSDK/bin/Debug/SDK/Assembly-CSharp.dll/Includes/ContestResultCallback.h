#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContestResultCallback
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(ContestResultCallback*, void*, void*))(Il2CppBase() + 0x384048))(this, object, method);
	}
	template <typename T = void> T Invoke(void* contestObject, void* result) {
		return ((T (*)(ContestResultCallback*, void*, void*))(Il2CppBase() + 0x38405C))(this, contestObject, result);
	}
	template <typename T = void*> T BeginInvoke(void* contestObject, void* result, void* callback, void* object) {
		return ((T (*)(ContestResultCallback*, void*, void*, void*, void*))(Il2CppBase() + 0x384120))(this, contestObject, result, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(ContestResultCallback*, void*))(Il2CppBase() + 0x3841E8))(this, result);
	}
};
