#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MFGuiManager
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD788F0);
	}
	// Fields
	template <typename T = void*> T& UILayer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& DrawDepth() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_FadeDepth() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_FadeOnStart() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_FadeDuration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& ControlEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& DEF_ALLOC_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> static T& ALPHA_LIMIT_TO_HIDE_FADE_SPRITE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppDictionary<void*, void*>*> T& m_LayoutPlatformMapping() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<void*, void*>*> T& m_PivotPlatformMapping() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Layouts() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_LastLayoutIdx() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_UiCamera() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_UiCameraHolder() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_Audio() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& m_FadeMaterial() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& m_FadeGuiRenderer() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& m_FadeSprite() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_TimeToFade() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_TotalFadeTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_CurrentFade() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_FromFade() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& m_TargetFade() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_FadeInProgress() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppDictionary<uint64_t, void*>*> T& m_GUIRenderers() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<void*>*> T& m_ObjectsToChangeVisibility() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(MFGuiManager*))(Il2CppBase() + 0x3EE330))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3EE52C))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MFGuiManager*))(Il2CppBase() + 0x3EE5D4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(MFGuiManager*))(Il2CppBase() + 0x3EEF00))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MFGuiManager*))(Il2CppBase() + 0x3EF114))(this);
	}
	template <typename T = void*> T RegisterWidget(void* w, void* material, int32_t renderQueueIdx) {
		return ((T (*)(MFGuiManager*, void*, void*, int32_t))(Il2CppBase() + 0x3EF118))(this, w, material, renderQueueIdx);
	}
	template <typename T = bool> T UnRegisterWidget(void* inWidget, void* inGuiRenderer) {
		return ((T (*)(MFGuiManager*, void*, void*))(Il2CppBase() + 0x3EF7A4))(this, inWidget, inGuiRenderer);
	}
	template <typename T = void> T RegisterLayout(void* l) {
		return ((T (*)(MFGuiManager*, void*))(Il2CppBase() + 0x3EFB38))(this, l);
	}
	template <typename T = void> T RegisterPlatform(void* platform) {
		return ((T (*)(MFGuiManager*, void*))(Il2CppBase() + 0x3EFCC0))(this, platform);
	}
	template <typename T = void*> T FindPlatform(Il2CppString* platformName) {
		return ((T (*)(MFGuiManager*, Il2CppString*))(Il2CppBase() + 0x3F005C))(this, platformName);
	}
	template <typename T = void*> T GetPlatform(void* layout) {
		return ((T (*)(MFGuiManager*, void*))(Il2CppBase() + 0x3F012C))(this, layout);
	}
	template <typename T = void*> T GetPlatform_1(void* pivot) {
		return ((T (*)(MFGuiManager*, void*))(Il2CppBase() + 0x3F01CC))(this, pivot);
	}
	template <typename T = void*> T GetLayout(Il2CppString* lName) {
		return ((T (*)(MFGuiManager*, Il2CppString*))(Il2CppBase() + 0x3F026C))(this, lName);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(MFGuiManager*))(Il2CppBase() + 0x3F03FC))(this);
	}
	template <typename T = float> T get_FadeRemainingTime() {
		return ((T (*)(MFGuiManager*))(Il2CppBase() + 0x3F0F50))(this);
	}
	template <typename T = void*> T get_FadeState() {
		return ((T (*)(MFGuiManager*))(Il2CppBase() + 0x3F0F80))(this);
	}
	template <typename T = void> T DefragmentLayouts() {
		return ((T (*)(MFGuiManager*))(Il2CppBase() + 0x3F0D70))(this);
	}
	template <typename T = void> T HideAllLayouts() {
		return ((T (*)(MFGuiManager*))(Il2CppBase() + 0x3F0FC4))(this);
	}
	template <typename T = void> T ShowLayout(void* layout, bool show) {
		return ((T (*)(MFGuiManager*, void*, bool))(Il2CppBase() + 0x3E8D1C))(this, layout, show);
	}
	template <typename T = void> T ShowWidget(void* widget, bool show, bool recursive) {
		return ((T (*)(MFGuiManager*, void*, bool, bool))(Il2CppBase() + 0x3F1034))(this, widget, show, recursive);
	}
	template <typename T = void> T ShowLayout_1(Il2CppString* name, bool show) {
		return ((T (*)(MFGuiManager*, Il2CppString*, bool))(Il2CppBase() + 0x3F1100))(this, name, show);
	}
	template <typename T = void> T ShowPivot(void* pivot, bool show) {
		return ((T (*)(MFGuiManager*, void*, bool))(Il2CppBase() + 0x3E1F54))(this, pivot, show);
	}
	template <typename T = void*> T GetPivot(Il2CppString* name) {
		return ((T (*)(MFGuiManager*, Il2CppString*))(Il2CppBase() + 0x3E8A28))(this, name);
	}
	template <typename T = void*> T StartFade(float time, float targetAlpha) {
		return ((T (*)(MFGuiManager*, float, float))(Il2CppBase() + 0x3F1280))(this, time, targetAlpha);
	}
	template <typename T = void> T StartFadeEx(float time, float targetAlpha) {
		return ((T (*)(MFGuiManager*, float, float))(Il2CppBase() + 0x3F134C))(this, time, targetAlpha);
	}
	template <typename T = void> T FadeIn(float duration, float to) {
		return ((T (*)(MFGuiManager*, float, float))(Il2CppBase() + 0x3F1498))(this, duration, to);
	}
	template <typename T = void> T SetFadeOut(float fadeOut) {
		return ((T (*)(MFGuiManager*, float))(Il2CppBase() + 0x3F1590))(this, fadeOut);
	}
	template <typename T = void> T FadeIn_1() {
		return ((T (*)(MFGuiManager*))(Il2CppBase() + 0x3F16B0))(this);
	}
	template <typename T = void> T FadeIn_2(float duration) {
		return ((T (*)(MFGuiManager*, float))(Il2CppBase() + 0x3F16BC))(this, duration);
	}
	template <typename T = void> T FadeOut(float duration, float to) {
		return ((T (*)(MFGuiManager*, float, float))(Il2CppBase() + 0x3F16C4))(this, duration, to);
	}
	template <typename T = void> T FadeOut_1() {
		return ((T (*)(MFGuiManager*))(Il2CppBase() + 0x3F16CC))(this);
	}
	template <typename T = void> T FadeOut_2(float duration) {
		return ((T (*)(MFGuiManager*, float))(Il2CppBase() + 0x3F16E0))(this, duration);
	}
	template <typename T = void> T PrepareFadeSprite() {
		return ((T (*)(MFGuiManager*))(Il2CppBase() + 0x3EE9A4))(this);
	}
	template <typename T = void> T PlayOneShot(void* c) {
		return ((T (*)(MFGuiManager*, void*))(Il2CppBase() + 0x3F1780))(this, c);
	}
	template <typename T = uint64_t> T CalcRendererKey(int32_t queueIdx, int32_t layoutId, void* mat) {
		return ((T (*)(MFGuiManager*, int32_t, int32_t, void*))(Il2CppBase() + 0x3EF710))(this, queueIdx, layoutId, mat);
	}
	template <typename T = void> static T OnLanguageChanged(Il2CppString* inNewLanguage) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3F17AC))(0, inNewLanguage);
	}
};
