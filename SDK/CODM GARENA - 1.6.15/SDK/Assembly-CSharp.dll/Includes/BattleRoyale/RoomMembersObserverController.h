#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class RoomMembersObserverController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "RoomMembersObserverController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnSpreadClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnRetractClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnColliderBgClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSpreadObservers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Init() {
		return ((T (*)(RoomMembersObserverController*))(Il2CppBase() + 0x3571CA4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomMembersObserverController*))(Il2CppBase() + 0x3571DB0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomMembersObserverController*))(Il2CppBase() + 0x3571E54))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomMembersObserverController*))(Il2CppBase() + 0x3572128))(this);
	}
	template <typename T = void> T OnBtnSpreadClick() {
		return ((T (*)(RoomMembersObserverController*))(Il2CppBase() + 0x3572304))(this);
	}
	template <typename T = void> T OnBtnRetractClick() {
		return ((T (*)(RoomMembersObserverController*))(Il2CppBase() + 0x35724EC))(this);
	}
	template <typename T = void> T OnColliderBgClick() {
		return ((T (*)(RoomMembersObserverController*))(Il2CppBase() + 0x3572594))(this);
	}
	template <typename T = void> T ShowSpreadObservers(bool show) {
		return ((T (*)(RoomMembersObserverController*, bool))(Il2CppBase() + 0x35723AC))(this, show);
	}
	template <typename T = void> T InitDefault() {
		return ((T (*)(RoomMembersObserverController*))(Il2CppBase() + 0x3572064))(this);
	}
	template <typename T = void> T RefreshPlayerList() {
		return ((T (*)(RoomMembersObserverController*))(Il2CppBase() + 0x3572B40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomMembersObserverController*))(Il2CppBase() + 0x3572BF8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomMembersObserverController*))(Il2CppBase() + 0x3572C00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomMembersObserverController*))(Il2CppBase() + 0x3572C08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomMembersObserverController*))(Il2CppBase() + 0x3572C10))(this);
	}

};

}
