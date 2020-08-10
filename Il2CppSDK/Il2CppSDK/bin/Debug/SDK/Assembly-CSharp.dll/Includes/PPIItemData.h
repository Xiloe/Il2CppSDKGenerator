#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PPIItemData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7963C);
	}
	// Fields
	template <typename T = void*> T& ID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& EquipSlotIdx() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& StatsUseCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& StatsKills() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = bool> T IsValid() {
		return ((T (*)(PPIItemData*))(Il2CppBase() + 0x20A57C))(this);
	}
};
