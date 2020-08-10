#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PPIUpdateDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(PPIUpdateDelegate*, void*, void*))(Il2CppBase() + 0x206DE4))(this, object, method);
	}
	template <typename T = void> T Invoke() {
		return ((T (*)(PPIUpdateDelegate*))(Il2CppBase() + 0x206DF8))(this);
	}
	template <typename T = void*> T BeginInvoke(void* callback, void* object) {
		return ((T (*)(PPIUpdateDelegate*, void*, void*))(Il2CppBase() + 0x206E94))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(PPIUpdateDelegate*, void*))(Il2CppBase() + 0x206EC0))(this, result);
	}
};
