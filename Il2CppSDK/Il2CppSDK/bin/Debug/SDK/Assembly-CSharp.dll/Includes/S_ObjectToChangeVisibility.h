#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SObjectToChangeVisibility
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_GObj() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& m_Visible() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& m_Recursive() {
		return *(T*)((uintptr_t)this + 0x5);
	}
	// Methods
	template <typename T = void> T _ctor(void* gObj, bool show, bool recursive) {
		return ((T (*)(SObjectToChangeVisibility*, void*, bool, bool))(Il2CppBase() + 0x3F1BC4))(this, gObj, show, recursive);
	}
};
