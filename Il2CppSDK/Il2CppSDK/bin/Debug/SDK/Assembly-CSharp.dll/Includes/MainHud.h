#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MainHud
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& m_BuyChipsShouldBeVisible() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_OutOfChips() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& m_Busy() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = int32_t> T& m_ChipsCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Dialog() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_BuyChips() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Spin() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& CloseDelegate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_Chips() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& m_OrigPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_RewardedVideoButton() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MainHud*))(Il2CppBase() + 0x290A70))(this);
	}
	template <typename T = void> T Init(void* pivot) {
		return ((T (*)(MainHud*, void*))(Il2CppBase() + 0x291790))(this, pivot);
	}
	template <typename T = void> T OnChipsChanged() {
		return ((T (*)(MainHud*))(Il2CppBase() + 0x291B00))(this);
	}
	template <typename T = void> T SetChipsAnimate(int32_t Chips) {
		return ((T (*)(MainHud*, int32_t))(Il2CppBase() + 0x291BD4))(this, Chips);
	}
	template <typename T = void> T Show(void* buy, void* accept, void* close, void* jackpot) {
		return ((T (*)(MainHud*, void*, void*, void*, void*))(Il2CppBase() + 0x290BA0))(this, buy, accept, close, jackpot);
	}
	template <typename T = void> T OutOfChips(bool outOfChips) {
		return ((T (*)(MainHud*, bool))(Il2CppBase() + 0x291228))(this, outOfChips);
	}
	template <typename T = void> T SetBusy(bool busy) {
		return ((T (*)(MainHud*, bool))(Il2CppBase() + 0x2914AC))(this, busy);
	}
	template <typename T = void> T CloseAttempt() {
		return ((T (*)(MainHud*))(Il2CppBase() + 0x29211C))(this);
	}
	template <typename T = void> T ApplyBusyState() {
		return ((T (*)(MainHud*))(Il2CppBase() + 0x292054))(this);
	}
	template <typename T = void> T DisableControls(bool disable) {
		return ((T (*)(MainHud*, bool))(Il2CppBase() + 0x29147C))(this, disable);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(MainHud*))(Il2CppBase() + 0x292380))(this);
	}
	template <typename T = void> T ShowBuyChips() {
		return ((T (*)(MainHud*))(Il2CppBase() + 0x292154))(this);
	}
	template <typename T = void> T HideBuyChips() {
		return ((T (*)(MainHud*))(Il2CppBase() + 0x2920E8))(this);
	}
	template <typename T = void> T OnButtonVideo() {
		return ((T (*)(MainHud*))(Il2CppBase() + 0x2927F8))(this);
	}
};
