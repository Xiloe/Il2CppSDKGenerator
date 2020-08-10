#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameFlowObjective
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Objective() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_TimerSeconds() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_KilledZombies() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_KilledZombiesRandomAdd() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_SpawnExactNumberOfZombies() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_KilledBosses() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_CounterState() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_ObjectiveText() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_ObjectiveText2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_ObjectiveText3() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_DontDisappearText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_WarningSound() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& KilledZombiesStart() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& KilledZombiesCounter() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& KilledZombiesLimit() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& KilledBossesCounter() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& KilledBossesLimit() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& KilledBossesCounterUpdated() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& Timer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& TimerLimit() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& CloseToSuccessTriggered() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& CarryDLObjectsCounter() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& CarryDLObjectsLimit() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = void*> T& PreviousDLObject() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& CurrentDLObjectIndex() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<void*>*> T& m_CarryDLObjects() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<void*>*> T& m_DestructibleObjects() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> T& m_NESController() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32CD1C))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32CDFC))(this);
	}
	template <typename T = void> T ForceSuccess() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32E114))(this);
	}
	template <typename T = void> T Cancel() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32E618))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32E61C))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32E620))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32D23C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32E624))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32E864))(this);
	}
	template <typename T = void> T UpdateTimer() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32ED50))(this);
	}
	template <typename T = void> T StartTimer() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32D374))(this);
	}
	template <typename T = int32_t> T NumOfLiveEnemies() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32EFF0))(this);
	}
	template <typename T = void> T StartKillZombies() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32D814))(this);
	}
	template <typename T = void> T UpdateKilledZombies() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32F298))(this);
	}
	template <typename T = void> T StartKillBoss() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32D9C8))(this);
	}
	template <typename T = void> T OnEnemyDeath(void* Enemy) {
		return ((T (*)(GameFlowObjective*, void*))(Il2CppBase() + 0x32F598))(this, Enemy);
	}
	template <typename T = void> T UpdateKilledBosses() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32F5EC))(this);
	}
	template <typename T = void> T UpdateProtectedObjects() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32F8A8))(this);
	}
	template <typename T = void> T HideTutorial() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32FE78))(this);
	}
	template <typename T = void> T HideTutorial2() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32FF80))(this);
	}
	template <typename T = void> T ShowTutorial2() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x3300E0))(this);
	}
	template <typename T = void> T StartProtectObjects() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32DBAC))(this);
	}
	template <typename T = void> T StartCarryObjects() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x32DB94))(this);
	}
	template <typename T = void*> T PreviousCarryObject() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x3305B0))(this);
	}
	template <typename T = void*> T CurrentCarryObject() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x3305B8))(this);
	}
	template <typename T = void> T NextObjectToCarry() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x3301E8))(this);
	}
	template <typename T = void> T PickUpObject(void* obj) {
		return ((T (*)(GameFlowObjective*, void*))(Il2CppBase() + 0x3306C0))(this, obj);
	}
	template <typename T = void> T PutDownObject(void* obj) {
		return ((T (*)(GameFlowObjective*, void*))(Il2CppBase() + 0x330898))(this, obj);
	}
	template <typename T = void> T ShowObjective(int32_t messageId) {
		return ((T (*)(GameFlowObjective*, int32_t))(Il2CppBase() + 0x32D52C))(this, messageId);
	}
	template <typename T = void> T ShowCounter(bool show) {
		return ((T (*)(GameFlowObjective*, bool))(Il2CppBase() + 0x32E040))(this, show);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(GameFlowObjective*))(Il2CppBase() + 0x330974))(this);
	}
};
