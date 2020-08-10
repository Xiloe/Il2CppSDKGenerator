#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyRewardDlg
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
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DailyRewardDlg*))(Il2CppBase() + 0x29CC28))(this);
	}
	template <typename T = void> T Init(void* pivot) {
		return ((T (*)(DailyRewardDlg*, void*))(Il2CppBase() + 0x2A23F4))(this, pivot);
	}
	template <typename T = void> T Show(void* close, bool arenaUnlocked) {
		return ((T (*)(DailyRewardDlg*, void*, bool))(Il2CppBase() + 0x29E660))(this, close, arenaUnlocked);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(DailyRewardDlg*))(Il2CppBase() + 0x2A3320))(this);
	}
};
