#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutVehicleSkinItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutVehicleSkinItemController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mLoadoutDS() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mLoadoutReddotDS() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mCacheItem() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReddotActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLoadoutVehicleNavController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutVehicleSkinItemController*))(Il2CppBase() + 0x1F4A354))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutVehicleSkinItemController*))(Il2CppBase() + 0x1F4A3F8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutVehicleSkinItemController*))(Il2CppBase() + 0x1F4A5A8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutVehicleSkinItemController*))(Il2CppBase() + 0x1F4A650))(this);
	}
	template <typename T = void> T SetReddotActive(uintptr_t state) {
		return ((T (*)(LoadoutVehicleSkinItemController*, uintptr_t))(Il2CppBase() + 0x1F4A6F8))(this, state);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(LoadoutVehicleSkinItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1F4A8A8))(this, list, index, data);
	}
	template <typename T = void> T RefreshLoadoutVehicleNavController(int32_t index) {
		return ((T (*)(LoadoutVehicleSkinItemController*, int32_t))(Il2CppBase() + 0x1F4ACBC))(this, index);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutVehicleSkinItemController*))(Il2CppBase() + 0x1F4B140))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutVehicleSkinItemController*))(Il2CppBase() + 0x1F4B148))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutVehicleSkinItemController*))(Il2CppBase() + 0x1F4B150))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutVehicleSkinItemController*))(Il2CppBase() + 0x1F4B158))(this);
	}

};

}
