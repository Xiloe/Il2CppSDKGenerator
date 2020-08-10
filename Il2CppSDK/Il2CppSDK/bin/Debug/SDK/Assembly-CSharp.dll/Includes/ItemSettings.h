#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemSettings
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
	template <typename T = void*> T& ItemType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& ItemUse() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& ItemBehaviour() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& UseSound() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& SpawnObject() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& MaxCountInMisson() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& InfiniteUse() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& Timer() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& RechargeModificator() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& PowerUpModifier() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& HealHP() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ItemSettings*))(Il2CppBase() + 0x3D04A0))(this);
	}
	template <typename T = Il2CppString*> T GetSettingsClass() {
		return ((T (*)(ItemSettings*))(Il2CppBase() + 0x3D052C))(this);
	}
};
