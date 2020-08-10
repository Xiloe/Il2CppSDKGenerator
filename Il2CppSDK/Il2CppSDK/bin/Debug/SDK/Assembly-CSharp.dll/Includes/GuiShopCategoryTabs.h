#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiShopCategoryTabs
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD791FC);
	}
	// Fields
	template <typename T = void*> T& m_Pivot() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_Layout() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_ShopButtons_Widget() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_FundsButtons_Widget() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_TutorialShop() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, void*>*> T& m_CategoryDict() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<void*, void*>*> T& m_TabButtonsDict() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_CategoryDelegate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiShopCategoryTabs*))(Il2CppBase() + 0x392110))(this);
	}
	template <typename T = void> T GuiInit() {
		return ((T (*)(GuiShopCategoryTabs*))(Il2CppBase() + 0x3921F0))(this);
	}
	template <typename T = void> T ShowShop() {
		return ((T (*)(GuiShopCategoryTabs*))(Il2CppBase() + 0x392668))(this);
	}
	template <typename T = void> T ShowFunds() {
		return ((T (*)(GuiShopCategoryTabs*))(Il2CppBase() + 0x3926B4))(this);
	}
	template <typename T = void> T DisableByTutorial(bool dis) {
		return ((T (*)(GuiShopCategoryTabs*, bool))(Il2CppBase() + 0x392700))(this, dis);
	}
	template <typename T = void> T AddCategory(Il2CppString* btnName, void* cat) {
		return ((T (*)(GuiShopCategoryTabs*, Il2CppString*, void*))(Il2CppBase() + 0x392490))(this, btnName, cat);
	}
	template <typename T = void> T ClearHighlight() {
		return ((T (*)(GuiShopCategoryTabs*))(Il2CppBase() + 0x39286C))(this);
	}
	template <typename T = void> T OnCategoryTouch(void* w) {
		return ((T (*)(GuiShopCategoryTabs*, void*))(Il2CppBase() + 0x392B0C))(this, w);
	}
	template <typename T = void> T OnFreeGoldTouch(void* w) {
		return ((T (*)(GuiShopCategoryTabs*, void*))(Il2CppBase() + 0x392E08))(this, w);
	}
	template <typename T = void> T Highlight(void* c) {
		return ((T (*)(GuiShopCategoryTabs*, void*))(Il2CppBase() + 0x392CB0))(this, c);
	}
	template <typename T = void> T SetLastSelection(void* c, void* selId) {
		return ((T (*)(GuiShopCategoryTabs*, void*, void*))(Il2CppBase() + 0x392E0C))(this, c, selId);
	}
	template <typename T = void*> T GetLastSelection(void* c) {
		return ((T (*)(GuiShopCategoryTabs*, void*))(Il2CppBase() + 0x392EB8))(this, c);
	}
};
