#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Pickup
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& m_Obj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& m_ObjXFrom() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& m_Anim() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& m_Rotator() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& m_Status() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_ExpirationTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& m_OnActivationEffects() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& m_OnPickupEffects() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_OnExpirationEffects() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& m_Effects() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& IsMarked() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(Pickup*))(Il2CppBase() + 0x1EF9E8))(this);
	}
	template <typename T = void*> T get_GameObj() {
		return ((T (*)(Pickup*))(Il2CppBase() + 0x1EFAC8))(this);
	}
	template <typename T = Il2CppVector3> T get_Position() {
		return ((T (*)(Pickup*))(Il2CppBase() + 0x1EFAD0))(this);
	}
	template <typename T = float> T get_LifeTime() {
		return ((T (*)(Pickup*))(Il2CppBase() + 0x1EFAFC))(this);
	}
	template <typename T = bool> T get_IsInvalid() {
		return ((T (*)(Pickup*))(Il2CppBase() + 0x1EFB04))(this);
	}
	template <typename T = bool> T get_IsMarked() {
		return ((T (*)(Pickup*))(Il2CppBase() + 0x1EFB18))(this);
	}
	template <typename T = void> T set_IsMarked(bool value) {
		return ((T (*)(Pickup*, bool))(Il2CppBase() + 0x1EFB20))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Pickup*))(Il2CppBase() + 0x1EFB28))(this);
	}
	template <typename T = void> T DroppedOut(Il2CppVector3 Pos, float Expiration) {
		return ((T (*)(Pickup*, Il2CppVector3, float))(Il2CppBase() + 0x1EFC5C))(this, Pos, Expiration);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Pickup*))(Il2CppBase() + 0x1EFEE8))(this);
	}
	template <typename T = void> T PickedUp() {
		return ((T (*)(Pickup*))(Il2CppBase() + 0x1F0824))(this);
	}
	template <typename T = bool> T CanBePickedUp(bool EndOfMission) {
		return ((T (*)(Pickup*, bool))(Il2CppBase() + 0x1F0834))(this, EndOfMission);
	}
	template <typename T = void> T Expired() {
		return ((T (*)(Pickup*))(Il2CppBase() + 0x1F02CC))(this);
	}
	template <typename T = void> T OnExpiration() {
		return ((T (*)(Pickup*))(Il2CppBase() + 0x1F085C))(this);
	}
	template <typename T = void> T StartEffects(void* E) {
		return ((T (*)(Pickup*, void*))(Il2CppBase() + 0x1EFD7C))(this, E);
	}
	template <typename T = bool> T AreEffectsFinished() {
		return ((T (*)(Pickup*))(Il2CppBase() + 0x1F0120))(this);
	}
	template <typename T = void> T CompensateSlowMotion(float Ratio) {
		return ((T (*)(Pickup*, float))(Il2CppBase() + 0x1F031C))(this, Ratio);
	}
	template <typename T = void*> T GetID() {
		return ((T (*)(Pickup*))(Il2CppBase() + 0x1F0860))(this);
	}
};
