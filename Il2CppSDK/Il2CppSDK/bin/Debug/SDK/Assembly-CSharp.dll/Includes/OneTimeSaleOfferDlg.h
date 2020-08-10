#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OneTimeSaleOfferDlg
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
	template <typename T = void*> T& m_ObjectName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_ObjectPicture() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_SaleValue() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_Cost_Label() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_Cost_Label2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_CostSpriteGold() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_CostSpriteMoney() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_OneTimeSaleOfferManager() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(OneTimeSaleOfferDlg*))(Il2CppBase() + 0x29CC08))(this);
	}
	template <typename T = void> T Init(void* pivot) {
		return ((T (*)(OneTimeSaleOfferDlg*, void*))(Il2CppBase() + 0x2A1DEC))(this, pivot);
	}
	template <typename T = void> T Show(void* close, void* manager) {
		return ((T (*)(OneTimeSaleOfferDlg*, void*, void*))(Il2CppBase() + 0x29E01C))(this, close, manager);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(OneTimeSaleOfferDlg*))(Il2CppBase() + 0x2A574C))(this);
	}
	template <typename T = void> T CheckMoney() {
		return ((T (*)(OneTimeSaleOfferDlg*))(Il2CppBase() + 0x2A55D4))(this);
	}
	template <typename T = void> T BuyButton() {
		return ((T (*)(OneTimeSaleOfferDlg*))(Il2CppBase() + 0x2A5880))(this);
	}
	template <typename T = void> T MoreGoldButton() {
		return ((T (*)(OneTimeSaleOfferDlg*))(Il2CppBase() + 0x2A59C0))(this);
	}
	template <typename T = void> T InappDlgClosed(void* inPopup, void* inResult) {
		return ((T (*)(OneTimeSaleOfferDlg*, void*, void*))(Il2CppBase() + 0x2A5DF4))(this, inPopup, inResult);
	}
	template <typename T = void> T FreeGoldButton() {
		return ((T (*)(OneTimeSaleOfferDlg*))(Il2CppBase() + 0x2A5E9C))(this);
	}
	template <typename T = void> T MoreGoldButtonm__D(void* result) {
		return ((T (*)(OneTimeSaleOfferDlg*, void*))(Il2CppBase() + 0x2A61F0))(this, result);
	}
};
