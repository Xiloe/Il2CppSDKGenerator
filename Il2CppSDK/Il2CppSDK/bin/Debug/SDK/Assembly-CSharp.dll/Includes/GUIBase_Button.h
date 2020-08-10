#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GUIBaseButton
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& initStateDisabled() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_TouchableAreaWidthScale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_TouchableAreaHeightScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& idleAnimationLoop() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& idleLabel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& disabledSprite() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& disabledAnimationLoop() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& disabledLabel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& disabledSound() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& mouseOverSprite() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& mouseOverAnimationLoop() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& mouseOverSoundIn() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& mouseOverLabel() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& buttonDownSprite() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& buttonDownAnimationLoop() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& buttonDownSoundIn() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& buttonDownSoundOut() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& buttonDownLabel() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& m_ParentWidget() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& m_ValueChangedInParent() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& inputButton() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> T& m_TouchDelegate() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = void*> T& m_ReleaseDelegate() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = void*> T& m_TouchDelegate2() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = void*> T& m_ReleaseDelegate2() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = void*> T& m_CancelDelegate2() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> T& m_Widget() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = void*> T& m_CurrentState() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = void*> T& m_NextState() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = void*> T& m_PrevState() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = void*> T& m_Substate() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<void*>*> T& m_UsedSpritesUV() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = void*> T& m_Anim() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& m_WasTouched() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Labels() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& m_Disabled() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& m_ForceHighlight() {
		return *(T*)((uintptr_t)this + 0xA1);
	}
	template <typename T = Il2CppString*> T& m_Text() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& m_TextID() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& autoColorLabels() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& stayDown() {
		return *(T*)((uintptr_t)this + 0xAD);
	}
	template <typename T = bool> T& isDown() {
		return *(T*)((uintptr_t)this + 0xAE);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(GUIBaseButton*))(Il2CppBase() + 0x3565F8))(this);
	}
	template <typename T = void*> T get_Widget() {
		return ((T (*)(GUIBaseButton*))(Il2CppBase() + 0x355DE0))(this);
	}
	template <typename T = bool> T IsDisabled() {
		return ((T (*)(GUIBaseButton*))(Il2CppBase() + 0x3566EC))(this);
	}
	template <typename T = bool> T get_autoColorLabels() {
		return ((T (*)(GUIBaseButton*))(Il2CppBase() + 0x3566F4))(this);
	}
	template <typename T = void> T set_autoColorLabels(bool value) {
		return ((T (*)(GUIBaseButton*, bool))(Il2CppBase() + 0x3566FC))(this, value);
	}
	template <typename T = bool> T get_stayDown() {
		return ((T (*)(GUIBaseButton*))(Il2CppBase() + 0x356704))(this);
	}
	template <typename T = void> T set_stayDown(bool value) {
		return ((T (*)(GUIBaseButton*, bool))(Il2CppBase() + 0x35670C))(this, value);
	}
	template <typename T = bool> T get_isDown() {
		return ((T (*)(GUIBaseButton*))(Il2CppBase() + 0x356714))(this);
	}
	template <typename T = void> T set_isDown(bool value) {
		return ((T (*)(GUIBaseButton*, bool))(Il2CppBase() + 0x35671C))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GUIBaseButton*))(Il2CppBase() + 0x356724))(this);
	}
	template <typename T = void> T Show(bool inShow) {
		return ((T (*)(GUIBaseButton*, bool))(Il2CppBase() + 0x356890))(this, inShow);
	}
	template <typename T = void> T SetLabel(void* w, int32_t stateIdx) {
		return ((T (*)(GUIBaseButton*, void*, int32_t))(Il2CppBase() + 0x356964))(this, w, stateIdx);
	}
	template <typename T = void> T SetNewText(int32_t inTextID) {
		return ((T (*)(GUIBaseButton*, int32_t))(Il2CppBase() + 0x356AE8))(this, inTextID);
	}
	template <typename T = void> T SetNewText_1(Il2CppString* inText) {
		return ((T (*)(GUIBaseButton*, Il2CppString*))(Il2CppBase() + 0x356CCC))(this, inText);
	}
	template <typename T = Il2CppString*> T GetText() {
		return ((T (*)(GUIBaseButton*))(Il2CppBase() + 0x356DFC))(this);
	}
	template <typename T = void> T SetDisabled(bool disabled) {
		return ((T (*)(GUIBaseButton*, bool))(Il2CppBase() + 0x356E4C))(this, disabled);
	}
	template <typename T = void> T ForceHighlight(bool on) {
		return ((T (*)(GUIBaseButton*, bool))(Il2CppBase() + 0x356EF0))(this, on);
	}
	template <typename T = void> T ForceDownStatus(bool inDown) {
		return ((T (*)(GUIBaseButton*, bool))(Il2CppBase() + 0x356F0C))(this, inDown);
	}
	template <typename T = void> T ForceUpdateButtonVisualState() {
		return ((T (*)(GUIBaseButton*))(Il2CppBase() + 0x3568CC))(this);
	}
	template <typename T = void> T CustomInit() {
		return ((T (*)(GUIBaseButton*))(Il2CppBase() + 0x356FDC))(this);
	}
	template <typename T = void> T PrepareUV(void* w, int32_t idx) {
		return ((T (*)(GUIBaseButton*, void*, int32_t))(Il2CppBase() + 0x357164))(this, w, idx);
	}
	template <typename T = void> T RegisterTouchDelegate(void* d) {
		return ((T (*)(GUIBaseButton*, void*))(Il2CppBase() + 0x3572C4))(this, d);
	}
	template <typename T = void> T RegisterReleaseDelegate(void* d) {
		return ((T (*)(GUIBaseButton*, void*))(Il2CppBase() + 0x3572CC))(this, d);
	}
	template <typename T = void> T RegisterTouchDelegate2(void* d) {
		return ((T (*)(GUIBaseButton*, void*))(Il2CppBase() + 0x3572D4))(this, d);
	}
	template <typename T = void> T RegisterReleaseDelegate2(void* d) {
		return ((T (*)(GUIBaseButton*, void*))(Il2CppBase() + 0x3572DC))(this, d);
	}
	template <typename T = void> T RegisterCancelDelegate2(void* d) {
		return ((T (*)(GUIBaseButton*, void*))(Il2CppBase() + 0x3572E4))(this, d);
	}
	template <typename T = bool> T Callback(void* type) {
		return ((T (*)(GUIBaseButton*, void*))(Il2CppBase() + 0x3572EC))(this, type);
	}
	template <typename T = void> T GetTouchAreaScale(void** scaleWidth, void** scaleHeight) {
		return ((T (*)(GUIBaseButton*, void**, void**))(Il2CppBase() + 0x357AE8))(this, scaleWidth, scaleHeight);
	}
	template <typename T = void> T SwitchButtonSprite(int32_t idx, int32_t prevState) {
		return ((T (*)(GUIBaseButton*, int32_t, int32_t))(Il2CppBase() + 0x357AFC))(this, idx, prevState);
	}
	template <typename T = void> T ChangeButtonState(void* s) {
		return ((T (*)(GUIBaseButton*, void*))(Il2CppBase() + 0x356F28))(this, s);
	}
	template <typename T = void> T UpdateButton() {
		return ((T (*)(GUIBaseButton*))(Il2CppBase() + 0x357D68))(this);
	}
	template <typename T = void> T UpdateSubstate(void* animLoop, void* sndIn, void* sndOut) {
		return ((T (*)(GUIBaseButton*, void*, void*, void*))(Il2CppBase() + 0x357DD8))(this, animLoop, sndIn, sndOut);
	}
};
