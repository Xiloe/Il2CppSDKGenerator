#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StatisticsView
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
	template <typename T = void*> T& m_Statistics() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_Mode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& m_FriendName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_FirstVisibleIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& isUpdateNeccesary() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(StatisticsView*))(Il2CppBase() + 0x264CA0))(this);
	}
	template <typename T = bool> T get_isUpdateNeccesary() {
		return ((T (*)(StatisticsView*))(Il2CppBase() + 0x264D8C))(this);
	}
	template <typename T = void> T set_isUpdateNeccesary(bool value) {
		return ((T (*)(StatisticsView*, bool))(Il2CppBase() + 0x264D94))(this, value);
	}
	template <typename T = void> T GUIView_Init(void* inView, void* inList, void* inPrev, void* inNext) {
		return ((T (*)(StatisticsView*, void*, void*, void*, void*))(Il2CppBase() + 0x263FD4))(this, inView, inList, inPrev, inNext);
	}
	template <typename T = void> T GUIView_Show() {
		return ((T (*)(StatisticsView*))(Il2CppBase() + 0x264FF0))(this);
	}
	template <typename T = void> T GUIView_Hide() {
		return ((T (*)(StatisticsView*))(Il2CppBase() + 0x265198))(this);
	}
	template <typename T = void> T GUIView_Update() {
		return ((T (*)(StatisticsView*))(Il2CppBase() + 0x265270))(this);
	}
	template <typename T = void> T SetStatisticsMode(void* inMode, Il2CppString* inFriendName) {
		return ((T (*)(StatisticsView*, void*, Il2CppString*))(Il2CppBase() + 0x264214))(this, inMode, inFriendName);
	}
	template <typename T = void> T InitGuiLines(void* inParent) {
		return ((T (*)(StatisticsView*, void*))(Il2CppBase() + 0x264D9C))(this, inParent);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(StatisticsView*))(Il2CppBase() + 0x26529C))(this);
	}
	template <typename T = void> T OnFriendListChanged(void* sender, void* e) {
		return ((T (*)(StatisticsView*, void*, void*))(Il2CppBase() + 0x265934))(this, sender, e);
	}
	template <typename T = void> T Delegate_Prev(void* inInstigator) {
		return ((T (*)(StatisticsView*, void*))(Il2CppBase() + 0x265940))(this, inInstigator);
	}
	template <typename T = void> T Delegate_Next(void* inInstigator) {
		return ((T (*)(StatisticsView*, void*))(Il2CppBase() + 0x265A40))(this, inInstigator);
	}
};
