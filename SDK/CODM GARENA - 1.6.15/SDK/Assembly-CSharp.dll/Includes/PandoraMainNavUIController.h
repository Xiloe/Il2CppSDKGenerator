#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PandoraMainNavUIController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PandoraMainNavUIController"));
	}

	template <typename T = uintptr_t> T& m_Ctr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NavigationWillPop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PandoraMainNavUIController*))(Il2CppBase() + 0x3EFD7CC))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(PandoraMainNavUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EFD86C))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(PandoraMainNavUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3EFDB60))(this, data, nextData);
	}
	template <typename T = void> T NavigationWillPop() {
		return ((T (*)(PandoraMainNavUIController*))(Il2CppBase() + 0x3EFDD0C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PandoraMainNavUIController*))(Il2CppBase() + 0x3EFDDA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NavigationWillPop() {
		return ((T (*)(PandoraMainNavUIController*))(Il2CppBase() + 0x3EFDDAC))(this);
	}

};

}
