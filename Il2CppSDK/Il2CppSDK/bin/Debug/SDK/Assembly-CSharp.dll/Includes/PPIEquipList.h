#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PPIEquipList
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7965C);
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
		return ((T (*)(PPIEquipList*))(Il2CppBase() + 0x206FAC))(this);
	}
	template <typename T = bool> T ContainsWeapon(void* weapon) {
		return ((T (*)(PPIEquipList*, void*))(Il2CppBase() + 0x20A004))(this, weapon);
	}
	template <typename T = bool> T ContainsItemWithZeroCount() {
		return ((T (*)(PPIEquipList*))(Il2CppBase() + 0x20A104))(this);
	}
	template <typename T = bool> T ContainsItem(void* item) {
		return ((T (*)(PPIEquipList*, void*))(Il2CppBase() + 0x20A200))(this, item);
	}
	template <typename T = int32_t> T GetItemIndex(void* item) {
		return ((T (*)(PPIEquipList*, void*))(Il2CppBase() + 0x203B0C))(this, item);
	}
};
