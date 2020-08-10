#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SlotViewItem
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79108);
	}
	// Fields
	template <typename T = void*> T& m_RootWidget() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_NameLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_ItemSprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_CountLabel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_LockSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_EmptyLabel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_BuyButton() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SlotViewItem*))(Il2CppBase() + 0x246E90))(this);
	}
	template <typename T = void> T InitGui(void* layout, void* btn, int32_t slotId) {
		return ((T (*)(SlotViewItem*, void*, void*, int32_t))(Il2CppBase() + 0x246E98))(this, layout, btn, slotId);
	}
	template <typename T = void> T Show(void* id, bool locked) {
		return ((T (*)(SlotViewItem*, void*, bool))(Il2CppBase() + 0x24704C))(this, id, locked);
	}
	template <typename T = void> T ShowEmpty(bool locked) {
		return ((T (*)(SlotViewItem*, bool))(Il2CppBase() + 0x2472E0))(this, locked);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(SlotViewItem*))(Il2CppBase() + 0x247408))(this);
	}
};
