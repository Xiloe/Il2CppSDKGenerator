#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifierInt
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(ModifierInt*, void*, void*))(Il2CppBase() + 0x19D228))(this, object, method);
	}
	template <typename T = int32_t> T Invoke(int32_t data) {
		return ((T (*)(ModifierInt*, int32_t))(Il2CppBase() + 0x19D23C))(this, data);
	}
	template <typename T = void*> T BeginInvoke(int32_t data, void* callback, void* object) {
		return ((T (*)(ModifierInt*, int32_t, void*, void*))(Il2CppBase() + 0x19D2BC))(this, data, callback, object);
	}
	template <typename T = int32_t> T EndInvoke(void* result) {
		return ((T (*)(ModifierInt*, void*))(Il2CppBase() + 0x19D378))(this, result);
	}
};
