#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemSelectionPanel
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79200);
	}
	// Fields
	template <typename T = void*> T& m_ShopScroller() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_ItemInfoPanel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_Layout() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_IsInitialized() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsShown() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = Il2CppString*> T& m_DebugName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_OnBuyButton() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_OnUpgradeButton() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_OnEquipButton() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_OnFreeGoldButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor(void* itemTemplate) {
		return ((T (*)(ItemSelectionPanel*, void*))(Il2CppBase() + 0x3CFD80))(this, itemTemplate);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ItemSelectionPanel*))(Il2CppBase() + 0x3CFE84))(this);
	}
	template <typename T = void> T InitGui() {
		return ((T (*)(ItemSelectionPanel*))(Il2CppBase() + 0x3CFED4))(this);
	}
	template <typename T = void> T Insert(Il2CppList<void*>* items) {
		return ((T (*)(ItemSelectionPanel*, Il2CppList<void*>*))(Il2CppBase() + 0x3D00C0))(this, items);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(ItemSelectionPanel*))(Il2CppBase() + 0x3D01B4))(this);
	}
	template <typename T = void> T Show(void* OnBuyButton, void* OnUpgradeButton, void* OnEquipButton, void* OnFreeGoldButton) {
		return ((T (*)(ItemSelectionPanel*, void*, void*, void*, void*))(Il2CppBase() + 0x3D0200))(this, OnBuyButton, OnUpgradeButton, OnEquipButton, OnFreeGoldButton);
	}
	template <typename T = void> T SelectItem(void* id) {
		return ((T (*)(ItemSelectionPanel*, void*))(Il2CppBase() + 0x3D02A8))(this, id);
	}
	template <typename T = void*> T GetSelectedItem() {
		return ((T (*)(ItemSelectionPanel*))(Il2CppBase() + 0x3D027C))(this);
	}
	template <typename T = void> T OnSelectionChange() {
		return ((T (*)(ItemSelectionPanel*))(Il2CppBase() + 0x3D02D4))(this);
	}
	template <typename T = void> T EnableControls(bool on) {
		return ((T (*)(ItemSelectionPanel*, bool))(Il2CppBase() + 0x3D037C))(this, on);
	}
	template <typename T = void> T UpdateItemsViews() {
		return ((T (*)(ItemSelectionPanel*))(Il2CppBase() + 0x3D03CC))(this);
	}
	template <typename T = void> T HideScrollbar(bool hide) {
		return ((T (*)(ItemSelectionPanel*, bool))(Il2CppBase() + 0x3D0438))(this, hide);
	}
};
