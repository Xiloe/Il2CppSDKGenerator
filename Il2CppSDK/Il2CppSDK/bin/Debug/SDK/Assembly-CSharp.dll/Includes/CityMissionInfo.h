#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CityMissionInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78B24);
	}
	// Fields
	template <typename T = void*> T& m_MissionData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_PlayerLevelInfo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& missionResult() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2BB67C))(this);
	}
	template <typename T = void> T _ctor_1(void* missionData) {
		return ((T (*)(CityMissionInfo*, void*))(Il2CppBase() + 0x2BB6A4))(this, missionData);
	}
	template <typename T = int32_t> T get_storyID() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2B5BF4))(this);
	}
	template <typename T = void*> T get_difficulty() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2A53B4))(this);
	}
	template <typename T = void*> T get_missionType() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2BB22C))(this);
	}
	template <typename T = Il2CppString*> T get_missionSubtype() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2BB25C))(this);
	}
	template <typename T = void*> T get_story() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2A53D8))(this);
	}
	template <typename T = void*> T get_bonus() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2A5384))(this);
	}
	template <typename T = Il2CppString*> T get_level() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2BB28C))(this);
	}
	template <typename T = Il2CppString*> T get_levelPreview() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2A5294))(this);
	}
	template <typename T = void*> T get_recommendedWeapon() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2A52B8))(this);
	}
	template <typename T = int32_t> T get_caption() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2A5408))(this);
	}
	template <typename T = int32_t> T get_objective() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2A543C))(this);
	}
	template <typename T = int32_t> T get_description() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2A5470))(this);
	}
	template <typename T = int32_t> T get_successText() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2A36C0))(this);
	}
	template <typename T = int32_t> T get_failText() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2A36F4))(this);
	}
	template <typename T = void*> T get_missionResult() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2A36B8))(this);
	}
	template <typename T = void> T set_missionResult(void* value) {
		return ((T (*)(CityMissionInfo*, void*))(Il2CppBase() + 0x2B7DC4))(this, value);
	}
	template <typename T = int32_t> T get_specialEnemiesMoney() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2BB6D0))(this);
	}
	template <typename T = int32_t> T get_headShotMoney() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2A4EDC))(this);
	}
	template <typename T = int32_t> T get_limbMoney() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2A4FAC))(this);
	}
	template <typename T = int32_t> T get_desintegrationMoney() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2A507C))(this);
	}
	template <typename T = int32_t> T get_foundMoney() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2A514C))(this);
	}
	template <typename T = int32_t> T get_spentMoney() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2BB7A0))(this);
	}
	template <typename T = int32_t> T get_wastedMoney() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2A4B6C))(this);
	}
	template <typename T = int32_t> T get_bonusMoney() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2A4C3C))(this);
	}
	template <typename T = int32_t> T get_zombieXp() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2BB7C4))(this);
	}
	template <typename T = int32_t> T get_bonusXp() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2B7F60))(this);
	}
	template <typename T = int32_t> T get_totalExperience() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2A5170))(this);
	}
	template <typename T = int32_t> T get_totalMoney() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2A5194))(this);
	}
	template <typename T = Il2CppString*> T get_slotSuggestion() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2BB894))(this);
	}
	template <typename T = Il2CppString*> T get_specialIcon() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2BB8C4))(this);
	}
	template <typename T = void> T AssignPlayerLevelInfo(void* levelInfo) {
		return ((T (*)(CityMissionInfo*, void*))(Il2CppBase() + 0x2BB8F4))(this, levelInfo);
	}
	template <typename T = int32_t> T MissionRating() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2BB8FC))(this);
	}
	template <typename T = void> T MarkAsUsed() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2BBC48))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CityMissionInfo*))(Il2CppBase() + 0x2BBC90))(this);
	}
	template <typename T = void> T Save(void* file, Il2CppString* keyPrefix, void* missionManager) {
		return ((T (*)(CityMissionInfo*, void*, Il2CppString*, void*))(Il2CppBase() + 0x2BC184))(this, file, keyPrefix, missionManager);
	}
	template <typename T = void> T Load(void* file, Il2CppString* keyPrefix, void* missionManager) {
		return ((T (*)(CityMissionInfo*, void*, Il2CppString*, void*))(Il2CppBase() + 0x2BC1CC))(this, file, keyPrefix, missionManager);
	}
};
