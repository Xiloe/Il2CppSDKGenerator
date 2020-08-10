#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryAddItemcAnonStoreyAB
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
		return ((T (*)(InventoryAddItemcAnonStoreyAB*))(Il2CppBase() + 0x204CD8))(this);
	}
	template <typename T = bool> T m__42(void* p) {
		return ((T (*)(InventoryAddItemcAnonStoreyAB*, void*))(Il2CppBase() + 0x206D00))(this, p);
	}
	template <typename T = bool> T m__43(void* p) {
		return ((T (*)(InventoryAddItemcAnonStoreyAB*, void*))(Il2CppBase() + 0x206D14))(this, p);
	}
};
