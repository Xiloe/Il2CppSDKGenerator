#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DragEvent
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* object, void* method) {
		return ((T (*)(DragEvent*, void*, void*))(Il2CppBase() + 0x2980C8))(this, object, method);
	}
	template <typename T = void> T Invoke(Il2CppVector3 dragVect, bool finished) {
		return ((T (*)(DragEvent*, Il2CppVector3, bool))(Il2CppBase() + 0x2ACEBC))(this, dragVect, finished);
	}
	template <typename T = void*> T BeginInvoke(Il2CppVector3 dragVect, bool finished, void* callback, void* object) {
		return ((T (*)(DragEvent*, Il2CppVector3, bool, void*, void*))(Il2CppBase() + 0x2AD060))(this, dragVect, finished, callback, object);
	}
	template <typename T = void> T EndInvoke(void* result) {
		return ((T (*)(DragEvent*, void*))(Il2CppBase() + 0x2AD144))(this, result);
	}
};
