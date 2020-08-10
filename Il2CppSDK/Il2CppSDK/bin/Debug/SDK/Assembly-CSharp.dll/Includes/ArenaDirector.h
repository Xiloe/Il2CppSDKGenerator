#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArenaDirector
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD787A4);
	}
	// Fields
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& ENEMIES_IN_WAVE() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_SpawnSettings() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_SpawnDirector() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_Wave() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_WaveSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_WaveKilledEnemies() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_KilledCounterUpdated() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_TimerLimit() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_TimerTextId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_Score() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_ScoreRankModifier() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_ScoreDifficultyModifier() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_WaveInProgressTimerComplete() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<void*>*> T& m_IngameBuyObjects() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_WaveMoneyBagsReward() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& m_States() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ArenaDirector*))(Il2CppBase() + 0x1CFF74))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D004C))(0);
	}
	template <typename T = int32_t> T GetWave() {
		return ((T (*)(ArenaDirector*))(Il2CppBase() + 0x1D0050))(this);
	}
	template <typename T = int32_t> T GetScore() {
		return ((T (*)(ArenaDirector*))(Il2CppBase() + 0x1D0058))(this);
	}
	template <typename T = void> T OnAgentHit(void* agent, void* bodyPart, bool bodyPartRemoved) {
		return ((T (*)(ArenaDirector*, void*, void*, bool))(Il2CppBase() + 0x1D010C))(this, agent, bodyPart, bodyPartRemoved);
	}
	template <typename T = void> T OnEnemyDeath(void* Enemy) {
		return ((T (*)(ArenaDirector*, void*))(Il2CppBase() + 0x1D0314))(this, Enemy);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ArenaDirector*))(Il2CppBase() + 0x1D0358))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ArenaDirector*))(Il2CppBase() + 0x1D0370))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ArenaDirector*))(Il2CppBase() + 0x1D0640))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ArenaDirector*))(Il2CppBase() + 0x1D064C))(this);
	}
	template <typename T = void> T AddWaveReward() {
		return ((T (*)(ArenaDirector*))(Il2CppBase() + 0x1D1970))(this);
	}
	template <typename T = void> T StartNewWave() {
		return ((T (*)(ArenaDirector*))(Il2CppBase() + 0x1D1458))(this);
	}
	template <typename T = void> T UpdateWave(float deltaTime) {
		return ((T (*)(ArenaDirector*, float))(Il2CppBase() + 0x1D17F4))(this, deltaTime);
	}
	template <typename T = void> T WaveFinished() {
		return ((T (*)(ArenaDirector*))(Il2CppBase() + 0x1D1CF8))(this);
	}
	template <typename T = void> T IncreaseWaveDifficulty() {
		return ((T (*)(ArenaDirector*))(Il2CppBase() + 0x1D1B9C))(this);
	}
	template <typename T = bool> T IsWaveComplete() {
		return ((T (*)(ArenaDirector*))(Il2CppBase() + 0x1D1E1C))(this);
	}
	template <typename T = void> T StartTimer(float seconds, int32_t textId) {
		return ((T (*)(ArenaDirector*, float, int32_t))(Il2CppBase() + 0x1D1224))(this, seconds, textId);
	}
	template <typename T = void> T UpdateTimer() {
		return ((T (*)(ArenaDirector*))(Il2CppBase() + 0x1D1E34))(this);
	}
	template <typename T = bool> T IsTimerComplete() {
		return ((T (*)(ArenaDirector*))(Il2CppBase() + 0x1D1354))(this);
	}
	template <typename T = void> T ShowText(int32_t messageId, int32_t argument, bool dontDisappearText) {
		return ((T (*)(ArenaDirector*, int32_t, int32_t, bool))(Il2CppBase() + 0x1D0F64))(this, messageId, argument, dontDisappearText);
	}
	template <typename T = void> T ShowTextSmall(int32_t messageId, int32_t argument, bool dontDisappearText) {
		return ((T (*)(ArenaDirector*, int32_t, int32_t, bool))(Il2CppBase() + 0x1D10C4))(this, messageId, argument, dontDisappearText);
	}
	template <typename T = float> T ScoreModifier() {
		return ((T (*)(ArenaDirector*))(Il2CppBase() + 0x1D0160))(this);
	}
	template <typename T = void> T AddScore(float addValue) {
		return ((T (*)(ArenaDirector*, float))(Il2CppBase() + 0x1D0174))(this, addValue);
	}
	template <typename T = void> T ResetScore() {
		return ((T (*)(ArenaDirector*))(Il2CppBase() + 0x1D1370))(this);
	}
};
