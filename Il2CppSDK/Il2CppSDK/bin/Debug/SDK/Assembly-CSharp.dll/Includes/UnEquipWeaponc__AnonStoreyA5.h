#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnEquipWeaponcAnonStoreyA5
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& removeItem() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(UnEquipWeaponcAnonStoreyA5*))(Il2CppBase() + 0x2430B0))(this);
	}
	template <typename T = bool> T m__3B(void* ps) {
		return ((T (*)(UnEquipWeaponcAnonStoreyA5*, void*))(Il2CppBase() + 0x245778))(this, ps);
	}
};
