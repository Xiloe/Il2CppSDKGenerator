#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageEvent
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = Il2CppList<void*>*> T& GameEvents() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<void*>*> T& OnGameEvents() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& MaxHealth() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& AllEventsAreOn() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Health() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& GameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DamageEvent*))(Il2CppBase() + 0x2F2F0C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DamageEvent*))(Il2CppBase() + 0x2F2FEC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DamageEvent*))(Il2CppBase() + 0x2F3008))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(DamageEvent*))(Il2CppBase() + 0x2F3374))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DamageEvent*))(Il2CppBase() + 0x2F3738))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(DamageEvent*))(Il2CppBase() + 0x2F3744))(this);
	}
	template <typename T = bool> T TestEvents() {
		return ((T (*)(DamageEvent*))(Il2CppBase() + 0x2F34A8))(this);
	}
	template <typename T = void> T OnProjectileHit(void* p) {
		return ((T (*)(DamageEvent*, void*))(Il2CppBase() + 0x2F3854))(this, p);
	}
	template <typename T = void> T EventHandler(Il2CppString* name, void* state) {
		return ((T (*)(DamageEvent*, Il2CppString*, void*))(Il2CppBase() + 0x2F3B48))(this, name, state);
	}
};
