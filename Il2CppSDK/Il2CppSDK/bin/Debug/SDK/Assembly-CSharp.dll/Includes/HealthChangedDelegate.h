#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HealthChangedDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(HealthChangedDelegate*, void*, void*))(Il2CppBase() + 0x1A7FB4))(this, object, method);
	}
	template <typename T = void> T Invoke(void* Human, float HealthChange) {
		return ((T (*)(HealthChangedDelegate*, void*, float))(Il2CppBase() + 0x1A286C))(this, Human, HealthChange);
	}
	template <typename T = void*> T BeginInvoke(void* Human, float HealthChange, void* callback, void* object) {
		return ((T (*)(HealthChangedDelegate*, void*, float, void*, void*))(Il2CppBase() + 0x1A7FC8))(this, Human, HealthChange, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(HealthChangedDelegate*, void*))(Il2CppBase() + 0x1A8090))(this, result);
	}
};
