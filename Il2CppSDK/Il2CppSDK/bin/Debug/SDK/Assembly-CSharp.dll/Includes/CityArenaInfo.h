#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CityArenaInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78B2C);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& m_Arenas() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& missionResult() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& arenaActiveIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x295B64))(this);
	}
	template <typename T = void*> T get_arenas() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x295FB8))(this);
	}
	template <typename T = void*> T get_missionResult() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x295FC0))(this);
	}
	template <typename T = void> T set_missionResult(void* value) {
		return ((T (*)(CityArenaInfo*, void*))(Il2CppBase() + 0x295F78))(this, value);
	}
	template <typename T = int32_t> T get_specialEnemiesMoney() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x295FC8))(this);
	}
	template <typename T = int32_t> T get_headShotMoney() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x296098))(this);
	}
	template <typename T = int32_t> T get_limbMoney() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x296168))(this);
	}
	template <typename T = int32_t> T get_desintegrationMoney() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x296238))(this);
	}
	template <typename T = int32_t> T get_foundMoney() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x296308))(this);
	}
	template <typename T = int32_t> T get_spentMoney() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x29632C))(this);
	}
	template <typename T = int32_t> T get_wastedMoney() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x296350))(this);
	}
	template <typename T = int32_t> T get_arenaRank() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x296420))(this);
	}
	template <typename T = int32_t> T get_arenaScore() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x2964E4))(this);
	}
	template <typename T = int32_t> T get_arenaWaves() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x296508))(this);
	}
	template <typename T = int32_t> T get_arenaActiveIndex() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x29652C))(this);
	}
	template <typename T = void> T set_arenaActiveIndex(int32_t value) {
		return ((T (*)(CityArenaInfo*, int32_t))(Il2CppBase() + 0x296534))(this, value);
	}
	template <typename T = int32_t> T get_arenaMoney() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x29653C))(this);
	}
	template <typename T = int32_t> T get_arenaXp() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x2965A8))(this);
	}
	template <typename T = int32_t> T get_zombieXp() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x2965F0))(this);
	}
	template <typename T = int32_t> T get_bonusXp() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x2966C0))(this);
	}
	template <typename T = int32_t> T get_totalExperience() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x2965CC))(this);
	}
	template <typename T = int32_t> T get_totalMoney() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x296540))(this);
	}
	template <typename T = int32_t> T HiMoney(void* arenaId) {
		return ((T (*)(CityArenaInfo*, void*))(Il2CppBase() + 0x296788))(this, arenaId);
	}
	template <typename T = int32_t> T Played(void* arenaId) {
		return ((T (*)(CityArenaInfo*, void*))(Il2CppBase() + 0x296854))(this, arenaId);
	}
	template <typename T = int32_t> T HiScore(void* arenaId) {
		return ((T (*)(CityArenaInfo*, void*))(Il2CppBase() + 0x296920))(this, arenaId);
	}
	template <typename T = void> T DailyReward() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x2969EC))(this);
	}
	template <typename T = int32_t> T MissionRating() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x296C1C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CityArenaInfo*))(Il2CppBase() + 0x296F18))(this);
	}
	template <typename T = void> T Save(void* file, Il2CppString* keyPrefix) {
		return ((T (*)(CityArenaInfo*, void*, Il2CppString*))(Il2CppBase() + 0x296FC8))(this, file, keyPrefix);
	}
	template <typename T = void> T Load(void* file, Il2CppString* keyPrefix, int32_t version) {
		return ((T (*)(CityArenaInfo*, void*, Il2CppString*, int32_t))(Il2CppBase() + 0x29725C))(this, file, keyPrefix, version);
	}
};
