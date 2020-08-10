#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiShopItemScroller
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79114);
	}
	// Fields
	template <typename T = void*> T& m_ScrollBarPrefab() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_ScrollInventory() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<void*>*> T& m_ScrollCache() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_InfoPopup() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_EnableControls() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_DebugName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor(void* ScrollBarPrefab, Il2CppString* dbgName) {
		return ((T (*)(GuiShopItemScroller*, void*, Il2CppString*))(Il2CppBase() + 0x379718))(this, ScrollBarPrefab, dbgName);
	}
	template <typename T = void> T CreateItemsCache() {
		return ((T (*)(GuiShopItemScroller*))(Il2CppBase() + 0x394694))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GuiShopItemScroller*))(Il2CppBase() + 0x379890))(this);
	}
	template <typename T = void> T InitGui(void* onSelectionChange) {
		return ((T (*)(GuiShopItemScroller*, void*))(Il2CppBase() + 0x379934))(this, onSelectionChange);
	}
	template <typename T = void> T Insert(Il2CppList<void*>* items, bool hideOwnedHack, void* compareDlgt) {
		return ((T (*)(GuiShopItemScroller*, Il2CppList<void*>*, bool, void*))(Il2CppBase() + 0x379EC8))(this, items, hideOwnedHack, compareDlgt);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(GuiShopItemScroller*))(Il2CppBase() + 0x379BA4))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(GuiShopItemScroller*))(Il2CppBase() + 0x37A454))(this);
	}
	template <typename T = void> T SetSelectedItem(void* id) {
		return ((T (*)(GuiShopItemScroller*, void*))(Il2CppBase() + 0x37A4F4))(this, id);
	}
	template <typename T = void*> T GetSelectedItem() {
		return ((T (*)(GuiShopItemScroller*))(Il2CppBase() + 0x37A83C))(this);
	}
	template <typename T = bool> T HasSelection() {
		return ((T (*)(GuiShopItemScroller*))(Il2CppBase() + 0x394878))(this);
	}
	template <typename T = void> T ShowInfoPopup(int32_t itemIndex, void* itemId) {
		return ((T (*)(GuiShopItemScroller*, int32_t, void*))(Il2CppBase() + 0x394910))(this, itemIndex, itemId);
	}
	template <typename T = void> T HideInfoPopup() {
		return ((T (*)(GuiShopItemScroller*))(Il2CppBase() + 0x394914))(this);
	}
	template <typename T = void> T EnableGui(bool on) {
		return ((T (*)(GuiShopItemScroller*, bool))(Il2CppBase() + 0x39493C))(this, on);
	}
	template <typename T = void> T UpdateItemsViews() {
		return ((T (*)(GuiShopItemScroller*))(Il2CppBase() + 0x37AF24))(this);
	}
};
