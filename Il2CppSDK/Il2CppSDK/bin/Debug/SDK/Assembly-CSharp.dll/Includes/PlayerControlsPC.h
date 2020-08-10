#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerControlsPC
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& Enabled() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& States() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& MouseCameraCtrl() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& GpadCameraCtrl() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& LockCursorAfterStart() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& PrevMousePos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	// Methods
	template <typename T = void> T _ctor(void* inStates) {
		return ((T (*)(PlayerControlsPC*, void*))(Il2CppBase() + 0x1F9338))(this, inStates);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PlayerControlsPC*))(Il2CppBase() + 0x1F943C))(this);
	}
	template <typename T = void> T UpdateMouseInteractionTouch() {
		return ((T (*)(PlayerControlsPC*))(Il2CppBase() + 0x1FA93C))(this);
	}
	template <typename T = void> T ChangeWeapon(void* type) {
		return ((T (*)(PlayerControlsPC*, void*))(Il2CppBase() + 0x1FB140))(this, type);
	}
	template <typename T = void> T UseGadget(void* item) {
		return ((T (*)(PlayerControlsPC*, void*))(Il2CppBase() + 0x1FB460))(this, item);
	}
	template <typename T = float> static T ClampAngle(float angle, float min, float max) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x1F8164))(0, angle, min, max);
	}
};
