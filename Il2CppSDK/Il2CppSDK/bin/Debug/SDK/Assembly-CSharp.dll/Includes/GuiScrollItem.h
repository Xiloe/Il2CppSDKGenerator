#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiScrollItem
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD791F8);
	}
	// Fields
	template <typename T = void*> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_Inf() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Equiped_Sprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Owned_Sprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_New_Sprite() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_Sale_Sprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_Sale_Label() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_Unlocked_Sprite() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_NewUpgrade_Sprite() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_UpgradeSprite() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_Gold_Sprite() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_Name_Sprite() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_Name_Label() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& m_Thumbnail() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_DiscountLabel() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& m_LockedOn() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& m_RequiredRank_Label() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& m_CountLabel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_EquipMenu() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	// Methods
	template <typename T = void> T _ctor(void* id, void* w, bool equipMenu) {
		return ((T (*)(GuiScrollItem*, void*, void*, bool))(Il2CppBase() + 0x38FD20))(this, id, w, equipMenu);
	}
	template <typename T = void> T UpdateItemInfo() {
		return ((T (*)(GuiScrollItem*))(Il2CppBase() + 0x390034))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(GuiScrollItem*))(Il2CppBase() + 0x3900DC))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(GuiScrollItem*))(Il2CppBase() + 0x3908A8))(this);
	}
	template <typename T = void> T InitGui() {
		return ((T (*)(GuiScrollItem*))(Il2CppBase() + 0x38FD84))(this);
	}
};
