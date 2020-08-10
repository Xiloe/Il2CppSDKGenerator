#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpecialRewardDlg
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
		return ((T (*)(SpecialRewardDlg*))(Il2CppBase() + 0x29CC50))(this);
	}
	template <typename T = void> T Init(void* pivot) {
		return ((T (*)(SpecialRewardDlg*, void*))(Il2CppBase() + 0x2A2D78))(this, pivot);
	}
	template <typename T = void> T Show(void* close, void* rewardInfo) {
		return ((T (*)(SpecialRewardDlg*, void*, void*))(Il2CppBase() + 0x2A15BC))(this, close, rewardInfo);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(SpecialRewardDlg*))(Il2CppBase() + 0x2A6604))(this);
	}
};
