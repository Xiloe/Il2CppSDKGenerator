#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiShopInfoPopup
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD791EC);
	}
	// Fields
	template <typename T = void*> T& m_WeaponLayout() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_ItemLayout() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_WeaponPositionPivot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_ItemPositionPivot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Name_Label() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiShopInfoPopup*))(Il2CppBase() + 0x393FD4))(this);
	}
	template <typename T = void> T GuiInit() {
		return ((T (*)(GuiShopInfoPopup*))(Il2CppBase() + 0x393FDC))(this);
	}
	template <typename T = void> T Show(void* item, float desiredPos) {
		return ((T (*)(GuiShopInfoPopup*, void*, float))(Il2CppBase() + 0x3941A0))(this, item, desiredPos);
	}
	template <typename T = void> T ShowWeaponInfo(Il2CppVector2 pos, void* inf) {
		return ((T (*)(GuiShopInfoPopup*, Il2CppVector2, void*))(Il2CppBase() + 0x394320))(this, pos, inf);
	}
	template <typename T = void> T ShowItemInfo(Il2CppVector2 pos, void* inf) {
		return ((T (*)(GuiShopInfoPopup*, Il2CppVector2, void*))(Il2CppBase() + 0x394454))(this, pos, inf);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(GuiShopInfoPopup*))(Il2CppBase() + 0x394588))(this);
	}
};
