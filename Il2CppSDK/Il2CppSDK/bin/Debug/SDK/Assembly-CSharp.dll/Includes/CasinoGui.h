#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CasinoGui
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD789C4);
	}
	// Fields
	template <typename T = void*> T& m_MainHud() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_SpecialReward() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_Pivot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CasinoGui*))(Il2CppBase() + 0x28C23C))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(CasinoGui*))(Il2CppBase() + 0x290B98))(this);
	}
	template <typename T = void> T ShowMainHud(void* buy, void* accept, void* close, void* jackpot) {
		return ((T (*)(CasinoGui*, void*, void*, void*, void*))(Il2CppBase() + 0x28D0D0))(this, buy, accept, close, jackpot);
	}
	template <typename T = void> T OutOfChips(bool outOfChips) {
		return ((T (*)(CasinoGui*, bool))(Il2CppBase() + 0x28F29C))(this, outOfChips);
	}
	template <typename T = void> T DisableHudControls(bool disable) {
		return ((T (*)(CasinoGui*, bool))(Il2CppBase() + 0x28EE5C))(this, disable);
	}
	template <typename T = void> T SetBusy(bool busy) {
		return ((T (*)(CasinoGui*, bool))(Il2CppBase() + 0x28F750))(this, busy);
	}
	template <typename T = void> T HideMainHud() {
		return ((T (*)(CasinoGui*))(Il2CppBase() + 0x28D398))(this);
	}
	template <typename T = void> T ShowSpecialReward(void* close, void* reward) {
		return ((T (*)(CasinoGui*, void*, void*))(Il2CppBase() + 0x2900F4))(this, close, reward);
	}
	template <typename T = void> T HideSpecialReward() {
		return ((T (*)(CasinoGui*))(Il2CppBase() + 0x290678))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CasinoGui*))(Il2CppBase() + 0x290A80))(this);
	}
	template <typename T = void> T DestroyInternal() {
		return ((T (*)(CasinoGui*))(Il2CppBase() + 0x290B9C))(this);
	}
};
