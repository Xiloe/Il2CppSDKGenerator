#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BackupView
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78910);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& m_GuiLines() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_View() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& isUpdateNeccesary() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& retrivingInfoFromCloud() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(BackupView*))(Il2CppBase() + 0x1D7024))(this);
	}
	template <typename T = bool> T get_isUpdateNeccesary() {
		return ((T (*)(BackupView*))(Il2CppBase() + 0x1D7034))(this);
	}
	template <typename T = void> T set_isUpdateNeccesary(bool value) {
		return ((T (*)(BackupView*, bool))(Il2CppBase() + 0x1D703C))(this, value);
	}
	template <typename T = bool> T get_retrivingInfoFromCloud() {
		return ((T (*)(BackupView*))(Il2CppBase() + 0x1D7044))(this);
	}
	template <typename T = void> T set_retrivingInfoFromCloud(bool value) {
		return ((T (*)(BackupView*, bool))(Il2CppBase() + 0x1D6AB0))(this, value);
	}
	template <typename T = void> T GUIView_Init(void* inView, void* inList, void* inPrev, void* inNext) {
		return ((T (*)(BackupView*, void*, void*, void*, void*))(Il2CppBase() + 0x1D6688))(this, inView, inList, inPrev, inNext);
	}
	template <typename T = void> T GUIView_Show() {
		return ((T (*)(BackupView*))(Il2CppBase() + 0x1D72A0))(this);
	}
	template <typename T = void> T GUIView_Hide() {
		return ((T (*)(BackupView*))(Il2CppBase() + 0x1D7380))(this);
	}
	template <typename T = void> T GUIView_Update() {
		return ((T (*)(BackupView*))(Il2CppBase() + 0x1D7458))(this);
	}
	template <typename T = void> T ForceUpdateView() {
		return ((T (*)(BackupView*))(Il2CppBase() + 0x1D7018))(this);
	}
	template <typename T = void> T InitGuiLines(void* inParent) {
		return ((T (*)(BackupView*, void*))(Il2CppBase() + 0x1D704C))(this, inParent);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(BackupView*))(Il2CppBase() + 0x1D7484))(this);
	}
	template <typename T = void> T OnFriendListChanged(void* sender, void* e) {
		return ((T (*)(BackupView*, void*, void*))(Il2CppBase() + 0x1D7C48))(this, sender, e);
	}
	template <typename T = void> T UpdateGUILine(int32_t inLineIndex, int32_t inTextID, void* inLocalPPI, void* inCloudPPI, void* inExtractor, bool inSyncInProgress, bool inTime) {
		return ((T (*)(BackupView*, int32_t, int32_t, void*, void*, void*, bool, bool))(Il2CppBase() + 0x1D7A58))(this, inLineIndex, inTextID, inLocalPPI, inCloudPPI, inExtractor, inSyncInProgress, inTime);
	}
	template <typename T = int32_t> static T UpdateViewm__1D(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1D8230))(0, val);
	}
	template <typename T = int32_t> static T UpdateViewm__1E(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1D8258))(0, val);
	}
	template <typename T = int32_t> static T UpdateViewm__1F(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1D8278))(0, val);
	}
	template <typename T = int32_t> static T UpdateViewm__20(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1D8298))(0, val);
	}
	template <typename T = int32_t> static T UpdateViewm__21(void* val) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1D82B8))(0, val);
	}
};
