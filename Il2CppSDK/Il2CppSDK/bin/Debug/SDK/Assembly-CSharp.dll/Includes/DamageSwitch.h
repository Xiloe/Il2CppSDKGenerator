#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageSwitch
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& SetGameEventsOn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& SetGameEventsOff() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<void*>*> T& OnGameEvents() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MaxHealth() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& SwitchDelay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& DefaultState() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& Collider() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& Health() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& State() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DamageSwitch*))(Il2CppBase() + 0x2F3C08))(this);
	}
	template <typename T = float> T get_Health() {
		return ((T (*)(DamageSwitch*))(Il2CppBase() + 0x2F3D00))(this);
	}
	template <typename T = void> T set_Health(float value) {
		return ((T (*)(DamageSwitch*, float))(Il2CppBase() + 0x2F3D08))(this, value);
	}
	template <typename T = void*> T get_State() {
		return ((T (*)(DamageSwitch*))(Il2CppBase() + 0x2F3D10))(this);
	}
	template <typename T = void> T set_State(void* value) {
		return ((T (*)(DamageSwitch*, void*))(Il2CppBase() + 0x2F3D18))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DamageSwitch*))(Il2CppBase() + 0x2F3D20))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(DamageSwitch*))(Il2CppBase() + 0x2F3E68))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DamageSwitch*))(Il2CppBase() + 0x2F3E50))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(DamageSwitch*))(Il2CppBase() + 0x2F3F54))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(DamageSwitch*))(Il2CppBase() + 0x2F4040))(this);
	}
	template <typename T = void> T OnProjectileHit(void* p) {
		return ((T (*)(DamageSwitch*, void*))(Il2CppBase() + 0x2F4044))(this, p);
	}
	template <typename T = void*> T SwitchToOff() {
		return ((T (*)(DamageSwitch*))(Il2CppBase() + 0x2F4194))(this);
	}
	template <typename T = void*> T SwitchToOn() {
		return ((T (*)(DamageSwitch*))(Il2CppBase() + 0x2F40F0))(this);
	}
};
