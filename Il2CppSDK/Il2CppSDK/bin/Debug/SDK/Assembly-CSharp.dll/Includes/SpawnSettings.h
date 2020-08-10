#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnSettings
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& useBoss() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& bosssType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<void*>*> T& settings() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SpawnSettings*))(Il2CppBase() + 0x24F540))(this);
	}
	template <typename T = int32_t> T SpawnSettingsCount() {
		return ((T (*)(SpawnSettings*))(Il2CppBase() + 0x24F5F4))(this);
	}
	template <typename T = void> T CreateSpawnManager() {
		return ((T (*)(SpawnSettings*))(Il2CppBase() + 0x24F68C))(this);
	}
	template <typename T = void> static T CreateSpawnManagerWithDefaultData() {
		return ((T (*)(void *))(Il2CppBase() + 0x2517FC))(0);
	}
	template <typename T = void> T SendSpawnDataToSpawnManager(int32_t settingIndex) {
		return ((T (*)(SpawnSettings*, int32_t))(Il2CppBase() + 0x253478))(this, settingIndex);
	}
	template <typename T = void> T FillAgentData(int32_t settingIndex, Il2CppList<void*>* modData) {
		return ((T (*)(SpawnSettings*, int32_t, Il2CppList<void*>*))(Il2CppBase() + 0x253490))(this, settingIndex, modData);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SpawnSettings*))(Il2CppBase() + 0x2536D8))(this);
	}
	template <typename T = void> static T CreateSpawnManager_1(Il2CppArray<void*>* sumPct, Il2CppArray<void*>* processedSkins, bool useBoss, void* bossType) {
		return ((T (*)(void *, Il2CppArray<void*>*, Il2CppArray<void*>*, bool, void*))(Il2CppBase() + 0x252388))(0, sumPct, processedSkins, useBoss, bossType);
	}
	template <typename T = void> static T SendSpawnDataToSpawnManager_1(Il2CppArray<void*>* pct) {
		return ((T (*)(void *, Il2CppArray<void*>*))(Il2CppBase() + 0x253274))(0, pct);
	}
	template <typename T = void> static T FillAgentData_1(Il2CppArray<void*>* pct, Il2CppList<void*>* modList) {
		return ((T (*)(void *, Il2CppArray<void*>*, Il2CppList<void*>*))(Il2CppBase() + 0x2534B0))(0, pct, modList);
	}
	template <typename T = Il2CppArray<void*>*> T GetSpawnProbability(int32_t settingIndex) {
		return ((T (*)(SpawnSettings*, int32_t))(Il2CppBase() + 0x250838))(this, settingIndex);
	}
	template <typename T = Il2CppArray<void*>*> static T GetDefaultSpawnProbability() {
		return ((T (*)(void *))(Il2CppBase() + 0x25316C))(0);
	}
	template <typename T = bool> static T IsOptionalEnemy(void* type) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x251278))(0, type);
	}
	template <typename T = void*> static T Convert(void* type) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x251378))(0, type);
	}
	template <typename T = void*> static T Convert_1(void* type) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x253A14))(0, type);
	}
};
