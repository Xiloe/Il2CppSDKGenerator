#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsAnnouncementControllerEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsAnnouncementController_En"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsAnnouncementControllerEn*))(Il2CppBase() + 0x3567438))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsAnnouncementControllerEn*))(Il2CppBase() + 0x35689E8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsAnnouncementControllerEn*))(Il2CppBase() + 0x3568A8C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsAnnouncementControllerEn*))(Il2CppBase() + 0x3568B34))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t announcement) {
		return ((T (*)(LiveOpsAnnouncementControllerEn*, uintptr_t))(Il2CppBase() + 0x3568BDC))(this, announcement);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsAnnouncementControllerEn*))(Il2CppBase() + 0x3568D04))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsAnnouncementControllerEn*))(Il2CppBase() + 0x3568D0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsAnnouncementControllerEn*))(Il2CppBase() + 0x3568D14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsAnnouncementControllerEn*))(Il2CppBase() + 0x3568D1C))(this);
	}

};

}
