#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class DelAccLoginPopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "DelAccLoginPopController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_LoadingFlowController() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnsureClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallbackToLoadingFlowControllerFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Backtologin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_LoadingFlowController() {
		return ((T (*)(DelAccLoginPopController*))(Il2CppBase() + 0x33D28F8))(this);
	}
	template <typename T = void> T set_LoadingFlowController(uintptr_t value) {
		return ((T (*)(DelAccLoginPopController*, uintptr_t))(Il2CppBase() + 0x33D2900))(this, value);
	}
	template <typename T = void> T Init() {
		return ((T (*)(DelAccLoginPopController*))(Il2CppBase() + 0x33D2908))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(DelAccLoginPopController*))(Il2CppBase() + 0x33D2B80))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(DelAccLoginPopController*))(Il2CppBase() + 0x33D2C24))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(DelAccLoginPopController*))(Il2CppBase() + 0x33D2DC4))(this);
	}
	template <typename T = void> T _OnBtnCloseClick() {
		return ((T (*)(DelAccLoginPopController*))(Il2CppBase() + 0x33D2F40))(this);
	}
	template <typename T = void> T _OnBtnsureClick() {
		return ((T (*)(DelAccLoginPopController*))(Il2CppBase() + 0x33D325C))(this);
	}
	template <typename T = void> T CallbackToLoadingFlowControllerFinish(uintptr_t result) {
		return ((T (*)(DelAccLoginPopController*, uintptr_t))(Il2CppBase() + 0x33D3194))(this, result);
	}
	template <typename T = void> T Backtologin() {
		return ((T (*)(DelAccLoginPopController*))(Il2CppBase() + 0x33D3020))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DelAccLoginPopController*))(Il2CppBase() + 0x33D33F4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(DelAccLoginPopController*))(Il2CppBase() + 0x33D33FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(DelAccLoginPopController*))(Il2CppBase() + 0x33D3404))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(DelAccLoginPopController*))(Il2CppBase() + 0x33D340C))(this);
	}

};

}
