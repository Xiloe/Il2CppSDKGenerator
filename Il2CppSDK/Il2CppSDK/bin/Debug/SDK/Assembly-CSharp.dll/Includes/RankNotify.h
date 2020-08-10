#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RankNotify
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Parent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_Text() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_NewGoodsInShop() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_CurrentAlpha() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_Speed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_Progress() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& TimeToHide() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsVisible() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor(void* layout) {
		return ((T (*)(RankNotify*, void*))(Il2CppBase() + 0x3A389C))(this, layout);
	}
	template <typename T = bool> T get_IsVisible() {
		return ((T (*)(RankNotify*))(Il2CppBase() + 0x3A3A2C))(this);
	}
	template <typename T = void> T set_IsVisible(bool value) {
		return ((T (*)(RankNotify*, bool))(Il2CppBase() + 0x3A3A34))(this, value);
	}
	template <typename T = float> T get_Progress() {
		return ((T (*)(RankNotify*))(Il2CppBase() + 0x3A3A3C))(this);
	}
	template <typename T = void> T Enable(bool enable) {
		return ((T (*)(RankNotify*, bool))(Il2CppBase() + 0x3A3A44))(this, enable);
	}
	template <typename T = void> T Show(int32_t newRank) {
		return ((T (*)(RankNotify*, int32_t))(Il2CppBase() + 0x3A3C28))(this, newRank);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RankNotify*))(Il2CppBase() + 0x3A44A8))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(RankNotify*))(Il2CppBase() + 0x3A39F0))(this);
	}
};
