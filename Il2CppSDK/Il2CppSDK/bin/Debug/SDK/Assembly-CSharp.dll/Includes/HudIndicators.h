#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HudIndicators
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79158);
	}
	// Fields
	template <typename T = Il2CppColor> static T& red() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppColor> static T& normal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& ObjectHPs() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Money() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_HealthInitialized() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_ActualHealthSegments() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_ActualHealthSegmentsFloat() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_HealthParent() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& m_HealthText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<void*>*> T& m_Health() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<void*>*> T& m_HealthFull() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_HealthCritical() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_HealthCriticalMaxAlpha() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_HealthCriticalTimer() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_HealthHitTimer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<void*>*> T& m_HealthAnimators() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& m_CounterParent() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& m_Counter() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& m_MissionType() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& m_KillAllZombies() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& m_ProtectObjects() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& m_TimeDefense() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> T& m_CarryObjects() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& m_RepairIndicator() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& m_RepairIndicatorShow() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& m_CounterShow() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	template <typename T = void*> T& m_CarryObjectParent() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& m_CarryObjectShow() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HudIndicators*))(Il2CppBase() + 0x3AD494))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3AD550))(0);
	}
	template <typename T = bool> T VisibleOnStart() {
		return ((T (*)(HudIndicators*))(Il2CppBase() + 0x3AD650))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HudIndicators*))(Il2CppBase() + 0x3AD658))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HudIndicators*))(Il2CppBase() + 0x3AE3E0))(this);
	}
	template <typename T = void> T LateUpdate(float deltaTime) {
		return ((T (*)(HudIndicators*, float))(Il2CppBase() + 0x3AE3EC))(this, deltaTime);
	}
	template <typename T = void> T ShowWidgets(bool on) {
		return ((T (*)(HudIndicators*, bool))(Il2CppBase() + 0x3AF7B8))(this, on);
	}
	template <typename T = void> T SetMissionType(void* missionType) {
		return ((T (*)(HudIndicators*, void*))(Il2CppBase() + 0x3AFD30))(this, missionType);
	}
	template <typename T = void> T SetCounter(int32_t val) {
		return ((T (*)(HudIndicators*, int32_t))(Il2CppBase() + 0x3AE250))(this, val);
	}
	template <typename T = void> T SetCounterTime(float seconds) {
		return ((T (*)(HudIndicators*, float))(Il2CppBase() + 0x3AFD38))(this, seconds);
	}
	template <typename T = void> T ShowCounter(bool show) {
		return ((T (*)(HudIndicators*, bool))(Il2CppBase() + 0x3AFB44))(this, show);
	}
	template <typename T = void> T ShowCarryObjectIcon(bool show) {
		return ((T (*)(HudIndicators*, bool))(Il2CppBase() + 0x3AFF44))(this, show);
	}
	template <typename T = void> T RegisterObjectHP(void* obj) {
		return ((T (*)(HudIndicators*, void*))(Il2CppBase() + 0x3AFF84))(this, obj);
	}
	template <typename T = void> T UnregisterObjectHP(void* obj) {
		return ((T (*)(HudIndicators*, void*))(Il2CppBase() + 0x3B02A8))(this, obj);
	}
	template <typename T = void> T SetObjectHP(void* obj, float HP, bool highlight) {
		return ((T (*)(HudIndicators*, void*, float, bool))(Il2CppBase() + 0x3B0600))(this, obj, HP, highlight);
	}
	template <typename T = void> T ShowRepairIndicator(void* obj, bool show) {
		return ((T (*)(HudIndicators*, void*, bool))(Il2CppBase() + 0x3B0BA0))(this, obj, show);
	}
	template <typename T = void*> T HighlightObject(void* sprite) {
		return ((T (*)(HudIndicators*, void*))(Il2CppBase() + 0x3B0AF8))(this, sprite);
	}
	template <typename T = void*> T HighlightObject2(void* sprite) {
		return ((T (*)(HudIndicators*, void*))(Il2CppBase() + 0x3B0EF0))(this, sprite);
	}
	template <typename T = int32_t> T GetMaxHealthSegments() {
		return ((T (*)(HudIndicators*))(Il2CppBase() + 0x3B0FA8))(this);
	}
	template <typename T = float> T GetActualHealthSegmentsFloat() {
		return ((T (*)(HudIndicators*))(Il2CppBase() + 0x3B10F4))(this);
	}
	template <typename T = int32_t> T GetActualHealthSegments() {
		return ((T (*)(HudIndicators*))(Il2CppBase() + 0x3B11F8))(this);
	}
	template <typename T = void> T InitHealth() {
		return ((T (*)(HudIndicators*))(Il2CppBase() + 0x3AE4A4))(this);
	}
	template <typename T = void> T UpdateCriticalHealth(float deltaTime) {
		return ((T (*)(HudIndicators*, float))(Il2CppBase() + 0x3AED98))(this, deltaTime);
	}
	template <typename T = float> T ComputeAlpha(void* timer, float maxAlpha, float blendIn, float showHold, float blendOut, float hideHold, bool onlyOnce) {
		return ((T (*)(HudIndicators*, void*, float, float, float, float, float, bool))(Il2CppBase() + 0x3B1384))(this, timer, maxAlpha, blendIn, showHold, blendOut, hideHold, onlyOnce);
	}
	template <typename T = void> T UpdateHealth(bool forced) {
		return ((T (*)(HudIndicators*, bool))(Il2CppBase() + 0x3AE910))(this, forced);
	}
	template <typename T = Il2CppString*> T FormatTime(float timeInSeconds) {
		return ((T (*)(HudIndicators*, float))(Il2CppBase() + 0x3AFD70))(this, timeInSeconds);
	}
};
