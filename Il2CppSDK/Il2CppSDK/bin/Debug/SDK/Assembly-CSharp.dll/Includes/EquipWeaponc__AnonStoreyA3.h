#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipWeaponcAnonStoreyA3
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& remIt() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(EquipWeaponcAnonStoreyA3*))(Il2CppBase() + 0x2430A0))(this);
	}
	template <typename T = bool> T m__39(void* ps) {
		return ((T (*)(EquipWeaponcAnonStoreyA3*, void*))(Il2CppBase() + 0x24518C))(this, ps);
	}
};
