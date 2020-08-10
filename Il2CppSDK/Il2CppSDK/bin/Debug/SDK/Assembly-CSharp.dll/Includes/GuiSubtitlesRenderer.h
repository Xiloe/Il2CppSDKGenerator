#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiSubtitlesRenderer
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78ED8);
	}
	// Fields
	template <typename T = void*> T& m_Background() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Label() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Audio() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_CurrentSubtitles() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& wasAudioPlaying() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiSubtitlesRenderer*))(Il2CppBase() + 0x39B558))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuiSubtitlesRenderer*))(Il2CppBase() + 0x39B560))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GuiSubtitlesRenderer*))(Il2CppBase() + 0x39B63C))(this);
	}
	template <typename T = void> static T Deactivate() {
		return ((T (*)(void *))(Il2CppBase() + 0x39AD14))(0);
	}
	template <typename T = void> static T ShowSubtitles(void* inSubtitles) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x39B1C4))(0, inSubtitles);
	}
	template <typename T = void> static T ShowAllRunning(bool show) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x39ADE0))(0, show);
	}
	template <typename T = void> T DeactivateInternal() {
		return ((T (*)(GuiSubtitlesRenderer*))(Il2CppBase() + 0x39B6F0))(this);
	}
	template <typename T = void> T ShowSubtitlesInternal(void* inSubtitles) {
		return ((T (*)(GuiSubtitlesRenderer*, void*))(Il2CppBase() + 0x39B864))(this, inSubtitles);
	}
	template <typename T = void> T ShowAllRunningInternal(bool show) {
		return ((T (*)(GuiSubtitlesRenderer*, bool))(Il2CppBase() + 0x39B974))(this, show);
	}
	template <typename T = void*> T RunSubtitlesSequence() {
		return ((T (*)(GuiSubtitlesRenderer*))(Il2CppBase() + 0x39BD78))(this);
	}
	template <typename T = void> T OnSequenceBegin() {
		return ((T (*)(GuiSubtitlesRenderer*))(Il2CppBase() + 0x39BE24))(this);
	}
	template <typename T = void> T OnSequenceEnd() {
		return ((T (*)(GuiSubtitlesRenderer*))(Il2CppBase() + 0x39BAA0))(this);
	}
	template <typename T = bool> T CanShowBackground() {
		return ((T (*)(GuiSubtitlesRenderer*))(Il2CppBase() + 0x39BC40))(this);
	}
	template <typename T = void*> T ShowBackGround() {
		return ((T (*)(GuiSubtitlesRenderer*))(Il2CppBase() + 0x39BF90))(this);
	}
	template <typename T = void*> T HideBackGround() {
		return ((T (*)(GuiSubtitlesRenderer*))(Il2CppBase() + 0x39C03C))(this);
	}
	template <typename T = void> static T Suspend(bool suspend) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x38088C))(0, suspend);
	}
	template <typename T = void> T SuspendInternal(bool suspend) {
		return ((T (*)(GuiSubtitlesRenderer*, bool))(Il2CppBase() + 0x39C0E8))(this, suspend);
	}
};
