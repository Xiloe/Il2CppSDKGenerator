#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiSubtitles
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& Voice() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<void*>*> T& SequenceEx() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& ForceWalkOnPlayer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& ForceShow() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = Il2CppList<void*>*> T& GameEvents() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiSubtitles*))(Il2CppBase() + 0x39AC08))(this);
	}
	template <typename T = bool> T get_hasAnyText() {
		return ((T (*)(GuiSubtitles*))(Il2CppBase() + 0x39ACDC))(this);
	}
	template <typename T = void> static T DeactivateAllRuning() {
		return ((T (*)(void *))(Il2CppBase() + 0x39AD10))(0);
	}
	template <typename T = void> static T ShowAllRunning(bool show) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x380888))(0, show);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GuiSubtitles*))(Il2CppBase() + 0x39AEB4))(this);
	}
	template <typename T = void> T InitializeEvents() {
		return ((T (*)(GuiSubtitles*))(Il2CppBase() + 0x39AED8))(this);
	}
	template <typename T = void> T Activate() {
		return ((T (*)(GuiSubtitles*))(Il2CppBase() + 0x39B1BC))(this);
	}
	template <typename T = void> T EventHandler(Il2CppString* name, void* state) {
		return ((T (*)(GuiSubtitles*, Il2CppString*, void*))(Il2CppBase() + 0x39B298))(this, name, state);
	}
};
