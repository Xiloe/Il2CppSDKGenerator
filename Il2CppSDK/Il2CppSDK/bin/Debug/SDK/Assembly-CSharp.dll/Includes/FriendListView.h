#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FriendListView
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_OnFriendSelectDelegate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<void*>*> T& m_GuiLines() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_PrevButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_NextButton() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_View() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_FirstVisibleIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isUpdateNeccesary() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(FriendListView*))(Il2CppBase() + 0x31ED70))(this);
	}
	template <typename T = bool> T get_isUpdateNeccesary() {
		return ((T (*)(FriendListView*))(Il2CppBase() + 0x31ED78))(this);
	}
	template <typename T = void> T set_isUpdateNeccesary(bool value) {
		return ((T (*)(FriendListView*, bool))(Il2CppBase() + 0x31ED80))(this, value);
	}
	template <typename T = void> T GUIView_Init(void* inView, void* inList, void* inPrev, void* inNext) {
		return ((T (*)(FriendListView*, void*, void*, void*, void*))(Il2CppBase() + 0x31ED88))(this, inView, inList, inPrev, inNext);
	}
	template <typename T = void> T GUIView_Show() {
		return ((T (*)(FriendListView*))(Il2CppBase() + 0x31F048))(this);
	}
	template <typename T = void> T GUIView_Hide() {
		return ((T (*)(FriendListView*))(Il2CppBase() + 0x31F264))(this);
	}
	template <typename T = void> T GUIView_Update() {
		return ((T (*)(FriendListView*))(Il2CppBase() + 0x31F39C))(this);
	}
	template <typename T = void> T InitGuiLines(void* inParent) {
		return ((T (*)(FriendListView*, void*))(Il2CppBase() + 0x31EDA0))(this, inParent);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(FriendListView*))(Il2CppBase() + 0x31F3C8))(this);
	}
	template <typename T = void> T OnFriendListChanged(void* sender, void* e) {
		return ((T (*)(FriendListView*, void*, void*))(Il2CppBase() + 0x31F950))(this, sender, e);
	}
	template <typename T = void> T Delegate_Prev(void* inInstigator) {
		return ((T (*)(FriendListView*, void*))(Il2CppBase() + 0x31F95C))(this, inInstigator);
	}
	template <typename T = void> T Delegate_Next(void* inInstigator) {
		return ((T (*)(FriendListView*, void*))(Il2CppBase() + 0x31FA5C))(this, inInstigator);
	}
	template <typename T = void> T Delegate_OnSelect(Il2CppString* inFriendName) {
		return ((T (*)(FriendListView*, Il2CppString*))(Il2CppBase() + 0x31FC08))(this, inFriendName);
	}
};
