#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiBankScreen
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_ScreenLayout() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_ButtonFBDT() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_ButtonFBMFG() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_ButtonFBSG() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_FacebookMFG() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_FacebookDT() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_FacebookSG() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_VisitingSite() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_LoggedIn() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_WaitForLogin() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiBankScreen*))(Il2CppBase() + 0x354E84))(this);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(GuiBankScreen*))(Il2CppBase() + 0x354E8C))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(GuiBankScreen*))(Il2CppBase() + 0x3557C0))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(GuiBankScreen*))(Il2CppBase() + 0x355AAC))(this);
	}
	template <typename T = void> T OnGUI_Enable() {
		return ((T (*)(GuiBankScreen*))(Il2CppBase() + 0x355B90))(this);
	}
	template <typename T = void> T OnGUI_Disable() {
		return ((T (*)(GuiBankScreen*))(Il2CppBase() + 0x355BC0))(this);
	}
	template <typename T = void> T OnClose(void* inWidget) {
		return ((T (*)(GuiBankScreen*, void*))(Il2CppBase() + 0x355BE8))(this, inWidget);
	}
	template <typename T = void> T OnButtonAdBanner(void* inWidget) {
		return ((T (*)(GuiBankScreen*, void*))(Il2CppBase() + 0x355CF0))(this, inWidget);
	}
	template <typename T = void> T OnButtonFBDT(void* inWidget) {
		return ((T (*)(GuiBankScreen*, void*))(Il2CppBase() + 0x355DCC))(this, inWidget);
	}
	template <typename T = void> T OnButtonFBMFG(void* inWidget) {
		return ((T (*)(GuiBankScreen*, void*))(Il2CppBase() + 0x355DD4))(this, inWidget);
	}
	template <typename T = void> T OnButtonFBSG(void* inWidget) {
		return ((T (*)(GuiBankScreen*, void*))(Il2CppBase() + 0x355DD8))(this, inWidget);
	}
	template <typename T = void> T OnButtonMoreApps(void* inWidget) {
		return ((T (*)(GuiBankScreen*, void*))(Il2CppBase() + 0x355DDC))(this, inWidget);
	}
	template <typename T = void> T UpdateSiteButton(void* Site) {
		return ((T (*)(GuiBankScreen*, void*))(Il2CppBase() + 0x3558C4))(this, Site);
	}
	template <typename T = void> T VisitSite(void* Site) {
		return ((T (*)(GuiBankScreen*, void*))(Il2CppBase() + 0x355DD0))(this, Site);
	}
	template <typename T = void> T OnLoginResult(bool Result) {
		return ((T (*)(GuiBankScreen*, bool))(Il2CppBase() + 0x355ED0))(this, Result);
	}
	template <typename T = void*> T WaitForLogin() {
		return ((T (*)(GuiBankScreen*))(Il2CppBase() + 0x355EE0))(this);
	}
	template <typename T = void> T OnApplicationPause(bool Pause) {
		return ((T (*)(GuiBankScreen*, bool))(Il2CppBase() + 0x355F8C))(this, Pause);
	}
	template <typename T = void> T OnStatusCheckResult(bool Result) {
		return ((T (*)(GuiBankScreen*, bool))(Il2CppBase() + 0x356090))(this, Result);
	}
};
