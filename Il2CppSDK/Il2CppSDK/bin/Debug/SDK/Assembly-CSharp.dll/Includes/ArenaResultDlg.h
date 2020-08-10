#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArenaResultDlg
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
	template <typename T = void*> T& MissionSpentMoney() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& HeadShotsMoney() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& RemovedLimbsMoney() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& DesintegrationsMoney() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& MoneyFoundMoney() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& MissionEarnedValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& ProfitTotalMoney() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(ArenaResultDlg*))(Il2CppBase() + 0x29960C))(this);
	}
	template <typename T = void> T Init(void* pivot) {
		return ((T (*)(ArenaResultDlg*, void*))(Il2CppBase() + 0x29AB14))(this, pivot);
	}
	template <typename T = void> T Show(void* close, void* arenaInfo) {
		return ((T (*)(ArenaResultDlg*, void*, void*))(Il2CppBase() + 0x29A30C))(this, close, arenaInfo);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(ArenaResultDlg*))(Il2CppBase() + 0x29B288))(this);
	}
	template <typename T = void*> T Show_1(void* arenaInfo) {
		return ((T (*)(ArenaResultDlg*, void*))(Il2CppBase() + 0x29B1D8))(this, arenaInfo);
	}
};
