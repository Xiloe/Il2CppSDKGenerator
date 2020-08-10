#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifierFloat
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(ModifierFloat*, void*, void*))(Il2CppBase() + 0x19D0A4))(this, object, method);
	}
	template <typename T = float> T Invoke(float data) {
		return ((T (*)(ModifierFloat*, float))(Il2CppBase() + 0x19D0B8))(this, data);
	}
	template <typename T = void*> T BeginInvoke(float data, void* callback, void* object) {
		return ((T (*)(ModifierFloat*, float, void*, void*))(Il2CppBase() + 0x19D138))(this, data, callback, object);
	}
	template <typename T = float> T EndInvoke(void* result) {
		return ((T (*)(ModifierFloat*, void*))(Il2CppBase() + 0x19D1F4))(this, result);
	}
};
