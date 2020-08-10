#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnEquipItemcAnonStoreyA6
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
		return ((T (*)(UnEquipItemcAnonStoreyA6*))(Il2CppBase() + 0x2430B8))(this);
	}
	template <typename T = bool> T m__3C(void* ps) {
		return ((T (*)(UnEquipItemcAnonStoreyA6*, void*))(Il2CppBase() + 0x245764))(this, ps);
	}
};
