#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MissionManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78AEC);
	}
	// Fields
	template <typename T = void*> T& m_MissionTypeHistory() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_TextHistory() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_LevelHistory() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& availableMissions() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<void*>*> T& m_GeneratedTexts() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<void*>*> T& m_GeneratedChopperTexts() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_RandomText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_StoryData() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_MissionData() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_LevelData() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MissionManager*))(Il2CppBase() + 0x4082B0))(this);
	}
	template <typename T = void> T Init(void* gameObject) {
		return ((T (*)(MissionManager*, void*))(Il2CppBase() + 0x4084DC))(this, gameObject);
	}
	template <typename T = int32_t> T GetNumOfRequiredMissions(int32_t storyId) {
		return ((T (*)(MissionManager*, int32_t))(Il2CppBase() + 0x4089C0))(this, storyId);
	}
	template <typename T = void*> T GetGeneratedTexts(void* missionType, bool chopperMission) {
		return ((T (*)(MissionManager*, void*, bool))(Il2CppBase() + 0x4089F4))(this, missionType, chopperMission);
	}
	template <typename T = void*> T GetStoryChapterInfo(int32_t storyId) {
		return ((T (*)(MissionManager*, int32_t))(Il2CppBase() + 0x408B04))(this, storyId);
	}
	template <typename T = void*> T GenerateMission(int32_t storyId, bool story, void* nonstoryDifficulty) {
		return ((T (*)(MissionManager*, int32_t, bool, void*))(Il2CppBase() + 0x408B30))(this, storyId, story, nonstoryDifficulty);
	}
	template <typename T = void*> T GenerateChopperMission(int32_t storyId, bool story, void* nonstoryDifficulty) {
		return ((T (*)(MissionManager*, int32_t, bool, void*))(Il2CppBase() + 0x409A10))(this, storyId, story, nonstoryDifficulty);
	}
	template <typename T = void*> T GenerateDailyRewardMission(int32_t storyId, bool story, void* nonstoryDifficulty) {
		return ((T (*)(MissionManager*, int32_t, bool, void*))(Il2CppBase() + 0x409A30))(this, storyId, story, nonstoryDifficulty);
	}
	template <typename T = void> T SaveMissionData(void* data, void* file, Il2CppString* keyPrefix) {
		return ((T (*)(MissionManager*, void*, void*, Il2CppString*))(Il2CppBase() + 0x409A50))(this, data, file, keyPrefix);
	}
	template <typename T = void> T LoadMissionData(void* data, void* file, Il2CppString* keyPrefix) {
		return ((T (*)(MissionManager*, void*, void*, Il2CppString*))(Il2CppBase() + 0x409FA0))(this, data, file, keyPrefix);
	}
	template <typename T = void> T Save(void* file) {
		return ((T (*)(MissionManager*, void*))(Il2CppBase() + 0x40A5CC))(this, file);
	}
	template <typename T = void> T Load(void* file) {
		return ((T (*)(MissionManager*, void*))(Il2CppBase() + 0x40AED4))(this, file);
	}
	template <typename T = void> T InitInternal(void* gameObject) {
		return ((T (*)(MissionManager*, void*))(Il2CppBase() + 0x4084E0))(this, gameObject);
	}
	template <typename T = void> T MissionRemovedFromActiveList(void* info) {
		return ((T (*)(MissionManager*, void*))(Il2CppBase() + 0x40B564))(this, info);
	}
	template <typename T = void*> T GenerateMissionInternal(int32_t storyId, bool story, void* specFilter, void* nonstoryDifficulty) {
		return ((T (*)(MissionManager*, int32_t, bool, void*, void*))(Il2CppBase() + 0x408B50))(this, storyId, story, specFilter, nonstoryDifficulty);
	}
	template <typename T = int32_t> T MissionTypeInHistoryValue(void* missionType) {
		return ((T (*)(MissionManager*, void*))(Il2CppBase() + 0x40B844))(this, missionType);
	}
	template <typename T = int32_t> T TextInHistoryValue(int32_t text) {
		return ((T (*)(MissionManager*, int32_t))(Il2CppBase() + 0x40BD34))(this, text);
	}
	template <typename T = int32_t> T LevelInHistoryValue(Il2CppString* level) {
		return ((T (*)(MissionManager*, Il2CppString*))(Il2CppBase() + 0x40BA9C))(this, level);
	}
};
