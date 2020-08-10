#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerPersistantInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78EB4);
	}
	// Fields
	template <typename T = void*> T& m_OnPPIUpdate() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& GeneratePPIChangeNotifications() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& RefPPIForNotificationsJSON() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& UserName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsValid() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsCheater() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = int32_t> T& SavedVersion() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& OnExperienceChanged() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& OnRankChanged() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& OnMoneyChanged() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& OnGoldChanged() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& OnTicketChanged() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& OnRoundMoneyChanged() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& PlayerData() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& CurrentMission() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& roundMoney() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& StatsDirty() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x2022A4))(this);
	}
	template <typename T = int32_t> T get_experience() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x202468))(this);
	}
	template <typename T = int32_t> T get_rank() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x1ED504))(this);
	}
	template <typename T = int32_t> T get_money() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x202564))(this);
	}
	template <typename T = int32_t> T get_gold() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x202588))(this);
	}
	template <typename T = int32_t> T get_totalTapjoyOfferwallCredits() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x2025AC))(this);
	}
	template <typename T = void> T set_totalTapjoyOfferwallCredits(int32_t value) {
		return ((T (*)(PlayerPersistantInfo*, int32_t))(Il2CppBase() + 0x2025D0))(this, value);
	}
	template <typename T = int32_t> T get_totalSupersonicOfferwallCredits() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x2025F4))(this);
	}
	template <typename T = void> T set_totalSupersonicOfferwallCredits(int32_t value) {
		return ((T (*)(PlayerPersistantInfo*, int32_t))(Il2CppBase() + 0x202618))(this, value);
	}
	template <typename T = bool> T get_watchedOfferwall() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x20263C))(this);
	}
	template <typename T = void> T set_watchedOfferwall(bool value) {
		return ((T (*)(PlayerPersistantInfo*, bool))(Il2CppBase() + 0x202660))(this, value);
	}
	template <typename T = int32_t> T get_numKills() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x202684))(this);
	}
	template <typename T = int32_t> T get_numHeadshots() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x2026A8))(this);
	}
	template <typename T = int32_t> T get_numTickets() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x2026CC))(this);
	}
	template <typename T = int32_t> T get_numGoldForGoldMission() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x2026F0))(this);
	}
	template <typename T = int32_t> T get_roundMoney() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x202714))(this);
	}
	template <typename T = void> T set_roundMoney(int32_t value) {
		return ((T (*)(PlayerPersistantInfo*, int32_t))(Il2CppBase() + 0x20271C))(this, value);
	}
	template <typename T = int32_t> T get_storyId() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x202724))(this);
	}
	template <typename T = int32_t> T get_chapterProgress() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x202748))(this);
	}
	template <typename T = int32_t> T get_totalMissionsPlayed() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x1ECFC4))(this);
	}
	template <typename T = int32_t> T get_storyMissionsPlayed() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x20276C))(this);
	}
	template <typename T = int32_t> T get_deaths() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x1EDEFC))(this);
	}
	template <typename T = float> T get_GameTime() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x1EDE3C))(this);
	}
	template <typename T = bool> T get_ProtectObjectsTutorial() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x202790))(this);
	}
	template <typename T = void> T set_ProtectObjectsTutorial(bool value) {
		return ((T (*)(PlayerPersistantInfo*, bool))(Il2CppBase() + 0x2027B4))(this, value);
	}
	template <typename T = int32_t> T ArenaPlayed(void* arena) {
		return ((T (*)(PlayerPersistantInfo*, void*))(Il2CppBase() + 0x2027D8))(this, arena);
	}
	template <typename T = float> T ArenaTotalTime(void* arena) {
		return ((T (*)(PlayerPersistantInfo*, void*))(Il2CppBase() + 0x1EDE60))(this, arena);
	}
	template <typename T = int32_t> T ArenaHiMoney(void* arena) {
		return ((T (*)(PlayerPersistantInfo*, void*))(Il2CppBase() + 0x202868))(this, arena);
	}
	template <typename T = int32_t> T ArenaHiScore(void* arena) {
		return ((T (*)(PlayerPersistantInfo*, void*))(Il2CppBase() + 0x2028F8))(this, arena);
	}
	template <typename T = void> T ArenaFinished(void* arena, float arenaTime, int32_t score, int32_t money, int32_t xp) {
		return ((T (*)(PlayerPersistantInfo*, void*, float, int32_t, int32_t, int32_t))(Il2CppBase() + 0x202988))(this, arena, arenaTime, score, money, xp);
	}
	template <typename T = void> T GeneratedMissionFinished() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x202B68))(this);
	}
	template <typename T = int32_t> T ChapterMissionFinished() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x202B94))(this);
	}
	template <typename T = int32_t> T NextStoryChapter() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x202BFC))(this);
	}
	template <typename T = void> T MissionFinished(bool success, float missionTime) {
		return ((T (*)(PlayerPersistantInfo*, bool, float))(Il2CppBase() + 0x202C4C))(this, success, missionTime);
	}
	template <typename T = void*> T get_InventoryList() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x1ED24C))(this);
	}
	template <typename T = void*> T get_EquipList() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x202CB4))(this);
	}
	template <typename T = void> T set_EquipList(void* value) {
		return ((T (*)(PlayerPersistantInfo*, void*))(Il2CppBase() + 0x202CD8))(this, value);
	}
	template <typename T = void*> T get_Upgrades() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x202CFC))(this);
	}
	template <typename T = void*> T get_BankData() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x202D20))(this);
	}
	template <typename T = bool> T get_StatsDirty() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x202D44))(this);
	}
	template <typename T = void> T set_StatsDirty(bool value) {
		return ((T (*)(PlayerPersistantInfo*, bool))(Il2CppBase() + 0x202D4C))(this, value);
	}
	template <typename T = void*> T GetPlayerData_ForStatistics() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x202D54))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x202D5C))(this);
	}
	template <typename T = void> T ResetPlayerData() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x2032F8))(this);
	}
	template <typename T = void> T MissionStart() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x20338C))(this);
	}
	template <typename T = void> T MissionEnd() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x20349C))(this);
	}
	template <typename T = Il2CppString*> T GetPlayerDataAsJsonStr() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x2034D8))(this);
	}
	template <typename T = bool> T InitPlayerDataFromStr(Il2CppString* jsonStr) {
		return ((T (*)(PlayerPersistantInfo*, Il2CppString*))(Il2CppBase() + 0x203584))(this, jsonStr);
	}
	template <typename T = Il2CppString*> T GetInventoryAsJSON() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x203C20))(this);
	}
	template <typename T = Il2CppString*> T GetEquipListAsJSON() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x203CE4))(this);
	}
	template <typename T = void> T SetArenaHiMoney(void* arenaId, int32_t money) {
		return ((T (*)(PlayerPersistantInfo*, void*, int32_t))(Il2CppBase() + 0x203DA8))(this, arenaId, money);
	}
	template <typename T = void> T SetArenaHiXp(void* arenaId, int32_t xp) {
		return ((T (*)(PlayerPersistantInfo*, void*, int32_t))(Il2CppBase() + 0x203DAC))(this, arenaId, xp);
	}
	template <typename T = void> T SetArenaHiScore(void* arenaId, int32_t score) {
		return ((T (*)(PlayerPersistantInfo*, void*, int32_t))(Il2CppBase() + 0x203DB0))(this, arenaId, score);
	}
	template <typename T = void> T AddRoundMoney(int32_t money) {
		return ((T (*)(PlayerPersistantInfo*, int32_t))(Il2CppBase() + 0x203DB4))(this, money);
	}
	template <typename T = void> T AddMoneyBags(int32_t bags) {
		return ((T (*)(PlayerPersistantInfo*, int32_t))(Il2CppBase() + 0x203E64))(this, bags);
	}
	template <typename T = void> T AddExperience(int32_t experience) {
		return ((T (*)(PlayerPersistantInfo*, int32_t))(Il2CppBase() + 0x203FF0))(this, experience);
	}
	template <typename T = void> T AddMoney(int32_t money) {
		return ((T (*)(PlayerPersistantInfo*, int32_t))(Il2CppBase() + 0x2040A0))(this, money);
	}
	template <typename T = void> T RemoveMoney(int32_t money) {
		return ((T (*)(PlayerPersistantInfo*, int32_t))(Il2CppBase() + 0x204104))(this, money);
	}
	template <typename T = void> T EquipAddWeapon(void* id, void* upgrade) {
		return ((T (*)(PlayerPersistantInfo*, void*, void*))(Il2CppBase() + 0x20422C))(this, id, upgrade);
	}
	template <typename T = void> T InventoryAddWeapon(void* id, void* upgrade) {
		return ((T (*)(PlayerPersistantInfo*, void*, void*))(Il2CppBase() + 0x20445C))(this, id, upgrade);
	}
	template <typename T = void> T InventoryRemoveWeapon(void* id) {
		return ((T (*)(PlayerPersistantInfo*, void*))(Il2CppBase() + 0x20468C))(this, id);
	}
	template <typename T = void> T InventoryAddItem(void* id, int32_t count) {
		return ((T (*)(PlayerPersistantInfo*, void*, int32_t))(Il2CppBase() + 0x204870))(this, id, count);
	}
	template <typename T = void> T InventoryRemoveItem(void* id) {
		return ((T (*)(PlayerPersistantInfo*, void*))(Il2CppBase() + 0x204CE0))(this, id);
	}
	template <typename T = void> T AddTicket(int32_t ticket) {
		return ((T (*)(PlayerPersistantInfo*, int32_t))(Il2CppBase() + 0x204F0C))(this, ticket);
	}
	template <typename T = void> T RemoveTicket(int32_t ticket) {
		return ((T (*)(PlayerPersistantInfo*, int32_t))(Il2CppBase() + 0x204F50))(this, ticket);
	}
	template <typename T = void> T AddGold(int32_t gold) {
		return ((T (*)(PlayerPersistantInfo*, int32_t))(Il2CppBase() + 0x20506C))(this, gold);
	}
	template <typename T = void> T RemoveGold(int32_t gold) {
		return ((T (*)(PlayerPersistantInfo*, int32_t))(Il2CppBase() + 0x2050D4))(this, gold);
	}
	template <typename T = void> T CheckForAchievement(void* id, int32_t curVal, int32_t requiredVal, bool orGreater, bool show) {
		return ((T (*)(PlayerPersistantInfo*, void*, int32_t, int32_t, bool, bool))(Il2CppBase() + 0x2051FC))(this, id, curVal, requiredVal, orGreater, show);
	}
	template <typename T = void> T AddKill() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x205200))(this);
	}
	template <typename T = void> T AddDeath() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x205240))(this);
	}
	template <typename T = void> T AddHeadShot() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x205274))(this);
	}
	template <typename T = void> T AddCarnage() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x2052AC))(this);
	}
	template <typename T = void> T AddLimbOut() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x2052E4))(this);
	}
	template <typename T = void> T AddItemUse(void* id) {
		return ((T (*)(PlayerPersistantInfo*, void*))(Il2CppBase() + 0x20531C))(this, id);
	}
	template <typename T = void> T AddWeaponUse(void* id) {
		return ((T (*)(PlayerPersistantInfo*, void*))(Il2CppBase() + 0x205670))(this, id);
	}
	template <typename T = void> T AddWeaponHit(void* id) {
		return ((T (*)(PlayerPersistantInfo*, void*))(Il2CppBase() + 0x205890))(this, id);
	}
	template <typename T = void> T SynchronizePendingPPIChanges() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x205AB0))(this);
	}
	template <typename T = void> T SynchronizeToCloud() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x205AB4))(this);
	}
	template <typename T = void> T AsyncOpFinished(void* res) {
		return ((T (*)(PlayerPersistantInfo*, void*))(Il2CppBase() + 0x205AB8))(this, res);
	}
	template <typename T = void> T CopyPlayerData(void* otherPPI) {
		return ((T (*)(PlayerPersistantInfo*, void*))(Il2CppBase() + 0x205ABC))(this, otherPPI);
	}
	template <typename T = void> T FetchPPIDataFromCloudAsyncOpFinished(void* res) {
		return ((T (*)(PlayerPersistantInfo*, void*))(Il2CppBase() + 0x205AE0))(this, res);
	}
	template <typename T = bool> T ValidatePPI(void* refPPI) {
		return ((T (*)(PlayerPersistantInfo*, void*))(Il2CppBase() + 0x205D00))(this, refPPI);
	}
	template <typename T = int32_t> static T GetPlayerMaxExperienceForRank(int32_t rank) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x205DDC))(0, rank);
	}
	template <typename T = int32_t> static T GetPlayerMinExperienceForRank(int32_t rank) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x205F6C))(0, rank);
	}
	template <typename T = int32_t> static T GetPlayerRankFromExperience(int32_t experience) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x20248C))(0, experience);
	}
	template <typename T = void> T SetDefaultPPI() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x202D60))(this);
	}
	template <typename T = void*> static T GetDefaultPPI() {
		return ((T (*)(void *))(Il2CppBase() + 0x20604C))(0);
	}
	template <typename T = void> T Save() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x2060F0))(this);
	}
	template <typename T = void> T EditorDataOverride() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x20632C))(this);
	}
	template <typename T = void> T Load(void* data) {
		return ((T (*)(PlayerPersistantInfo*, void*))(Il2CppBase() + 0x206330))(this, data);
	}
	template <typename T = void> T FetchPPIFromCloud() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x2065E4))(this);
	}
	template <typename T = void> T GetCloudPPI() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x2065E8))(this);
	}
	template <typename T = void*> T GetCloudPPI_Coroutine() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x2065EC))(this);
	}
	template <typename T = void> T SetPPIFromCloud(void* inCloudPPI) {
		return ((T (*)(PlayerPersistantInfo*, void*))(Il2CppBase() + 0x206680))(this, inCloudPPI);
	}
	template <typename T = void> T OnPPIFromCloudUpdated(void* ppi) {
		return ((T (*)(PlayerPersistantInfo*, void*))(Il2CppBase() + 0x206684))(this, ppi);
	}
	template <typename T = bool> T IsBonusAvailable() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x206698))(this);
	}
	template <typename T = void> T SetBonusReceived() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x206914))(this);
	}
	template <typename T = void> T Fixator_ResetBonusTime() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x2069EC))(this);
	}
	template <typename T = void> T BonusMissionPlayed() {
		return ((T (*)(PlayerPersistantInfo*))(Il2CppBase() + 0x206AF8))(this);
	}
	template <typename T = void> T SetAccountNameifNotExist(Il2CppString* inAccountName) {
		return ((T (*)(PlayerPersistantInfo*, Il2CppString*))(Il2CppBase() + 0x206AFC))(this, inAccountName);
	}
};
