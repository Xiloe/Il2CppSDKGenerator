#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PPIWeaponData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78B30);
	}
	// Fields
	template <typename T = void*> T& ID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& UpgradeLevel() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& EquipSlotIdx() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& StatsFire() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& StatsHits() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& StatsKills() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = bool> T IsValid() {
		return ((T (*)(PPIWeaponData*))(Il2CppBase() + 0x20A848))(this);
	}
};
