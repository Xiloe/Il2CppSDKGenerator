#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CityMoneyInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78B5C);
	}
	// Fields
	template <typename T = float> T& m_LastRewardTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Reward() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_RewardIntervalMinutes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor(void* reward, float rewardIntervalMinutes) {
		return ((T (*)(CityMoneyInfo*, void*, float))(Il2CppBase() + 0x2BC2A0))(this, reward, rewardIntervalMinutes);
	}
	template <typename T = void*> T GatherRevenue() {
		return ((T (*)(CityMoneyInfo*))(Il2CppBase() + 0x2BC2C8))(this);
	}
	template <typename T = float> T SecondsToNextReward() {
		return ((T (*)(CityMoneyInfo*))(Il2CppBase() + 0x2BC3E4))(this);
	}
	template <typename T = float> T SecondsToNextAction(double lastAction, float actionCooldownInSeconds) {
		return ((T (*)(CityMoneyInfo*, double, float))(Il2CppBase() + 0x2BC420))(this, lastAction, actionCooldownInSeconds);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CityMoneyInfo*))(Il2CppBase() + 0x2BC5EC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CityMoneyInfo*))(Il2CppBase() + 0x2BC5F0))(this);
	}
};
