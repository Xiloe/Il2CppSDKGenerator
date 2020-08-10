#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerPersistentInfoData
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78E78);
	}
	// Fields
	template <typename T = void*> T& Params() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& InventoryList() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = void*> T& EquipList() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = void*> T& Upgrades() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = void*> T& BankData() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& InternalDataVersion() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = void*> T& InternalCloudSyncTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppString*> T& AccountName() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PlayerPersistentInfoData*))(Il2CppBase() + 0x202368))(this);
	}
};
