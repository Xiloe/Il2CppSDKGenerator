#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuiScroller1
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_OnSelectionChange() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& m_OnHoldBegin() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& m_OnHoldEnd() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& m_DebugName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_LastItem() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<void*>*> T& m_Items() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& m_ScrollPivot() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& m_BackgroundLayout() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_CurrentItemIndex() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_ScrollLimitMin() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_ScrollLimitMax() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_ScrollLimitHardMin() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_ScrollLimitHardMax() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& m_DragInput() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& m_Transition() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& m_ScrollMode() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& m_WasHolding() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& ItemOffset() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GuiScroller1*))(Il2CppBase() + 0x4362B8))(this);
	}
	template <typename T = float> T get_ItemOffset() {
		return ((T (*)(GuiScroller1*))(Il2CppBase() + 0x4363BC))(this);
	}
	template <typename T = void> T set_ItemOffset(float value) {
		return ((T (*)(GuiScroller1*, float))(Il2CppBase() + 0x4363C4))(this, value);
	}
	template <typename T = void> T Show() {
		return ((T (*)(GuiScroller1*))(Il2CppBase() + 0x4363CC))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(GuiScroller1*))(Il2CppBase() + 0x4364F4))(this);
	}
	template <typename T = void> T UpdateItemsViews() {
		return ((T (*)(GuiScroller1*))(Il2CppBase() + 0x436600))(this);
	}
	template <typename T = void> T InitGui(void* bgLayout, void* scrollPivot) {
		return ((T (*)(GuiScroller1*, void*, void*))(Il2CppBase() + 0x436898))(this, bgLayout, scrollPivot);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(GuiScroller1*))(Il2CppBase() + 0x436A58))(this);
	}
	template <typename T = void> T HideItems() {
		return ((T (*)(GuiScroller1*))(Il2CppBase() + 0x436A9C))(this);
	}
	template <typename T = void> T AddItem(void* uid, void* w, void* itemGui) {
		return ((T (*)(GuiScroller1*, void*, void*, void*))(Il2CppBase() + 0x436CE4))(this, uid, w, itemGui);
	}
	template <typename T = void> T ComputeScrollLimits() {
		return ((T (*)(GuiScroller1*))(Il2CppBase() + 0x436E8C))(this);
	}
	template <typename T = bool> T HasSelection() {
		return ((T (*)(GuiScroller1*))(Il2CppBase() + 0x436FD0))(this);
	}
	template <typename T = void*> T GetSelectedItem() {
		return ((T (*)(GuiScroller1*))(Il2CppBase() + 0x43702C))(this);
	}
	template <typename T = void> T SetSelectedItem(void* uid) {
		return ((T (*)(GuiScroller1*, void*))(Il2CppBase() + 0x437074))(this, uid);
	}
	template <typename T = int32_t> T GetNearestItem(float lastScrollDir) {
		return ((T (*)(GuiScroller1*, float))(Il2CppBase() + 0x4370D8))(this, lastScrollDir);
	}
	template <typename T = int32_t> T GetCurrentItem() {
		return ((T (*)(GuiScroller1*))(Il2CppBase() + 0x4371FC))(this);
	}
	template <typename T = int32_t> T GetItemOnPos(float pos) {
		return ((T (*)(GuiScroller1*, float))(Il2CppBase() + 0x437384))(this, pos);
	}
	template <typename T = void> T ScrollToItem(int32_t index) {
		return ((T (*)(GuiScroller1*, int32_t))(Il2CppBase() + 0x4374B0))(this, index);
	}
	template <typename T = int32_t> T FindItemIndex(void* uid) {
		return ((T (*)(GuiScroller1*, void*))(Il2CppBase() + 0x437594))(this, uid);
	}
	template <typename T = void> T MoveScrollerPivot(Il2CppVector2 delta) {
		return ((T (*)(GuiScroller1*, Il2CppVector2))(Il2CppBase() + 0x437674))(this, delta);
	}
	template <typename T = bool> T AdjustScrollToLimits() {
		return ((T (*)(GuiScroller1*))(Il2CppBase() + 0x4377F8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GuiScroller1*))(Il2CppBase() + 0x437878))(this);
	}
	template <typename T = void> T DetectTap() {
		return ((T (*)(GuiScroller1*))(Il2CppBase() + 0x4379E4))(this);
	}
	template <typename T = void> T DetectHold() {
		return ((T (*)(GuiScroller1*))(Il2CppBase() + 0x437C3C))(this);
	}
	template <typename T = void> T UpdateStateIdle() {
		return ((T (*)(GuiScroller1*))(Il2CppBase() + 0x437D98))(this);
	}
	template <typename T = void> T UpdateStateDrag() {
		return ((T (*)(GuiScroller1*))(Il2CppBase() + 0x437E18))(this);
	}
	template <typename T = void> T UpdateStateMomentum() {
		return ((T (*)(GuiScroller1*))(Il2CppBase() + 0x438084))(this);
	}
	template <typename T = void> T UpdateStateAnim() {
		return ((T (*)(GuiScroller1*))(Il2CppBase() + 0x438390))(this);
	}
};
