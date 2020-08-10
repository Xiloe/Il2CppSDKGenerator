#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PPIInventoryList
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79658);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& Items() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<void*>*> T& Weapons() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PPIInventoryList*))(Il2CppBase() + 0x206ECC))(this);
	}
	template <typename T = bool> T ContainsWeapon(void* weapon) {
		return ((T (*)(PPIInventoryList*, void*))(Il2CppBase() + 0x1ED270))(this, weapon);
	}
	template <typename T = int32_t> T ContainsItem(void* item) {
		return ((T (*)(PPIInventoryList*, void*))(Il2CppBase() + 0x20A300))(this, item);
	}
};
