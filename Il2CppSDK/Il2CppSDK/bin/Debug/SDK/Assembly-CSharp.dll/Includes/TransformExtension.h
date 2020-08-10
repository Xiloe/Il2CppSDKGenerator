#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TransformExtension
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Methods
	template <typename T = void*> static T GetChildComponent(void* trans, Il2CppString* name) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0xA1256C))(0, trans, name);
	}
	template <typename T = void*> static T FindChildByName(void* trans, Il2CppString* name) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x271A30))(0, trans, name);
	}
};
