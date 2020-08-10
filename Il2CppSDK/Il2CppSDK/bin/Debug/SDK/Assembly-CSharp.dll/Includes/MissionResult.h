#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MissionResult
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78EB8);
	}
	// Fields
	template <typename T = void*> T& Result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& MissionTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& KilledZombies() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& CollectedMoney() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& SpentMoney() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& WastedMoneyBags() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& HealthLost() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& AverageProtectObjectsHP() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& SpecialEnemies() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& HeadShots() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& RemovedLimbs() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Disintegrations() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& ArenaScore() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& ArenaWaves() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppDictionary<void*, float>*> T& FavouriteWeapon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<void*, int32_t>*> T& FavouriteItem() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& ShotsFired() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& ShotHits() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MissionResult*))(Il2CppBase() + 0x40BF74))(this);
	}
	template <typename T = int32_t> T get_FireAccuracy() {
		return ((T (*)(MissionResult*))(Il2CppBase() + 0x40C10C))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(MissionResult*))(Il2CppBase() + 0x40C1EC))(this);
	}
	template <typename T = void> T WeaponUsed(void* id, float fireTime) {
		return ((T (*)(MissionResult*, void*, float))(Il2CppBase() + 0x40C2F0))(this, id, fireTime);
	}
	template <typename T = void> T ItemUsed(void* id) {
		return ((T (*)(MissionResult*, void*))(Il2CppBase() + 0x40C438))(this, id);
	}
	template <typename T = void*> T GetFavouriteItem() {
		return ((T (*)(MissionResult*))(Il2CppBase() + 0x40C564))(this);
	}
	template <typename T = void*> T GetFavouriteWeapon() {
		return ((T (*)(MissionResult*))(Il2CppBase() + 0x40C844))(this);
	}
	template <typename T = void> T RegisterShot(bool hit) {
		return ((T (*)(MissionResult*, bool))(Il2CppBase() + 0x40CB44))(this, hit);
	}
	template <typename T = Il2CppString*> T GetMissionTime() {
		return ((T (*)(MissionResult*))(Il2CppBase() + 0x40CB64))(this);
	}
};
