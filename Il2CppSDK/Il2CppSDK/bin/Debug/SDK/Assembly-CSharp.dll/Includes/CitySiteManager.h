#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CitySiteManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78AF0);
	}
	// Fields
	template <typename T = void*> T& iconArena() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_GameObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_MissionIconPrefab() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_StoryMissionIconPrefab() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_ChopperMissionIconPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_DailyRewardMissionIconPrefab() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_SpecialIconPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_MoneyIconPrefab() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_SlotManager() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_MissionManager() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<void*>*> T& m_Spawned() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CitySiteManager*))(Il2CppBase() + 0x2ADD24))(this);
	}
	template <typename T = void*> T get_SpawnedIcons() {
		return ((T (*)(CitySiteManager*))(Il2CppBase() + 0x2B2FF8))(this);
	}
	template <typename T = void> T Init(void* gameObject, void* manager) {
		return ((T (*)(CitySiteManager*, void*, void*))(Il2CppBase() + 0x2ADDD0))(this, gameObject, manager);
	}
	template <typename T = void> T SpawnSpecialSites() {
		return ((T (*)(CitySiteManager*))(Il2CppBase() + 0x2B29BC))(this);
	}
	template <typename T = void> T SpawnAvailableMissions(int32_t storyId, int32_t playerXp) {
		return ((T (*)(CitySiteManager*, int32_t, int32_t))(Il2CppBase() + 0x2B4090))(this, storyId, playerXp);
	}
	template <typename T = void> T SpawnDailyRewardMission(int32_t storyId, int32_t playerXp) {
		return ((T (*)(CitySiteManager*, int32_t, int32_t))(Il2CppBase() + 0x2B8C90))(this, storyId, playerXp);
	}
	template <typename T = void*> T GetSlotForHelicopter() {
		return ((T (*)(CitySiteManager*))(Il2CppBase() + 0x2B4418))(this);
	}
	template <typename T = void> T SpawnHelicopterMissions(int32_t storyId, int32_t playerXp, void* slot) {
		return ((T (*)(CitySiteManager*, int32_t, int32_t, void*))(Il2CppBase() + 0x2BABEC))(this, storyId, playerXp, slot);
	}
	template <typename T = void> T SpawnMoney(int32_t storyId) {
		return ((T (*)(CitySiteManager*, int32_t))(Il2CppBase() + 0x2BECE0))(this, storyId);
	}
	template <typename T = void> T DestroySpawnedSite(void* icon) {
		return ((T (*)(CitySiteManager*, void*))(Il2CppBase() + 0x2B57DC))(this, icon);
	}
	template <typename T = void> T Save(void* file) {
		return ((T (*)(CitySiteManager*, void*))(Il2CppBase() + 0x2B295C))(this, file);
	}
	template <typename T = void> T Load(void* file, int32_t storyId, int32_t playerXP, int32_t version) {
		return ((T (*)(CitySiteManager*, void*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2B2C30))(this, file, storyId, playerXP, version);
	}
	template <typename T = void> T SaveInternal(void* file) {
		return ((T (*)(CitySiteManager*, void*))(Il2CppBase() + 0x2BF070))(this, file);
	}
	template <typename T = void> T LoadInternal(void* file, int32_t storyId, int32_t playerXP, int32_t version) {
		return ((T (*)(CitySiteManager*, void*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2BF5AC))(this, file, storyId, playerXP, version);
	}
	template <typename T = bool> T IsPossibleSpawnStoryMission() {
		return ((T (*)(CitySiteManager*))(Il2CppBase() + 0x2BE020))(this);
	}
	template <typename T = bool> T IsPossibleSpawnGeneratedMission() {
		return ((T (*)(CitySiteManager*))(Il2CppBase() + 0x2BE2E4))(this);
	}
	template <typename T = bool> T IsPossibleSpawnChopperMission() {
		return ((T (*)(CitySiteManager*))(Il2CppBase() + 0x2BE928))(this);
	}
	template <typename T = bool> T IsPossibleSpawnDailyRewardMission() {
		return ((T (*)(CitySiteManager*))(Il2CppBase() + 0x2BE5A8))(this);
	}
	template <typename T = void*> T ComputeDifficulty() {
		return ((T (*)(CitySiteManager*))(Il2CppBase() + 0x2C024C))(this);
	}
	template <typename T = bool> T SpawnMission(void* info, int32_t storyId, int32_t playerXP, int32_t forcedSlotUid) {
		return ((T (*)(CitySiteManager*, void*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2BFD94))(this, info, storyId, playerXP, forcedSlotUid);
	}
	template <typename T = bool> T SpawnChopperMission(int32_t storyId, int32_t playerXP, void* slot) {
		return ((T (*)(CitySiteManager*, int32_t, int32_t, void*))(Il2CppBase() + 0x2BEBBC))(this, storyId, playerXP, slot);
	}
	template <typename T = bool> T SpawnDailyRewardMissionInternal(int32_t storyId, int32_t playerXP) {
		return ((T (*)(CitySiteManager*, int32_t, int32_t))(Il2CppBase() + 0x2BE81C))(this, storyId, playerXP);
	}
	template <typename T = bool> T SpawnMissionGenerate(int32_t storyId, int32_t playerXP, bool story) {
		return ((T (*)(CitySiteManager*, int32_t, int32_t, bool))(Il2CppBase() + 0x2BDEF8))(this, storyId, playerXP, story);
	}
	template <typename T = bool> T SpawnMoneyInternal(void* info, int32_t storyId, int32_t forcedSlotUid) {
		return ((T (*)(CitySiteManager*, void*, int32_t, int32_t))(Il2CppBase() + 0x2BEDBC))(this, info, storyId, forcedSlotUid);
	}
};
