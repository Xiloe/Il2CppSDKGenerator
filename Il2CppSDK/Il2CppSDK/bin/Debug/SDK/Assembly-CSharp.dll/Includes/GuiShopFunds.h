#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiShopFunds
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD791C8);
	}
	// Fields
	template <typename T = void*> T& m_RootSprite() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_FundsLabel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_SpriteGold() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_SpriteMoney() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor(void* rootSprite) {
		return ((T (*)(GuiShopFunds*, void*))(Il2CppBase() + 0x390E20))(this, rootSprite);
	}
	template <typename T = void> T SetValue(int32_t cost, bool gold, bool plusSign) {
		return ((T (*)(GuiShopFunds*, int32_t, bool, bool))(Il2CppBase() + 0x3914CC))(this, cost, gold, plusSign);
	}
	template <typename T = void> T Show(bool on) {
		return ((T (*)(GuiShopFunds*, bool))(Il2CppBase() + 0x391498))(this, on);
	}
};
