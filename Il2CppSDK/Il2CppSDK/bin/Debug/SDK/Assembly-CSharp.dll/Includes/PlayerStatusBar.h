#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerStatusBar
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78A9C);
	}
	// Fields
	template <typename T = void*> T& m_Dialog() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_Gold() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_Money() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_LevelProgress() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_FullBar() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_EmptyBar() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_MoneyVal() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& m_GoldVal() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_RankVal() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_RankProgress() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_NewsButton() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PlayerStatusBar*))(Il2CppBase() + 0x207278))(this);
	}
	template <typename T = void> T Init(void* pivot) {
		return ((T (*)(PlayerStatusBar*, void*))(Il2CppBase() + 0x207280))(this, pivot);
	}
	template <typename T = void> T Show(void* back, void* gold, void* money, void* xp, void* options) {
		return ((T (*)(PlayerStatusBar*, void*, void*, void*, void*, void*))(Il2CppBase() + 0x2079EC))(this, back, gold, money, xp, options);
	}
	template <typename T = void> T InitData() {
		return ((T (*)(PlayerStatusBar*))(Il2CppBase() + 0x207B58))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(PlayerStatusBar*))(Il2CppBase() + 0x207F00))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(PlayerStatusBar*))(Il2CppBase() + 0x2083F4))(this);
	}
	template <typename T = void> T EnableControls(bool enable) {
		return ((T (*)(PlayerStatusBar*, bool))(Il2CppBase() + 0x2084CC))(this, enable);
	}
	template <typename T = void> T EnableButon(Il2CppString* buttonName, bool enable) {
		return ((T (*)(PlayerStatusBar*, Il2CppString*, bool))(Il2CppBase() + 0x2085EC))(this, buttonName, enable);
	}
	template <typename T = void> T EnableWidget(Il2CppString* widgetName, bool enable) {
		return ((T (*)(PlayerStatusBar*, Il2CppString*, bool))(Il2CppBase() + 0x208648))(this, widgetName, enable);
	}
	template <typename T = void> T OnGoldChanged() {
		return ((T (*)(PlayerStatusBar*))(Il2CppBase() + 0x20875C))(this);
	}
	template <typename T = void> T OnMoneyChanged() {
		return ((T (*)(PlayerStatusBar*))(Il2CppBase() + 0x208984))(this);
	}
	template <typename T = void> T OnExperienceChanged() {
		return ((T (*)(PlayerStatusBar*))(Il2CppBase() + 0x208BAC))(this);
	}
	template <typename T = void> T SetGold(int32_t Gold) {
		return ((T (*)(PlayerStatusBar*, int32_t))(Il2CppBase() + 0x207C6C))(this, Gold);
	}
	template <typename T = void> T SetMoney(int32_t Money) {
		return ((T (*)(PlayerStatusBar*, int32_t))(Il2CppBase() + 0x207CFC))(this, Money);
	}
	template <typename T = void> T SetXp() {
		return ((T (*)(PlayerStatusBar*))(Il2CppBase() + 0x207D8C))(this);
	}
	template <typename T = void> T SetGoldAnimate(int32_t Gold) {
		return ((T (*)(PlayerStatusBar*, int32_t))(Il2CppBase() + 0x208834))(this, Gold);
	}
	template <typename T = void> T SetMoneyAnimate(int32_t Money) {
		return ((T (*)(PlayerStatusBar*, int32_t))(Il2CppBase() + 0x208A5C))(this, Money);
	}
	template <typename T = void> T SetXpAnimate() {
		return ((T (*)(PlayerStatusBar*))(Il2CppBase() + 0x208BB0))(this);
	}
	template <typename T = void> T SetPlayerLevel(int32_t Level, int32_t Xp, int32_t MinXp, int32_t MaxXp, bool updateGui) {
		return ((T (*)(PlayerStatusBar*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x208E58))(this, Level, Xp, MinXp, MaxXp, updateGui);
	}
};
