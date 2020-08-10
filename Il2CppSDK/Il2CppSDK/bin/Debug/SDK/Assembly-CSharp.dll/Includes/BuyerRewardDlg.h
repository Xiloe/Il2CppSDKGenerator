#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuyerRewardDlg
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Dialog() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_OrigPos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_RewardXPos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(BuyerRewardDlg*))(Il2CppBase() + 0x29CB38))(this);
	}
	template <typename T = void> T Init(void* pivot) {
		return ((T (*)(BuyerRewardDlg*, void*))(Il2CppBase() + 0x2A1D08))(this, pivot);
	}
	template <typename T = void> T Show(void* close, int32_t numGold, bool alienGun, int32_t numCasinoChips, bool reward180) {
		return ((T (*)(BuyerRewardDlg*, void*, int32_t, bool, int32_t, bool))(Il2CppBase() + 0x29D610))(this, close, numGold, alienGun, numCasinoChips, reward180);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(BuyerRewardDlg*))(Il2CppBase() + 0x2A2F88))(this);
	}
};
