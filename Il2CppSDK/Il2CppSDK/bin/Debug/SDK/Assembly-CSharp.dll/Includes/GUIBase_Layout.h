#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUIBaseLayout
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD790B0);
	}
	// Fields
	template <typename T = void*> T& m_InAnimation() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_OutAnimation() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_InSound() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_OutSound() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_FadeAlpha() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_LayoutLayer() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_GuiManager() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_IsVisible() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_Initialized() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = int32_t> T& m_FingerId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Widgets() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<void*>*> T& m_TouchSensitiveWidgets() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_TouchedWidget() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& m_MouseOverWidget() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector2> T& m_LayoutScale() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector2> T& m_PlatformSize() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& m_Anim() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_IsPlayingAnimation() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& m_ParentPivot() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& MAX_LAYERS() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_LayoutUniqueId() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> static T& ms_LayoutUniqueIdCnt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& m_LayoutTouchDelegate() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& m_EnableControls() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GUIBaseLayout*))(Il2CppBase() + 0x35F4C4))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x35F678))(0);
	}
	template <typename T = bool> T FingerIdInUse(int32_t fingerId) {
		return ((T (*)(GUIBaseLayout*, int32_t))(Il2CppBase() + 0x35F6FC))(this, fingerId);
	}
	template <typename T = bool> T get_ShowDone() {
		return ((T (*)(GUIBaseLayout*))(Il2CppBase() + 0x35F710))(this);
	}
	template <typename T = bool> T get_HideDone() {
		return ((T (*)(GUIBaseLayout*))(Il2CppBase() + 0x35F734))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GUIBaseLayout*))(Il2CppBase() + 0x35F75C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GUIBaseLayout*))(Il2CppBase() + 0x35FA54))(this);
	}
	template <typename T = void> T RegisterFocusDelegate(void* f) {
		return ((T (*)(GUIBaseLayout*, void*))(Il2CppBase() + 0x35FA64))(this, f);
	}
	template <typename T = void> T RegisterLayoutTouchDelegate(void* d) {
		return ((T (*)(GUIBaseLayout*, void*))(Il2CppBase() + 0x35FA68))(this, d);
	}
	template <typename T = void> T SetPlatformSize(int32_t width, int32_t height, float scaleX, float scaleY) {
		return ((T (*)(GUIBaseLayout*, int32_t, int32_t, float, float))(Il2CppBase() + 0x35FA70))(this, width, height, scaleX, scaleY);
	}
	template <typename T = void> T GUIUpdate(float parentAlpha) {
		return ((T (*)(GUIBaseLayout*, float))(Il2CppBase() + 0x35FA98))(this, parentAlpha);
	}
	template <typename T = void> T LateInit() {
		return ((T (*)(GUIBaseLayout*))(Il2CppBase() + 0x360148))(this);
	}
	template <typename T = void> T UpdateGUIInput() {
		return ((T (*)(GUIBaseLayout*))(Il2CppBase() + 0x35FB40))(this);
	}
	template <typename T = Il2CppVector2> T ScreenPosToLayoutSpace(Il2CppVector2 pos) {
		return ((T (*)(GUIBaseLayout*, Il2CppVector2))(Il2CppBase() + 0x360808))(this, pos);
	}
	template <typename T = Il2CppVector2> T ScreenDeltaToLayoutSpace(Il2CppVector2 offset) {
		return ((T (*)(GUIBaseLayout*, Il2CppVector2))(Il2CppBase() + 0x360848))(this, offset);
	}
	template <typename T = Il2CppVector2> T LayoutSpacePosToScreen(Il2CppVector2 pos) {
		return ((T (*)(GUIBaseLayout*, Il2CppVector2))(Il2CppBase() + 0x36087C))(this, pos);
	}
	template <typename T = Il2CppVector2> T LayoutSpaceDeltaToScreen(Il2CppVector2 offset) {
		return ((T (*)(GUIBaseLayout*, Il2CppVector2))(Il2CppBase() + 0x3608B4))(this, offset);
	}
	template <typename T = void> T EnableControls(bool on) {
		return ((T (*)(GUIBaseLayout*, bool))(Il2CppBase() + 0x355BB8))(this, on);
	}
	template <typename T = void> T HandleGuiInputEvent(void* touchPhase, Il2CppVector2 eventPos, bool mouse) {
		return ((T (*)(GUIBaseLayout*, void*, Il2CppVector2, bool))(Il2CppBase() + 0x3604D0))(this, touchPhase, eventPos, mouse);
	}
	template <typename T = void> T ShowWidget(Il2CppString* widgetID, bool v) {
		return ((T (*)(GUIBaseLayout*, Il2CppString*, bool))(Il2CppBase() + 0x36096C))(this, widgetID, v);
	}
	template <typename T = void*> T GetWidget(Il2CppString* wName, bool reportError) {
		return ((T (*)(GUIBaseLayout*, Il2CppString*, bool))(Il2CppBase() + 0x360AA4))(this, wName, reportError);
	}
	template <typename T = void> T RegisterButtonTouchDelegate(Il2CppString* widgetID, void* f) {
		return ((T (*)(GUIBaseLayout*, Il2CppString*, void*))(Il2CppBase() + 0x360E88))(this, widgetID, f);
	}
	template <typename T = void> T ShowImmediate(bool showFlag, bool playAnimAndSound) {
		return ((T (*)(GUIBaseLayout*, bool, bool))(Il2CppBase() + 0x360FF4))(this, showFlag, playAnimAndSound);
	}
	template <typename T = bool> T IsVisible() {
		return ((T (*)(GUIBaseLayout*))(Il2CppBase() + 0x361478))(this);
	}
	template <typename T = int32_t> T GetUniqueId() {
		return ((T (*)(GUIBaseLayout*))(Il2CppBase() + 0x361480))(this);
	}
	template <typename T = void> T PlayAnim(void* animation, void* widget, void* finishDelegate, int32_t customIdx) {
		return ((T (*)(GUIBaseLayout*, void*, void*, void*, int32_t))(Il2CppBase() + 0x361414))(this, animation, widget, finishDelegate, customIdx);
	}
	template <typename T = void> T StopAnim(void* animation) {
		return ((T (*)(GUIBaseLayout*, void*))(Il2CppBase() + 0x3613BC))(this, animation);
	}
	template <typename T = void> T PlayAnimClip(void* clip) {
		return ((T (*)(GUIBaseLayout*, void*))(Il2CppBase() + 0x361928))(this, clip);
	}
	template <typename T = void> T StopCurrentAnimClip() {
		return ((T (*)(GUIBaseLayout*))(Il2CppBase() + 0x36197C))(this);
	}
	template <typename T = void> T LayoutAnimFinished(int32_t idx) {
		return ((T (*)(GUIBaseLayout*, int32_t))(Il2CppBase() + 0x361984))(this, idx);
	}
	template <typename T = float> T GetParentFadeAlpha() {
		return ((T (*)(GUIBaseLayout*))(Il2CppBase() + 0x361A08))(this);
	}
	template <typename T = float> T GetFadeAlpha(bool recursive) {
		return ((T (*)(GUIBaseLayout*, bool))(Il2CppBase() + 0x361A94))(this, recursive);
	}
	template <typename T = void> T PrepareParent() {
		return ((T (*)(GUIBaseLayout*))(Il2CppBase() + 0x35F960))(this);
	}
	template <typename T = void> T ReleaseFinger(void* touch) {
		return ((T (*)(GUIBaseLayout*, void*))(Il2CppBase() + 0x361ABC))(this, touch);
	}
	template <typename T = void> T ReleaseFinger_1() {
		return ((T (*)(GUIBaseLayout*))(Il2CppBase() + 0x360434))(this);
	}
};
