#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.GunFightGame {

class GunFightSignboardHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.GunFightGame", "GunFightSignboardHUD"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Signboards() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& ShowSignboard() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_GFGameInfo() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_GFGame() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSignboardHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_GFGameInfo() {
		return ((T (*)(GunFightSignboardHUD*))(Il2CppBase() + 0x40280D0))(this);
	}
	template <typename T = uintptr_t> T get_GFGame() {
		return ((T (*)(GunFightSignboardHUD*))(Il2CppBase() + 0x40281DC))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(GunFightSignboardHUD*))(Il2CppBase() + 0x40282E8))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(GunFightSignboardHUD*))(Il2CppBase() + 0x40282F0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunFightSignboardHUD*))(Il2CppBase() + 0x4028300))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GunFightSignboardHUD*))(Il2CppBase() + 0x40284A8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GunFightSignboardHUD*))(Il2CppBase() + 0x40285B0))(this);
	}
	template <typename T = void> T ShowSignboardHUD(uintptr_t msg) {
		return ((T (*)(GunFightSignboardHUD*, uintptr_t))(Il2CppBase() + 0x4028660))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(GunFightSignboardHUD*))(Il2CppBase() + 0x40287DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GunFightSignboardHUD*))(Il2CppBase() + 0x40287E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GunFightSignboardHUD*))(Il2CppBase() + 0x40287EC))(this);
	}

};

}
