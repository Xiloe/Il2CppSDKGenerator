#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Casino
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD789BC);
	}
	// Fields
	template <typename T = void*> static T& m_CasinoGui() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& m_SlotMachine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& m_IsVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& m_IsInitialized() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9);
	}
	template <typename T = void*> static T& m_Jackpot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& m_Winning() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& m_Random() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = bool> static T& m_PlaysFirstTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = bool> static T& m_DailyBonusActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19);
	}
	template <typename T = Il2CppList<void*>*> static T& m_Prizes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Casino*))(Il2CppBase() + 0x28C034))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x28C03C))(0);
	}
	template <typename T = void> T Init() {
		return ((T (*)(Casino*))(Il2CppBase() + 0x28C150))(this);
	}
	template <typename T = void> T InitializeRewards() {
		return ((T (*)(Casino*))(Il2CppBase() + 0x28C304))(this);
	}
	template <typename T = void> T Show(void* closeDelegate) {
		return ((T (*)(Casino*, void*))(Il2CppBase() + 0x28CEE4))(this, closeDelegate);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(Casino*))(Il2CppBase() + 0x28D248))(this);
	}
	template <typename T = void> T ActivateDailyReward() {
		return ((T (*)(Casino*))(Il2CppBase() + 0x28D544))(this);
	}
	template <typename T = void> T Save(void* file) {
		return ((T (*)(Casino*, void*))(Il2CppBase() + 0x28D5F8))(this, file);
	}
	template <typename T = void> T Load(void* file) {
		return ((T (*)(Casino*, void*))(Il2CppBase() + 0x28DB34))(this, file);
	}
	template <typename T = bool> static T SpinEnabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x28E120))(0);
	}
	template <typename T = float> static T GetLoseLimit() {
		return ((T (*)(void *))(Il2CppBase() + 0x28E268))(0);
	}
	template <typename T = void*> static T GetRandomPrize() {
		return ((T (*)(void *))(Il2CppBase() + 0x28E374))(0);
	}
	template <typename T = void*> static T GenerateReward(void** win) {
		return ((T (*)(void *, void**))(Il2CppBase() + 0x28E91C))(0, win);
	}
	template <typename T = void> T BuyChips() {
		return ((T (*)(Casino*))(Il2CppBase() + 0x28EB28))(this);
	}
	template <typename T = void> T NoFundsResultHandler(void* inPopup, void* inResult) {
		return ((T (*)(Casino*, void*, void*))(Il2CppBase() + 0x28F0C8))(this, inPopup, inResult);
	}
	template <typename T = void> static T AddChips(int32_t amount) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x28EE84))(0, amount);
	}
	template <typename T = void*> static T WaitAndAddChips(float time, int32_t amount) {
		return ((T (*)(void *, float, int32_t))(Il2CppBase() + 0x28F1DC))(0, time, amount);
	}
	template <typename T = void> static T CheckOutOfChips(bool afterRewordVideo) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x28D108))(0, afterRewordVideo);
	}
	template <typename T = void> static T Spin() {
		return ((T (*)(void *))(Il2CppBase() + 0x28F2C4))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Casino*))(Il2CppBase() + 0x28FCC8))(this);
	}
	template <typename T = void> T ShowReward() {
		return ((T (*)(Casino*))(Il2CppBase() + 0x28FF5C))(this);
	}
	template <typename T = void> T CloseReward() {
		return ((T (*)(Casino*))(Il2CppBase() + 0x29011C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Casino*))(Il2CppBase() + 0x2906D0))(this);
	}
};
