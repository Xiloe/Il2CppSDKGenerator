#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PPIUpgradeList
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79660);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& Upgrades() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PPIUpgradeList*))(Il2CppBase() + 0x207094))(this);
	}
	template <typename T = bool> T ContainsUpgrade(void* id) {
		return ((T (*)(PPIUpgradeList*, void*))(Il2CppBase() + 0x20A5E8))(this, id);
	}
};
