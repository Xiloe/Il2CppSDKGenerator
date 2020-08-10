#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MissionStartDlg
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Dialog() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_Caption() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Description() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Objective() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& m_OrigPos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MissionStartDlg*))(Il2CppBase() + 0x29CC38))(this);
	}
	template <typename T = void> T Init(void* pivot) {
		return ((T (*)(MissionStartDlg*, void*))(Il2CppBase() + 0x2A261C))(this, pivot);
	}
	template <typename T = void> T Show(void* accept, void* close, void* equip, void* buy, void* ownedEquipped, void* missionInfo) {
		return ((T (*)(MissionStartDlg*, void*, void*, void*, void*, void*, void*))(Il2CppBase() + 0x29ED7C))(this, accept, close, equip, buy, ownedEquipped, missionInfo);
	}
	template <typename T = void> T DisableControls(bool disable) {
		return ((T (*)(MissionStartDlg*, bool))(Il2CppBase() + 0x2A0488))(this, disable);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(MissionStartDlg*))(Il2CppBase() + 0x2A54A4))(this);
	}
};
