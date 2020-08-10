#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HudGadgets
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79160);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& Gadgets() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<void*>*> T& m_GadgetInfos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_ActivePowerupExpiring() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_SelectionImage() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_SelectedIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HudGadgets*))(Il2CppBase() + 0x3AADC4))(this);
	}
	template <typename T = bool> T VisibleOnStart() {
		return ((T (*)(HudGadgets*))(Il2CppBase() + 0x3AAE94))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HudGadgets*))(Il2CppBase() + 0x3AAE9C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HudGadgets*))(Il2CppBase() + 0x3AB7A0))(this);
	}
	template <typename T = void> T LateUpdate(float deltaTime) {
		return ((T (*)(HudGadgets*, float))(Il2CppBase() + 0x3AB7A4))(this, deltaTime);
	}
	template <typename T = void> T SetGadgets(Il2CppList<void*>* gadgets) {
		return ((T (*)(HudGadgets*, Il2CppList<void*>*))(Il2CppBase() + 0x3AC310))(this, gadgets);
	}
	template <typename T = void> T SetGadgetHudInfo(void* id, void* widget) {
		return ((T (*)(HudGadgets*, void*, void*))(Il2CppBase() + 0x3AC438))(this, id, widget);
	}
	template <typename T = void*> T GetGadgetID(int32_t index) {
		return ((T (*)(HudGadgets*, int32_t))(Il2CppBase() + 0x3AC880))(this, index);
	}
	template <typename T = void> T SetSelected(int32_t index) {
		return ((T (*)(HudGadgets*, int32_t))(Il2CppBase() + 0x3AC964))(this, index);
	}
	template <typename T = int32_t> T GetSelected() {
		return ((T (*)(HudGadgets*))(Il2CppBase() + 0x3AC968))(this);
	}
	template <typename T = void> T SelectNext() {
		return ((T (*)(HudGadgets*))(Il2CppBase() + 0x3AC970))(this);
	}
	template <typename T = void> T SelectPrev() {
		return ((T (*)(HudGadgets*))(Il2CppBase() + 0x3ACB14))(this);
	}
	template <typename T = void> T StartHighlight(int32_t index) {
		return ((T (*)(HudGadgets*, int32_t))(Il2CppBase() + 0x3ABEC8))(this, index);
	}
	template <typename T = void> T StopHighlight() {
		return ((T (*)(HudGadgets*))(Il2CppBase() + 0x3AC160))(this);
	}
	template <typename T = void*> T HighlightObject(void* sprite) {
		return ((T (*)(HudGadgets*, void*))(Il2CppBase() + 0x3ACCC4))(this, sprite);
	}
	template <typename T = void> T ShowWidgets(bool on) {
		return ((T (*)(HudGadgets*, bool))(Il2CppBase() + 0x3ACD74))(this, on);
	}
	template <typename T = bool> T Enable(void* layer, bool enable) {
		return ((T (*)(HudGadgets*, void*, bool))(Il2CppBase() + 0x3ACDA4))(this, layer, enable);
	}
	template <typename T = bool> T FingerIdInUse(int32_t fingerId) {
		return ((T (*)(HudGadgets*, int32_t))(Il2CppBase() + 0x3ACDA8))(this, fingerId);
	}
	template <typename T = void> T StoreControlsOrigPositions() {
		return ((T (*)(HudGadgets*))(Il2CppBase() + 0x3ACDB0))(this);
	}
	template <typename T = void> T UpdateControlsPosition() {
		return ((T (*)(HudGadgets*))(Il2CppBase() + 0x3ACFC0))(this);
	}
	template <typename T = void*> T GetChildByName(void* btn, Il2CppString* name) {
		return ((T (*)(HudGadgets*, void*, Il2CppString*))(Il2CppBase() + 0xA08D94))(this, btn, name);
	}
	template <typename T = void> T ShowGadgetSprites(bool show) {
		return ((T (*)(HudGadgets*, bool))(Il2CppBase() + 0x3AC56C))(this, show);
	}
	template <typename T = void> T UseGadget(int32_t gadgetIdx) {
		return ((T (*)(HudGadgets*, int32_t))(Il2CppBase() + 0x3AD158))(this, gadgetIdx);
	}
	template <typename T = void> T TouchDelegate1() {
		return ((T (*)(HudGadgets*))(Il2CppBase() + 0x3AD284))(this);
	}
	template <typename T = void> T TouchDelegate2() {
		return ((T (*)(HudGadgets*))(Il2CppBase() + 0x3AD28C))(this);
	}
	template <typename T = void> T TouchDelegate3() {
		return ((T (*)(HudGadgets*))(Il2CppBase() + 0x3AD294))(this);
	}
	template <typename T = void> T TouchDelegate4() {
		return ((T (*)(HudGadgets*))(Il2CppBase() + 0x3AD29C))(this);
	}
	template <typename T = void> T TouchDelegate5() {
		return ((T (*)(HudGadgets*))(Il2CppBase() + 0x3AD2A4))(this);
	}
};
