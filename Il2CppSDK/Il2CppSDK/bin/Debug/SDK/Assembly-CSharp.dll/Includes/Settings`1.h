#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Settings1
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& ID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Description() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Rank() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& ShopWidgetPrefab() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& ShopWidgetPrefabName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& HudWidgetPrefab() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& SaleInPercent() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& NewInShop() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Settings1*))(Il2CppBase() + 0x43A660))(this);
	}
	template <typename T = void*> T get_ShopWidget() {
		return ((T (*)(Settings1*))(Il2CppBase() + 0x43A688))(this);
	}
	template <typename T = void*> T get_HudWidget() {
		return ((T (*)(Settings1*))(Il2CppBase() + 0x43A744))(this);
	}
	template <typename T = Il2CppString*> T GetIdAsStr() {
		return ((T (*)(Settings1*))(Il2CppBase() + 0x43A800))(this);
	}
};
