#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoryChapterDlg
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Story() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_ActualPage() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_Debriefing() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_PrevButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_NextButton() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_Dialog() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_Caption() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_Page() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_Description() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& m_OrigPos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(StoryChapterDlg*))(Il2CppBase() + 0x29CB28))(this);
	}
	template <typename T = void> T Init(void* pivot) {
		return ((T (*)(StoryChapterDlg*, void*))(Il2CppBase() + 0x2A1910))(this, pivot);
	}
	template <typename T = void> T Show(void* close, void* story, bool isDebriefing) {
		return ((T (*)(StoryChapterDlg*, void*, void*, bool))(Il2CppBase() + 0x29CE84))(this, close, story, isDebriefing);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(StoryChapterDlg*))(Il2CppBase() + 0x2A6C50))(this);
	}
	template <typename T = void> T UpdateText() {
		return ((T (*)(StoryChapterDlg*))(Il2CppBase() + 0x2A66F4))(this);
	}
	template <typename T = void> T Prev() {
		return ((T (*)(StoryChapterDlg*))(Il2CppBase() + 0x2A6CF4))(this);
	}
	template <typename T = void> T Next() {
		return ((T (*)(StoryChapterDlg*))(Il2CppBase() + 0x2A6D04))(this);
	}
};
