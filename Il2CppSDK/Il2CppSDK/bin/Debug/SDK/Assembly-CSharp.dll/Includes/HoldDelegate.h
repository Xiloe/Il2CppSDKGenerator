#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HoldDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(HoldDelegate*, void*, void*))(Il2CppBase() + 0x435DBC))(this, object, method);
	}
	template <typename T = void> T Invoke(int32_t itemIndex, void* itemId) {
		return ((T (*)(HoldDelegate*, int32_t, void*))(Il2CppBase() + 0x435DD0))(this, itemIndex, itemId);
	}
	template <typename T = void*> T BeginInvoke(int32_t itemIndex, void* itemId, void* callback, void* object) {
		return ((T (*)(HoldDelegate*, int32_t, void*, void*, void*))(Il2CppBase() + 0x435E64))(this, itemIndex, itemId, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(HoldDelegate*, void*))(Il2CppBase() + 0x435F28))(this, result);
	}
};
