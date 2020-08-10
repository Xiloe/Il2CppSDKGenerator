#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PendingFriendListView
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& m_GuiLines() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_PrevButton() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_NextButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_View() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_FirstVisibleIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isUpdateNeccesary() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(PendingFriendListView*))(Il2CppBase() + 0x1EEAD0))(this);
	}
	template <typename T = bool> T get_isUpdateNeccesary() {
		return ((T (*)(PendingFriendListView*))(Il2CppBase() + 0x1EEAD8))(this);
	}
	template <typename T = void> T set_isUpdateNeccesary(bool value) {
		return ((T (*)(PendingFriendListView*, bool))(Il2CppBase() + 0x1EEAE0))(this, value);
	}
	template <typename T = void> T GUIView_Init(void* inView, void* inList, void* inPrev, void* inNext) {
		return ((T (*)(PendingFriendListView*, void*, void*, void*, void*))(Il2CppBase() + 0x1EEAE8))(this, inView, inList, inPrev, inNext);
	}
	template <typename T = void> T GUIView_Show() {
		return ((T (*)(PendingFriendListView*))(Il2CppBase() + 0x1EED54))(this);
	}
	template <typename T = void> T GUIView_Hide() {
		return ((T (*)(PendingFriendListView*))(Il2CppBase() + 0x1EEF58))(this);
	}
	template <typename T = void> T GUIView_Update() {
		return ((T (*)(PendingFriendListView*))(Il2CppBase() + 0x1EF09C))(this);
	}
	template <typename T = void> T InitGuiLines(void* inParent) {
		return ((T (*)(PendingFriendListView*, void*))(Il2CppBase() + 0x1EEB00))(this, inParent);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(PendingFriendListView*))(Il2CppBase() + 0x1EF0C8))(this);
	}
	template <typename T = void> T OnFriendListChanged(void* sender, void* e) {
		return ((T (*)(PendingFriendListView*, void*, void*))(Il2CppBase() + 0x1EF65C))(this, sender, e);
	}
	template <typename T = void> T Delegate_Prev(void* inInstigator) {
		return ((T (*)(PendingFriendListView*, void*))(Il2CppBase() + 0x1EF668))(this, inInstigator);
	}
	template <typename T = void> T Delegate_Next(void* inInstigator) {
		return ((T (*)(PendingFriendListView*, void*))(Il2CppBase() + 0x1EF768))(this, inInstigator);
	}
};
