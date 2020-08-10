#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryRemoveWeaponcAnonStoreyAA
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
		return ((T (*)(InventoryRemoveWeaponcAnonStoreyAA*))(Il2CppBase() + 0x204868))(this);
	}
	template <typename T = bool> T m__40(void* ps) {
		return ((T (*)(InventoryRemoveWeaponcAnonStoreyAA*, void*))(Il2CppBase() + 0x206D64))(this, ps);
	}
	template <typename T = bool> T m__41(void* ps) {
		return ((T (*)(InventoryRemoveWeaponcAnonStoreyAA*, void*))(Il2CppBase() + 0x206D78))(this, ps);
	}
};
