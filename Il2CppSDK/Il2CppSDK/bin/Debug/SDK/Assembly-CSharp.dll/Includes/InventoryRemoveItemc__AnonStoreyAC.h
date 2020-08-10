#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryRemoveItemcAnonStoreyAC
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
		return ((T (*)(InventoryRemoveItemcAnonStoreyAC*))(Il2CppBase() + 0x204F04))(this);
	}
	template <typename T = bool> T m__44(void* ps) {
		return ((T (*)(InventoryRemoveItemcAnonStoreyAC*, void*))(Il2CppBase() + 0x206D3C))(this, ps);
	}
	template <typename T = bool> T m__45(void* ps) {
		return ((T (*)(InventoryRemoveItemcAnonStoreyAC*, void*))(Il2CppBase() + 0x206D50))(this, ps);
	}
};
