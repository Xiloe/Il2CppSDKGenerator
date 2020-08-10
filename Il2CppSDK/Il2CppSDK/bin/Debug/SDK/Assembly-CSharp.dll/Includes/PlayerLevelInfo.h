#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerLevelInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& playerLevel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& playerXp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& recommendedWeapon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& xpPerZombie() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& xpMissionBonus() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& moneyPerZombie() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& moneyMissionBonus() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& enemyHealth() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& enemyAttack() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& moneyPerHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& moneyPerLimb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& moneyPerCarnage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PlayerLevelInfo*))(Il2CppBase() + 0x2021E8))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x202208))(0);
	}
};
