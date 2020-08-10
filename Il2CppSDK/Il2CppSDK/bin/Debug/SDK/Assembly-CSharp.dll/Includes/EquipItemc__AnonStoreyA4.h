#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipItemcAnonStoreyA4
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
		return ((T (*)(EquipItemcAnonStoreyA4*))(Il2CppBase() + 0x2430A8))(this);
	}
	template <typename T = bool> T m__3A(void* ps) {
		return ((T (*)(EquipItemcAnonStoreyA4*, void*))(Il2CppBase() + 0x245178))(this, ps);
	}
};
