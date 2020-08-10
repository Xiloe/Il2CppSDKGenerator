#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HudPause
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79150);
	}
	// Fields
	template <typename T = void*> T& m_PauseButton() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HudPause*))(Il2CppBase() + 0x3B6664))(this);
	}
	template <typename T = bool> T VisibleOnStart() {
		return ((T (*)(HudPause*))(Il2CppBase() + 0x3B6668))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HudPause*))(Il2CppBase() + 0x3B6670))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HudPause*))(Il2CppBase() + 0x3B68F8))(this);
	}
	template <typename T = void> T LateUpdate(float deltaTime) {
		return ((T (*)(HudPause*, float))(Il2CppBase() + 0x3B68FC))(this, deltaTime);
	}
	template <typename T = void> T ShowWidgets(bool on) {
		return ((T (*)(HudPause*, bool))(Il2CppBase() + 0x3B6900))(this, on);
	}
	template <typename T = void> T StoreControlsOrigPositions() {
		return ((T (*)(HudPause*))(Il2CppBase() + 0x3B6948))(this);
	}
	template <typename T = void> T UpdateControlsPosition() {
		return ((T (*)(HudPause*))(Il2CppBase() + 0x3B6AA8))(this);
	}
	template <typename T = void> T StartHighlight() {
		return ((T (*)(HudPause*))(Il2CppBase() + 0x3B6AAC))(this);
	}
	template <typename T = void> T StopHighlight() {
		return ((T (*)(HudPause*))(Il2CppBase() + 0x3B6B9C))(this);
	}
	template <typename T = void*> T HighlightObject(void* sprite) {
		return ((T (*)(HudPause*, void*))(Il2CppBase() + 0x3B6AF4))(this, sprite);
	}
	template <typename T = void> T PauseButtonDelegate(bool inside) {
		return ((T (*)(HudPause*, bool))(Il2CppBase() + 0x3B6BF4))(this, inside);
	}
};
