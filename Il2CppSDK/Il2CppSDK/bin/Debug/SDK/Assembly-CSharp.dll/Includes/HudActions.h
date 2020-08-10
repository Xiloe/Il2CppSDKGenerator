#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HudActions
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7914C);
	}
	// Fields
	template <typename T = void*> T& m_AttackButton() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_UseButton() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_ReloadButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_AimButton() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& s_PivotMainName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& s_LayoutMainName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& s_AttackButtonName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& s_ReloadButtonName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& s_UseButtonName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& s_AimButtonName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HudActions*))(Il2CppBase() + 0x37D1DC))(this);
	}
	template <typename T = bool> T VisibleOnStart() {
		return ((T (*)(HudActions*))(Il2CppBase() + 0x3A03BC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HudActions*))(Il2CppBase() + 0x3A03C4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HudActions*))(Il2CppBase() + 0x3A0784))(this);
	}
	template <typename T = void> T LateUpdate(float deltaTime) {
		return ((T (*)(HudActions*, float))(Il2CppBase() + 0x3A0788))(this, deltaTime);
	}
	template <typename T = void> T ShowWidgets(bool on) {
		return ((T (*)(HudActions*, bool))(Il2CppBase() + 0x3A0B4C))(this, on);
	}
	template <typename T = void> T StoreControlsOrigPositions() {
		return ((T (*)(HudActions*))(Il2CppBase() + 0x3A0C1C))(this);
	}
	template <typename T = void> T UpdateControlsPosition() {
		return ((T (*)(HudActions*))(Il2CppBase() + 0x3A0EE0))(this);
	}
	template <typename T = void> T AttackButtonBeginDelegate() {
		return ((T (*)(HudActions*))(Il2CppBase() + 0x3A1204))(this);
	}
	template <typename T = void> T AttackButtonEndDelegate(bool inside) {
		return ((T (*)(HudActions*, bool))(Il2CppBase() + 0x3A12E4))(this, inside);
	}
	template <typename T = void> T UseButtonDelegate() {
		return ((T (*)(HudActions*))(Il2CppBase() + 0x3A1478))(this);
	}
	template <typename T = void> T OnReloadButton() {
		return ((T (*)(HudActions*))(Il2CppBase() + 0x3A160C))(this);
	}
	template <typename T = void> T OnAimButton() {
		return ((T (*)(HudActions*))(Il2CppBase() + 0x3A17A0))(this);
	}
};
