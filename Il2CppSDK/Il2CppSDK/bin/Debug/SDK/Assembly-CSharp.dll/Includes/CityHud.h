#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CityHud
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_ChipsStatus() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& m_Dialog() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Indicator() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& m_SafeHaven() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& m_SafeHavenTutorial() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_Shop() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_ShopTutorial() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Equip() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& m_EquipTutorial() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_Bank() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_Casino() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_ObjectiveParent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_ObjectiveBck() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_ObjectiveText() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& m_ObjectiveOrigPos() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& m_NotificationParent() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& m_NotificationBck() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& m_NotificationText() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& m_NotificationOrigPos() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	// Methods
	template <typename T = void> T Init(void* pivot) {
		return ((T (*)(CityHud*, void*))(Il2CppBase() + 0x2AB700))(this, pivot);
	}
	template <typename T = void> T Show(Il2CppArray<void*>* indicators, void* hideout, void* shop, void* equip, void* freeGold, void* casino) {
		return ((T (*)(CityHud*, Il2CppArray<void*>*, void*, void*, void*, void*, void*))(Il2CppBase() + 0x2AB708))(this, indicators, hideout, shop, equip, freeGold, casino);
	}
	template <typename T = void> T Show_1() {
		return ((T (*)(CityHud*))(Il2CppBase() + 0x2AB738))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(CityHud*))(Il2CppBase() + 0x2AB740))(this);
	}
	template <typename T = void> T CityHudEnableInput(void* type) {
		return ((T (*)(CityHud*, void*))(Il2CppBase() + 0x2AB748))(this, type);
	}
	template <typename T = void> T CityHudDisableInput() {
		return ((T (*)(CityHud*))(Il2CppBase() + 0x2AB750))(this);
	}
	template <typename T = void> T ShowText(Il2CppString* text, void* label, void* background, Il2CppVector3 origPos) {
		return ((T (*)(CityHud*, Il2CppString*, void*, void*, Il2CppVector3))(Il2CppBase() + 0x2AB8E4))(this, text, label, background, origPos);
	}
	template <typename T = void> T ShowObjective(Il2CppString* text) {
		return ((T (*)(CityHud*, Il2CppString*))(Il2CppBase() + 0x2AB908))(this, text);
	}
	template <typename T = void> T HideObjective() {
		return ((T (*)(CityHud*))(Il2CppBase() + 0x2AB910))(this);
	}
	template <typename T = void> T ShowNotification(Il2CppString* text) {
		return ((T (*)(CityHud*, Il2CppString*))(Il2CppBase() + 0x2AB918))(this, text);
	}
	template <typename T = void> T HideNotification() {
		return ((T (*)(CityHud*))(Il2CppBase() + 0x2AB948))(this);
	}
	template <typename T = void> T ShowIndicator(void* type, int32_t index) {
		return ((T (*)(CityHud*, void*, int32_t))(Il2CppBase() + 0x2AB9C8))(this, type, index);
	}
	template <typename T = void> T ShowIndicatorTutorial(void* type) {
		return ((T (*)(CityHud*, void*))(Il2CppBase() + 0x2ABA90))(this, type);
	}
	template <typename T = void> T HideAllIndicators() {
		return ((T (*)(CityHud*))(Il2CppBase() + 0x2ABA98))(this);
	}
	template <typename T = Il2CppVector3> T GetIndicatorPos(void* type, int32_t index) {
		return ((T (*)(CityHud*, void*, int32_t))(Il2CppBase() + 0x2ABAA0))(this, type, index);
	}
	template <typename T = void> T MoveIndicator(void* type, int32_t index, Il2CppVector3 pos) {
		return ((T (*)(CityHud*, void*, int32_t, Il2CppVector3))(Il2CppBase() + 0x2ABABC))(this, type, index, pos);
	}
	template <typename T = void> T MoveIndicatorTutorial(void* type, Il2CppVector3 pos) {
		return ((T (*)(CityHud*, void*, Il2CppVector3))(Il2CppBase() + 0x2ABAE4))(this, type, pos);
	}
	template <typename T = void> T SetColor(float modif, void* widget) {
		return ((T (*)(CityHud*, float, void*))(Il2CppBase() + 0x2ABB08))(this, modif, widget);
	}
	template <typename T = void*> T Blink(void* widget) {
		return ((T (*)(CityHud*, void*))(Il2CppBase() + 0x2ABB14))(this, widget);
	}
};
