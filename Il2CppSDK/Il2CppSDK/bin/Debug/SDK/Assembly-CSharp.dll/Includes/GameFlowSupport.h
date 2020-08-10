#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameFlowSupport
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78F38);
	}
	// Fields
	template <typename T = void*> T& MissionType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_NESController() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_BandagesUsed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_CheckBandages() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = int32_t> T& m_BandagesCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_ActualGameplay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_SpawnSettings() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_SpawnDirector() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_EnemySpawnCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<void*>*> static T& s_GameflowTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<void*>*> static T& s_SpawnTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<void*>*> static T& s_TutorialTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GameFlowSupport*))(Il2CppBase() + 0x330E98))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x330EA8))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GameFlowSupport*))(Il2CppBase() + 0x3314A4))(this);
	}
	template <typename T = void> T SetEnemySpawnCount(int32_t count) {
		return ((T (*)(GameFlowSupport*, int32_t))(Il2CppBase() + 0x32E038))(this, count);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GameFlowSupport*))(Il2CppBase() + 0x332590))(this);
	}
	template <typename T = void> T SetGameplayType(Il2CppString* type) {
		return ((T (*)(GameFlowSupport*, Il2CppString*))(Il2CppBase() + 0x3327E4))(this, type);
	}
	template <typename T = void> T RegisterRadarObject(void* obj) {
		return ((T (*)(GameFlowSupport*, void*))(Il2CppBase() + 0x332A78))(this, obj);
	}
	template <typename T = void> T UnregisterRadarObject(void* obj) {
		return ((T (*)(GameFlowSupport*, void*))(Il2CppBase() + 0x332B50))(this, obj);
	}
	template <typename T = void> T ShowTutorial(Il2CppString* type) {
		return ((T (*)(GameFlowSupport*, Il2CppString*))(Il2CppBase() + 0x332C28))(this, type);
	}
	template <typename T = void> T DisableHudControlsTutorial(bool disable) {
		return ((T (*)(GameFlowSupport*, bool))(Il2CppBase() + 0x33312C))(this, disable);
	}
	template <typename T = void> T HideTutorial() {
		return ((T (*)(GameFlowSupport*))(Il2CppBase() + 0x333200))(this);
	}
	template <typename T = void> T StopSpawning() {
		return ((T (*)(GameFlowSupport*))(Il2CppBase() + 0x333364))(this);
	}
	template <typename T = void> T StartSpawning(Il2CppString* type) {
		return ((T (*)(GameFlowSupport*, Il2CppString*))(Il2CppBase() + 0x333398))(this, type);
	}
	template <typename T = void> T SpawnBoss(void* obj) {
		return ((T (*)(GameFlowSupport*, void*))(Il2CppBase() + 0x3336C0))(this, obj);
	}
	template <typename T = void> T ChangeSpawnSettings(int32_t index) {
		return ((T (*)(GameFlowSupport*, int32_t))(Il2CppBase() + 0x33385C))(this, index);
	}
	template <typename T = void> T EndMissionSuccess() {
		return ((T (*)(GameFlowSupport*))(Il2CppBase() + 0x3338AC))(this);
	}
	template <typename T = void> T EndMissionFail(void* reason) {
		return ((T (*)(GameFlowSupport*, void*))(Il2CppBase() + 0x333950))(this, reason);
	}
	template <typename T = void> T StartCheckingBandages() {
		return ((T (*)(GameFlowSupport*))(Il2CppBase() + 0x3339F8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GameFlowSupport*))(Il2CppBase() + 0x333CC4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GameFlowSupport*))(Il2CppBase() + 0x334078))(this);
	}
	template <typename T = Il2CppArray<void*>*> T GetAvailableNames() {
		return ((T (*)(GameFlowSupport*))(Il2CppBase() + 0x334090))(this);
	}
	template <typename T = Il2CppArray<void*>*> T GetSpawnTypes() {
		return ((T (*)(GameFlowSupport*))(Il2CppBase() + 0x334140))(this);
	}
	template <typename T = Il2CppArray<void*>*> T GetTutorialTypes() {
		return ((T (*)(GameFlowSupport*))(Il2CppBase() + 0x3341F0))(this);
	}
};
