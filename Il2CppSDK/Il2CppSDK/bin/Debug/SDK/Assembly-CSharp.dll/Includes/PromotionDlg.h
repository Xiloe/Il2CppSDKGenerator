#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PromotionDlg
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
		return ((T (*)(PromotionDlg*))(Il2CppBase() + 0x29CC48))(this);
	}
	template <typename T = void> T Init(void* pivot) {
		return ((T (*)(PromotionDlg*, void*))(Il2CppBase() + 0x2A2C94))(this, pivot);
	}
	template <typename T = void> T Show(void* close, bool newGoodsInShop) {
		return ((T (*)(PromotionDlg*, void*, bool))(Il2CppBase() + 0x2A0BFC))(this, close, newGoodsInShop);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(PromotionDlg*))(Il2CppBase() + 0x2A63EC))(this);
	}
};
