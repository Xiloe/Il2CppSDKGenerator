#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ThrowWeaponBtnController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ThrowWeaponBtnController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGrenadeShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ThrowWeaponBtnController*))(Il2CppBase() + 0x27C8B8C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ThrowWeaponBtnController*))(Il2CppBase() + 0x27C8C30))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(ThrowWeaponBtnController*))(Il2CppBase() + 0x27C8DC0))(this);
	}
	template <typename T = void> T OnBtnUp() {
		return ((T (*)(ThrowWeaponBtnController*))(Il2CppBase() + 0x27C8E68))(this);
	}
	template <typename T = void> T OnGrenadeShowed(uintptr_t msg) {
		return ((T (*)(ThrowWeaponBtnController*, uintptr_t))(Il2CppBase() + 0x27C90AC))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ThrowWeaponBtnController*))(Il2CppBase() + 0x27C9164))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ThrowWeaponBtnController*))(Il2CppBase() + 0x27C916C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(ThrowWeaponBtnController*))(Il2CppBase() + 0x27C9174))(this);
	}

};

}
