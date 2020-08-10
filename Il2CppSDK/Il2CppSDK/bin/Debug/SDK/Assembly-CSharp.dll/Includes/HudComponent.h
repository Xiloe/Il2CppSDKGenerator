#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HudComponent
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> T& m_Enabled() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_Visible() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HudComponent*))(Il2CppBase() + 0x3A4640))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HudComponent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HudComponent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(HudComponent*))(Il2CppBase() + 0x3A4730))(this);
	}
	template <typename T = bool> T VisibleOnStart() {
		return ((T (*)(HudComponent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T LateUpdate(float deltaTime) {
		return ((T (*)(HudComponent*, float))(Il2CppBase() + 0x3A4734))(this, deltaTime);
	}
	template <typename T = void> T LateUpdate100ms() {
		return ((T (*)(HudComponent*))(Il2CppBase() + 0x3A4738))(this);
	}
	template <typename T = void> T LateUpdate200ms() {
		return ((T (*)(HudComponent*))(Il2CppBase() + 0x3A473C))(this);
	}
	template <typename T = void> T HandleAction(void* a) {
		return ((T (*)(HudComponent*, void*))(Il2CppBase() + 0x3A4740))(this, a);
	}
	template <typename T = void> T StoreControlsOrigPositions() {
		return ((T (*)(HudComponent*))(Il2CppBase() + 0x3A4744))(this);
	}
	template <typename T = void> T UpdateControlsPosition() {
		return ((T (*)(HudComponent*))(Il2CppBase() + 0x3A4748))(this);
	}
	template <typename T = bool> T Enable(void* layer, bool enable) {
		return ((T (*)(HudComponent*, void*, bool))(Il2CppBase() + 0x3A474C))(this, layer, enable);
	}
	template <typename T = bool> T IsEnabled() {
		return ((T (*)(HudComponent*))(Il2CppBase() + 0x3A4838))(this);
	}
	template <typename T = void> T Show(bool on) {
		return ((T (*)(HudComponent*, bool))(Il2CppBase() + 0x3A48A0))(this, on);
	}
	template <typename T = bool> T IsVisible() {
		return ((T (*)(HudComponent*))(Il2CppBase() + 0x3A48FC))(this);
	}
	template <typename T = void> T ShowWidgets(bool on) {
		return ((T (*)(HudComponent*, bool))(Il2CppBase() + 0x0))(this, on);
	}
	template <typename T = void*> static T GetChildByName(void* obj, Il2CppString* name) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0xA08CFC))(0, obj, name);
	}
};
