#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUIBasePivot
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_InAnimation() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_LoopAnimation() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_OutAnimation() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_FadeAlpha() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_GuiManager() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_Anim() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_IsVisible() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_ParentWidget() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_ParentPivot() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_ParentLayout() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_LayoutsInitialized() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_Layouts() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_ControlsEnabled() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GUIBasePivot*))(Il2CppBase() + 0x362FF4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GUIBasePivot*))(Il2CppBase() + 0x36300C))(this);
	}
	template <typename T = bool> T IsVisible() {
		return ((T (*)(GUIBasePivot*))(Il2CppBase() + 0x3632E8))(this);
	}
	template <typename T = void> T Show(bool show) {
		return ((T (*)(GUIBasePivot*, bool))(Il2CppBase() + 0x3632F0))(this, show);
	}
	template <typename T = void> T PivotAnimFinished(int32_t idx) {
		return ((T (*)(GUIBasePivot*, int32_t))(Il2CppBase() + 0x363760))(this, idx);
	}
	template <typename T = void> T ShowLayouts(bool show) {
		return ((T (*)(GUIBasePivot*, bool))(Il2CppBase() + 0x3634E4))(this, show);
	}
	template <typename T = void> T InitLayouts() {
		return ((T (*)(GUIBasePivot*))(Il2CppBase() + 0x363810))(this);
	}
	template <typename T = void*> T GetLayout(Il2CppString* layoutName) {
		return ((T (*)(GUIBasePivot*, Il2CppString*))(Il2CppBase() + 0x363988))(this, layoutName);
	}
	template <typename T = float> T GetParentFadeAlpha() {
		return ((T (*)(GUIBasePivot*))(Il2CppBase() + 0x363AB8))(this);
	}
	template <typename T = float> T GetFadeAlpha(bool recursive) {
		return ((T (*)(GUIBasePivot*, bool))(Il2CppBase() + 0x361A6C))(this, recursive);
	}
	template <typename T = void> T PrepareParent() {
		return ((T (*)(GUIBasePivot*))(Il2CppBase() + 0x363174))(this);
	}
	template <typename T = void> T EnableControls(bool on) {
		return ((T (*)(GUIBasePivot*, bool))(Il2CppBase() + 0x363B84))(this, on);
	}
	template <typename T = bool> T IsControlEnabled() {
		return ((T (*)(GUIBasePivot*))(Il2CppBase() + 0x36042C))(this);
	}
};
