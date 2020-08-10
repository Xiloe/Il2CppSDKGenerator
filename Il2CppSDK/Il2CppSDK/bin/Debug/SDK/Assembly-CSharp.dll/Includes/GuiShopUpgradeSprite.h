#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiShopUpgradeSprite
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79188);
	}
	// Fields
	template <typename T = void*> T& m_RootSprite() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<void*>*> T& m_Levels() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_CurrentLevel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_On() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	// Methods
	template <typename T = void> T _ctor(void* rootSprite) {
		return ((T (*)(GuiShopUpgradeSprite*, void*))(Il2CppBase() + 0x3862F4))(this, rootSprite);
	}
	template <typename T = void> T SetLevel(int32_t level) {
		return ((T (*)(GuiShopUpgradeSprite*, int32_t))(Il2CppBase() + 0x39A79C))(this, level);
	}
	template <typename T = void> T ShowLevelSprite() {
		return ((T (*)(GuiShopUpgradeSprite*))(Il2CppBase() + 0x39AAE8))(this);
	}
	template <typename T = void> T Show(bool on, int32_t level) {
		return ((T (*)(GuiShopUpgradeSprite*, bool, int32_t))(Il2CppBase() + 0x387B68))(this, on, level);
	}
};
