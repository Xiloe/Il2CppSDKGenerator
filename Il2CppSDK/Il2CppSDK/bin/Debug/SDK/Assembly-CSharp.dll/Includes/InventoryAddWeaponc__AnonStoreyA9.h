#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryAddWeaponcAnonStoreyA9
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
		return ((T (*)(InventoryAddWeaponcAnonStoreyA9*))(Il2CppBase() + 0x204684))(this);
	}
	template <typename T = bool> T m__3F(void* p) {
		return ((T (*)(InventoryAddWeaponcAnonStoreyA9*, void*))(Il2CppBase() + 0x206D28))(this, p);
	}
};
