#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpgradeSettings
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& MoneyCost() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& GoldCost() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& UpgradeType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(UpgradeSettings*))(Il2CppBase() + 0x27993C))(this);
	}
	template <typename T = Il2CppString*> T GetSettingsClass() {
		return ((T (*)(UpgradeSettings*))(Il2CppBase() + 0x2799C0))(this);
	}
};
