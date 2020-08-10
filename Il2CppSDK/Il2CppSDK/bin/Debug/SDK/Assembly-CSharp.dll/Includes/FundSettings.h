#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FundSettings
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& GoldCost() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& MoneyCost() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& ConvertGold() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& AddGold() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& AddMoney() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(FundSettings*))(Il2CppBase() + 0x322E80))(this);
	}
	template <typename T = int32_t> T GetPriceInCents() {
		return ((T (*)(FundSettings*))(Il2CppBase() + 0x322F04))(this);
	}
	template <typename T = Il2CppString*> T GetSettingsClass() {
		return ((T (*)(FundSettings*))(Il2CppBase() + 0x322F38))(this);
	}
};
