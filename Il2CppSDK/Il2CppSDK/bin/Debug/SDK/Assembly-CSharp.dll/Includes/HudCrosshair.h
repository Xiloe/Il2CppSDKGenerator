#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HudCrosshair
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD7913C);
	}
	// Fields
	template <typename T = float> T& TimeToFinishIronSight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& CrosshairParent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& CrosshairCenter() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& CrosshairLeft() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& CrosshairRight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& CrosshairUp() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& CrosshairDown() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& HitLeftUp() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& HitLeftDown() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& HitRightUp() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& HitRightDown() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_TargetHit() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_TargetHitTimer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppColor> T& m_NeutralEffective() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppColor> T& m_EnemyEffective() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppColor> T& m_EnemyIneffective() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& s_PivotMainName() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& s_LayoutMainName() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& s_CrosshairParentName() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<void*>*> T& s_CrosshairName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(HudCrosshair*))(Il2CppBase() + 0x3A7DCC))(this);
	}
	template <typename T = bool> T VisibleOnStart() {
		return ((T (*)(HudCrosshair*))(Il2CppBase() + 0x3A8368))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(HudCrosshair*))(Il2CppBase() + 0x3A8370))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HudCrosshair*))(Il2CppBase() + 0x3A8918))(this);
	}
	template <typename T = void> T LateUpdate(float deltaTime) {
		return ((T (*)(HudCrosshair*, float))(Il2CppBase() + 0x3A891C))(this, deltaTime);
	}
	template <typename T = void> T LateUpdate100ms() {
		return ((T (*)(HudCrosshair*))(Il2CppBase() + 0x3A93E0))(this);
	}
	template <typename T = void> T ShowWidgets(bool on) {
		return ((T (*)(HudCrosshair*, bool))(Il2CppBase() + 0x3A9C38))(this, on);
	}
	template <typename T = void> T TargetHit() {
		return ((T (*)(HudCrosshair*))(Il2CppBase() + 0x3A9D5C))(this);
	}
	template <typename T = void> T HideHitIndicator() {
		return ((T (*)(HudCrosshair*))(Il2CppBase() + 0x3A9C90))(this);
	}
	template <typename T = void> T UpdateCrosshairInternal() {
		return ((T (*)(HudCrosshair*))(Il2CppBase() + 0x3A93E4))(this);
	}
	template <typename T = void> T UpdateCrosshairMovement(float deltaTime) {
		return ((T (*)(HudCrosshair*, float))(Il2CppBase() + 0x3A8CCC))(this, deltaTime);
	}
};
