#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FocusDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(FocusDelegate*, void*, void*))(Il2CppBase() + 0x361B38))(this, object, method);
	}
	template <typename T = int32_t> T Invoke(int32_t currentFocusID, void* dir) {
		return ((T (*)(FocusDelegate*, int32_t, void*))(Il2CppBase() + 0x361B4C))(this, currentFocusID, dir);
	}
	template <typename T = void*> T BeginInvoke(int32_t currentFocusID, void* dir, void* callback, void* object) {
		return ((T (*)(FocusDelegate*, int32_t, void*, void*, void*))(Il2CppBase() + 0x361BF4))(this, currentFocusID, dir, callback, object);
	}
	template <typename T = int32_t> T EndInvoke(void* result) {
		return ((T (*)(FocusDelegate*, void*))(Il2CppBase() + 0x361CD4))(this, result);
	}
};
