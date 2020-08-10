#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CityGUIResources
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78B00);
	}
	// Fields
	template <typename T = void*> T& m_StatusBar() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_ScreenFade() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_CityHud() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(CityGUIResources*))(Il2CppBase() + 0x2A70AC))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(CityGUIResources*))(Il2CppBase() + 0x2A7424))(this);
	}
	template <typename T = void*> T get_statusBar() {
		return ((T (*)(CityGUIResources*))(Il2CppBase() + 0x2A76AC))(this);
	}
	template <typename T = void> T ShowScreenFade(bool instant) {
		return ((T (*)(CityGUIResources*, bool))(Il2CppBase() + 0x2A76B4))(this, instant);
	}
	template <typename T = void> T HideScreenFade() {
		return ((T (*)(CityGUIResources*))(Il2CppBase() + 0x2A77E4))(this);
	}
	template <typename T = void> T ShowCityHud(Il2CppArray<void*>* indicators, void* hideout, void* shop, void* equip, void* freeGold, void* casino) {
		return ((T (*)(CityGUIResources*, Il2CppArray<void*>*, void*, void*, void*, void*, void*))(Il2CppBase() + 0x2A7884))(this, indicators, hideout, shop, equip, freeGold, casino);
	}
	template <typename T = void> T ShowCityHud_1() {
		return ((T (*)(CityGUIResources*))(Il2CppBase() + 0x2A7B10))(this);
	}
	template <typename T = void> T HideCityHud() {
		return ((T (*)(CityGUIResources*))(Il2CppBase() + 0x2A7BF0))(this);
	}
	template <typename T = void> T CityHudEnableInput(void* type) {
		return ((T (*)(CityGUIResources*, void*))(Il2CppBase() + 0x2A7CD0))(this, type);
	}
	template <typename T = void> T CityHudDisableInput() {
		return ((T (*)(CityGUIResources*))(Il2CppBase() + 0x2A7E2C))(this);
	}
	template <typename T = void> T ShowObjective(Il2CppString* text) {
		return ((T (*)(CityGUIResources*, Il2CppString*))(Il2CppBase() + 0x2A7F18))(this, text);
	}
	template <typename T = void> T HideObjective() {
		return ((T (*)(CityGUIResources*))(Il2CppBase() + 0x2A8024))(this);
	}
	template <typename T = void> T ShowNotification(Il2CppString* text) {
		return ((T (*)(CityGUIResources*, Il2CppString*))(Il2CppBase() + 0x2A8060))(this, text);
	}
	template <typename T = void> T HideNotification() {
		return ((T (*)(CityGUIResources*))(Il2CppBase() + 0x2A8090))(this);
	}
	template <typename T = void> T ShowIndicator(void* type, int32_t index) {
		return ((T (*)(CityGUIResources*, void*, int32_t))(Il2CppBase() + 0x2A80CC))(this, type, index);
	}
	template <typename T = void> T ShowIndicatorTutorial(void* type) {
		return ((T (*)(CityGUIResources*, void*))(Il2CppBase() + 0x2A81DC))(this, type);
	}
	template <typename T = void> T HideAllIndicators() {
		return ((T (*)(CityGUIResources*))(Il2CppBase() + 0x2A82C8))(this);
	}
	template <typename T = Il2CppVector3> T GetIndicatorPos(void* type, int32_t index) {
		return ((T (*)(CityGUIResources*, void*, int32_t))(Il2CppBase() + 0x2A84BC))(this, type, index);
	}
	template <typename T = void> T MoveIndicator(void* type, int32_t index, Il2CppVector3 pos) {
		return ((T (*)(CityGUIResources*, void*, int32_t, Il2CppVector3))(Il2CppBase() + 0x2A85DC))(this, type, index, pos);
	}
	template <typename T = void> T MoveIndicatorTutorial(void* type, Il2CppVector3 pos) {
		return ((T (*)(CityGUIResources*, void*, Il2CppVector3))(Il2CppBase() + 0x2A8704))(this, type, pos);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CityGUIResources*))(Il2CppBase() + 0x2A7150))(this);
	}
	template <typename T = void> T DestroyInternal() {
		return ((T (*)(CityGUIResources*))(Il2CppBase() + 0x2A7428))(this);
	}
	template <typename T = void> T EnableStatusBarButtons(bool hidden) {
		return ((T (*)(CityGUIResources*, bool))(Il2CppBase() + 0x2A99B4))(this, hidden);
	}
	template <typename T = void> T OnChipsChanged() {
		return ((T (*)(CityGUIResources*))(Il2CppBase() + 0x2A98E0))(this);
	}
	template <typename T = void> T SetChipsAnimate(int32_t Chips) {
		return ((T (*)(CityGUIResources*, int32_t))(Il2CppBase() + 0x2A99E0))(this, Chips);
	}
	template <typename T = void*> static T HighlightObject(void* sprite) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2A52DC))(0, sprite);
	}
	template <typename T = void*> static T AnimateNumber(int32_t initValue, int32_t finalValue, void* number, float speedModif, Il2CppString* suffix) {
		return ((T (*)(void *, int32_t, int32_t, void*, float, Il2CppString*))(Il2CppBase() + 0x291D1C))(0, initValue, finalValue, number, speedModif, suffix);
	}
	template <typename T = void*> static T RewardTimer(void* timer) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x2A9B30))(0, timer);
	}
	template <typename T = void*> static T ShowDialog(void* layout, Il2CppVector3 origPos) {
		return ((T (*)(void *, void*, Il2CppVector3))(Il2CppBase() + 0x291F88))(0, layout, origPos);
	}
	template <typename T = void*> static T Reset(void* layout, Il2CppVector3 origPos) {
		return ((T (*)(void *, void*, Il2CppVector3))(Il2CppBase() + 0x291EBC))(0, layout, origPos);
	}
	template <typename T = void*> static T HideDialog(void* layout, Il2CppVector3 origPos) {
		return ((T (*)(void *, void*, Il2CppVector3))(Il2CppBase() + 0x29272C))(0, layout, origPos);
	}
	template <typename T = void*> static T InternalShowHideDialog(void* layout, Il2CppVector3 origPos, float totalTime, bool show, float initDelay) {
		return ((T (*)(void *, void*, Il2CppVector3, float, bool, float))(Il2CppBase() + 0x2A9BDC))(0, layout, origPos, totalTime, show, initDelay);
	}
};
