#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HudCombatInfo
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD79164);
	}
	// Fields
	template <typename T = Il2CppDictionary<void*, void*>*> T& Messages() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& HitInfo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& RankInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& AchievementInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HudCombatInfo*))(Il2CppBase() + 0x37D2CC))(this);
	}
	template <typename T = bool> T VisibleOnStart() {
		return ((T (*)(HudCombatInfo*))(Il2CppBase() + 0x3A1C8C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HudCombatInfo*))(Il2CppBase() + 0x3A1C94))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(HudCombatInfo*))(Il2CppBase() + 0x3A22C0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HudCombatInfo*))(Il2CppBase() + 0x3A2560))(this);
	}
	template <typename T = void> T LateUpdate(float deltaTime) {
		return ((T (*)(HudCombatInfo*, float))(Il2CppBase() + 0x3A2564))(this, deltaTime);
	}
	template <typename T = void> T ShowWidgets(bool on) {
		return ((T (*)(HudCombatInfo*, bool))(Il2CppBase() + 0x3A29C8))(this, on);
	}
	template <typename T = void> T ShowInfo(void* message, float speed) {
		return ((T (*)(HudCombatInfo*, void*, float))(Il2CppBase() + 0x381700))(this, message, speed);
	}
	template <typename T = void> T ShowHit() {
		return ((T (*)(HudCombatInfo*))(Il2CppBase() + 0x3816D4))(this);
	}
	template <typename T = void> T ShowNewRank() {
		return ((T (*)(HudCombatInfo*))(Il2CppBase() + 0x3A2CE8))(this);
	}
	template <typename T = void> T ShowAchievement(Il2CppString* text) {
		return ((T (*)(HudCombatInfo*, Il2CppString*))(Il2CppBase() + 0x3813F4))(this, text);
	}
	template <typename T = int32_t> static T ShowInfom__1C(void* p1, void* p2) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x3A2EB8))(0, p1, p2);
	}
};
