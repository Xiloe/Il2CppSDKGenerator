#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipAddWeaponcAnonStoreyA8
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EquipAddWeaponcAnonStoreyA8*))(Il2CppBase() + 0x204454))(this);
	}
	template <typename T = bool> T m__3E(void* p) {
		return ((T (*)(EquipAddWeaponcAnonStoreyA8*, void*))(Il2CppBase() + 0x206C2C))(this, p);
	}
};
