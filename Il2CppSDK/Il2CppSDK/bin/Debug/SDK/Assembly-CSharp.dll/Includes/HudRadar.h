#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HudRadar
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79140);
	}
	// Fields
	template <typename T = Il2CppArray<void*>*> static T& s_RadarEnemyNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<void*>*> T& SpecialObjects() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Radar() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& RadarCenter() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& Pulse() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& EnemyBehind() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<void*>*> T& RadarEnemies() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& PulseTimer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& RadarRange() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& RadarScreenRadius() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& RadarCenterRadius() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HudRadar*))(Il2CppBase() + 0x3B6EB4))(this);
	}
	template <typename T = void> static T _cctor() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B6F5C))(0);
	}
	template <typename T = bool> T VisibleOnStart() {
		return ((T (*)(HudRadar*))(Il2CppBase() + 0x3B7408))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HudRadar*))(Il2CppBase() + 0x3B7410))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HudRadar*))(Il2CppBase() + 0x3B808C))(this);
	}
	template <typename T = void> T LateUpdate(float deltaTime) {
		return ((T (*)(HudRadar*, float))(Il2CppBase() + 0x3B8090))(this, deltaTime);
	}
	template <typename T = void> T LateUpdate100ms() {
		return ((T (*)(HudRadar*))(Il2CppBase() + 0x3B9238))(this);
	}
	template <typename T = void> T ShowWidgets(bool on) {
		return ((T (*)(HudRadar*, bool))(Il2CppBase() + 0x3B92F0))(this, on);
	}
	template <typename T = void> T RegisterObject(void* obj, void* objType) {
		return ((T (*)(HudRadar*, void*, void*))(Il2CppBase() + 0x3B9350))(this, obj, objType);
	}
	template <typename T = void> T HighlightObject(void* obj, bool highlight) {
		return ((T (*)(HudRadar*, void*, bool))(Il2CppBase() + 0x3B969C))(this, obj, highlight);
	}
	template <typename T = void> T UnregisterObject(void* obj, void* objType) {
		return ((T (*)(HudRadar*, void*, void*))(Il2CppBase() + 0x3B9AC0))(this, obj, objType);
	}
	template <typename T = void*> T HighlightObject_1(void* sprite) {
		return ((T (*)(HudRadar*, void*))(Il2CppBase() + 0x3B9A18))(this, sprite);
	}
	template <typename T = void> T UpdatePulse(float deltaTime) {
		return ((T (*)(HudRadar*, float))(Il2CppBase() + 0x3B8158))(this, deltaTime);
	}
	template <typename T = float> T GetPulseModificator() {
		return ((T (*)(HudRadar*))(Il2CppBase() + 0x3B9D70))(this);
	}
	template <typename T = void> T UpdateRadarInternal(bool forced) {
		return ((T (*)(HudRadar*, bool))(Il2CppBase() + 0x3B83CC))(this, forced);
	}
};
