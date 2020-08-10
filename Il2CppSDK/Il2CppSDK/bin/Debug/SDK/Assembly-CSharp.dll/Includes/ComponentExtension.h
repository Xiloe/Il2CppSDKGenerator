#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ComponentExtension
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = Il2CppString*> static T GetFullName(void* inComponent) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2DAA40))(0, inComponent);
	}
	template <typename T = void*> static T GetComponentNoAlloc(void* inComponent) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0xA07A64))(0, inComponent);
	}
};
