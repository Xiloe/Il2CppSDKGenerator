#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SwitchDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(SwitchDelegate*, void*, void*))(Il2CppBase() + 0x367324))(this, object, method);
	}
	template <typename T = void> T Invoke(bool switchValue) {
		return ((T (*)(SwitchDelegate*, bool))(Il2CppBase() + 0x3672B0))(this, switchValue);
	}
	template <typename T = void*> T BeginInvoke(bool switchValue, void* callback, void* object) {
		return ((T (*)(SwitchDelegate*, bool, void*, void*))(Il2CppBase() + 0x367348))(this, switchValue, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(SwitchDelegate*, void*))(Il2CppBase() + 0x367404))(this, result);
	}
};
