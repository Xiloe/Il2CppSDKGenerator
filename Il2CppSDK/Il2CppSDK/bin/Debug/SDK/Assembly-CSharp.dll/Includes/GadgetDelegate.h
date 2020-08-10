#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GadgetDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(GadgetDelegate*, void*, void*))(Il2CppBase() + 0x1FCD70))(this, object, method);
	}
	template <typename T = void> T Invoke(void* item) {
		return ((T (*)(GadgetDelegate*, void*))(Il2CppBase() + 0x1F8D04))(this, item);
	}
	template <typename T = void*> T BeginInvoke(void* item, void* callback, void* object) {
		return ((T (*)(GadgetDelegate*, void*, void*, void*))(Il2CppBase() + 0x1FCD94))(this, item, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(GadgetDelegate*, void*))(Il2CppBase() + 0x1FCE50))(this, result);
	}
};
