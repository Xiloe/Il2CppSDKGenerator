#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ObjectUseDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(ObjectUseDelegate*, void*, void*))(Il2CppBase() + 0x1FCE5C))(this, object, method);
	}
	template <typename T = void> T Invoke(void* obj) {
		return ((T (*)(ObjectUseDelegate*, void*))(Il2CppBase() + 0x1FB4A4))(this, obj);
	}
	template <typename T = void*> T BeginInvoke(void* obj, void* callback, void* object) {
		return ((T (*)(ObjectUseDelegate*, void*, void*, void*))(Il2CppBase() + 0x1FCE70))(this, obj, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(ObjectUseDelegate*, void*))(Il2CppBase() + 0x1FCE9C))(this, result);
	}
};
