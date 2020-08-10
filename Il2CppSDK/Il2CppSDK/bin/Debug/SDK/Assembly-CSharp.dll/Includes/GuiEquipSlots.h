#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiEquipSlots
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD790F4);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& m_Items() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_SlotItemType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_PressedSlotIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_IsShown() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_OnSlotSelectionDone() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor(void* type) {
		return ((T (*)(GuiEquipSlots*, void*))(Il2CppBase() + 0x373C6C))(this, type);
	}
	template <typename T = void> T AddSlot(void* view, void* btn, void* team) {
		return ((T (*)(GuiEquipSlots*, void*, void*, void*))(Il2CppBase() + 0x3751C4))(this, view, btn, team);
	}
	template <typename T = Il2CppVector2> T GetHighlightPos(int32_t index) {
		return ((T (*)(GuiEquipSlots*, int32_t))(Il2CppBase() + 0x37751C))(this, index);
	}
	template <typename T = int32_t> T FindSlotIndex(void* w) {
		return ((T (*)(GuiEquipSlots*, void*))(Il2CppBase() + 0x37B118))(this, w);
	}
	template <typename T = void*> T GetSlot(int32_t index) {
		return ((T (*)(GuiEquipSlots*, int32_t))(Il2CppBase() + 0x37B240))(this, index);
	}
	template <typename T = void> T OnWeaponSlot(void* w) {
		return ((T (*)(GuiEquipSlots*, void*))(Il2CppBase() + 0x37B2E0))(this, w);
	}
	template <typename T = void> T OnWeaponSlot_ByIndex(int32_t index) {
		return ((T (*)(GuiEquipSlots*, int32_t))(Il2CppBase() + 0x37B300))(this, index);
	}
	template <typename T = void> T SelectSlotHACK(int32_t index) {
		return ((T (*)(GuiEquipSlots*, int32_t))(Il2CppBase() + 0x376998))(this, index);
	}
	template <typename T = void> T OnEquipDone(void* selItem, bool cancel) {
		return ((T (*)(GuiEquipSlots*, void*, bool))(Il2CppBase() + 0x37B510))(this, selItem, cancel);
	}
	template <typename T = void> T Show() {
		return ((T (*)(GuiEquipSlots*))(Il2CppBase() + 0x3757B4))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(GuiEquipSlots*))(Il2CppBase() + 0x376100))(this);
	}
	template <typename T = void> T InitItemInSlot(void* uid, int32_t slot) {
		return ((T (*)(GuiEquipSlots*, void*, int32_t))(Il2CppBase() + 0x375A44))(this, uid, slot);
	}
	template <typename T = void> T SetSlotLocked(int32_t slot, bool locked) {
		return ((T (*)(GuiEquipSlots*, int32_t, bool))(Il2CppBase() + 0x3765F0))(this, slot, locked);
	}
	template <typename T = bool> T IsSlotLocked(int32_t slot) {
		return ((T (*)(GuiEquipSlots*, int32_t))(Il2CppBase() + 0x37B650))(this, slot);
	}
	template <typename T = void*> T GetSlotItem(int32_t slot) {
		return ((T (*)(GuiEquipSlots*, int32_t))(Il2CppBase() + 0x378794))(this, slot);
	}
	template <typename T = void*> T GetSlotTeam(int32_t slot) {
		return ((T (*)(GuiEquipSlots*, int32_t))(Il2CppBase() + 0x37B6F8))(this, slot);
	}
	template <typename T = int32_t> T GetFreeSlotIndex() {
		return ((T (*)(GuiEquipSlots*))(Il2CppBase() + 0x3781BC))(this);
	}
	template <typename T = bool> static T GetFreeSlotIndexm__35(void* p) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x37B71C))(0, p);
	}
};
