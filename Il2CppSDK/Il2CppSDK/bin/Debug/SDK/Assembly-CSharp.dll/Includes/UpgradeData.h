#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpgradeData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(UpgradeData*))(Il2CppBase() + 0x206044))(this);
	}
};
