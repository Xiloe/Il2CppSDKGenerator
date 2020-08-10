#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpecialObject
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& sprite() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& objType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& obj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& highlight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SpecialObject*))(Il2CppBase() + 0x3B8084))(this);
	}
	template <typename T = bool> T get_used() {
		return ((T (*)(SpecialObject*))(Il2CppBase() + 0x3B9680))(this);
	}
	template <typename T = void> T Use(void* inObj) {
		return ((T (*)(SpecialObject*, void*))(Il2CppBase() + 0x3B9694))(this, inObj);
	}
	template <typename T = void> T Free() {
		return ((T (*)(SpecialObject*))(Il2CppBase() + 0x3B9D5C))(this);
	}
};
