#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsVedioControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsVedioController_CA"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_ActivityData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& liveOpsActivityClickReport() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__VedioBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SwitchJumpTypeClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsVedioControllerCA*))(Il2CppBase() + 0x432877C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsVedioControllerCA*))(Il2CppBase() + 0x4328820))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsVedioControllerCA*))(Il2CppBase() + 0x432892C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsVedioControllerCA*))(Il2CppBase() + 0x4328AC4))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t data) {
		return ((T (*)(LiveOpsVedioControllerCA*, uintptr_t))(Il2CppBase() + 0x4328C44))(this, data);
	}
	template <typename T = void> T _VedioBtnClicked() {
		return ((T (*)(LiveOpsVedioControllerCA*))(Il2CppBase() + 0x43295D4))(this);
	}
	template <typename T = void> T _SwitchJumpTypeClick() {
		return ((T (*)(LiveOpsVedioControllerCA*))(Il2CppBase() + 0x43298D8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsVedioControllerCA*))(Il2CppBase() + 0x4329A64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsVedioControllerCA*))(Il2CppBase() + 0x4329A6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsVedioControllerCA*))(Il2CppBase() + 0x4329A74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsVedioControllerCA*))(Il2CppBase() + 0x4329A7C))(this);
	}

};

}
