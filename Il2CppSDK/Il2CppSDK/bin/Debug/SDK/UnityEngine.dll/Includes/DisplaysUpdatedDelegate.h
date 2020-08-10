#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DisplaysUpdatedDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(DisplaysUpdatedDelegate*, void*, void*))(Il2CppBase() + 0x8FA630))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(DisplaysUpdatedDelegate*))(Il2CppBase() + 0x8FA5A0))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(DisplaysUpdatedDelegate*, void*, void*))(Il2CppBase() + 0x8FA650))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(DisplaysUpdatedDelegate*, void*))(Il2CppBase() + 0x8FA67C))(this, result);
	}
};
