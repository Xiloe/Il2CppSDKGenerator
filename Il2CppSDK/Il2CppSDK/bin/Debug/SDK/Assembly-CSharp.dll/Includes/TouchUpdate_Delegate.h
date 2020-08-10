#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TouchUpdateDelegate
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(TouchUpdateDelegate*, void*, void*))(Il2CppBase() + 0x1FCEA8))(this, object, method);
	}
	template <typename T = void> T Invoke(Il2CppVector2 pos, Il2CppVector2 delta) {
		return ((T (*)(TouchUpdateDelegate*, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x1FB53C))(this, pos, delta);
	}
	template <typename T = void*> T BeginInvoke(Il2CppVector2 pos, Il2CppVector2 delta, void* callback, void* object) {
		return ((T (*)(TouchUpdateDelegate*, Il2CppVector2, Il2CppVector2, void*, void*))(Il2CppBase() + 0x1FCF40))(this, pos, delta, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(TouchUpdateDelegate*, void*))(Il2CppBase() + 0x1FD018))(this, result);
	}
};
