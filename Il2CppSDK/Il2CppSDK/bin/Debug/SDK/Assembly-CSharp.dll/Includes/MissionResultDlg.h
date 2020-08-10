#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MissionResultDlg
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Dialog() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppColor> T& m_FailColor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& m_OrigPos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& MissionBonusMoney() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& HeadShotsMoney() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& RemovedLimbsMoney() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& DesintegrationsMoney() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& MoneyFoundMoney() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& MissionEarnedValue() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& ProfitTotalMoney() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MissionResultDlg*))(Il2CppBase() + 0x29CC40))(this);
	}
	template <typename T = void> T Init(void* pivot) {
		return ((T (*)(MissionResultDlg*, void*))(Il2CppBase() + 0x2A2818))(this, pivot);
	}
	template <typename T = void> T Show(void* close, void* missionInfo) {
		return ((T (*)(MissionResultDlg*, void*, void*))(Il2CppBase() + 0x2A0538))(this, close, missionInfo);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(MissionResultDlg*))(Il2CppBase() + 0x2A37D8))(this);
	}
	template <typename T = void*> T Show_1(void* missionInfo) {
		return ((T (*)(MissionResultDlg*, void*))(Il2CppBase() + 0x2A3728))(this, missionInfo);
	}
};
