#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BackupScreen
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_BackupView() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_ScreenPivot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_ScreenLayout() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_RestoreButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_BackupButton() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_RetrieveDataAction() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_BackupDataAction() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(BackupScreen*))(Il2CppBase() + 0x1D5D20))(this);
	}
	template <typename T = void> T OnGUI_Init() {
		return ((T (*)(BackupScreen*))(Il2CppBase() + 0x1D5D30))(this);
	}
	template <typename T = void> T OnGUI_Show() {
		return ((T (*)(BackupScreen*))(Il2CppBase() + 0x1D6694))(this);
	}
	template <typename T = void> T OnGUI_Hide() {
		return ((T (*)(BackupScreen*))(Il2CppBase() + 0x1D67B8))(this);
	}
	template <typename T = void> T OnGUI_Update() {
		return ((T (*)(BackupScreen*))(Il2CppBase() + 0x1D68C8))(this);
	}
	template <typename T = void> T OnGUI_Destroy() {
		return ((T (*)(BackupScreen*))(Il2CppBase() + 0x1D6AB8))(this);
	}
	template <typename T = void> T OnGUI_Enable() {
		return ((T (*)(BackupScreen*))(Il2CppBase() + 0x1D6ABC))(this);
	}
	template <typename T = void> T OnGUI_Disable() {
		return ((T (*)(BackupScreen*))(Il2CppBase() + 0x1D6AF0))(this);
	}
	template <typename T = void> T OnBack(void* inWidget) {
		return ((T (*)(BackupScreen*, void*))(Il2CppBase() + 0x1D6B24))(this, inWidget);
	}
	template <typename T = void> T OnDownload(void* inWidget) {
		return ((T (*)(BackupScreen*, void*))(Il2CppBase() + 0x1D6C2C))(this, inWidget);
	}
	template <typename T = void> T OnUpload(void* inWidget) {
		return ((T (*)(BackupScreen*, void*))(Il2CppBase() + 0x1D6DF0))(this, inWidget);
	}
	template <typename T = void> T OnDownloadHandler(void* inPopup, void* inResult) {
		return ((T (*)(BackupScreen*, void*, void*))(Il2CppBase() + 0x1D6FB4))(this, inPopup, inResult);
	}
	template <typename T = void> T OnUploadHandler(void* inPopup, void* inResult) {
		return ((T (*)(BackupScreen*, void*, void*))(Il2CppBase() + 0x1D6FC8))(this, inPopup, inResult);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(BackupScreen*))(Il2CppBase() + 0x1D6FF0))(this);
	}
};
